#include<iostream>
using namespace std;
int binarySearch(int arr[] , int size , int key){
    int start=0;
    int end = size-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start=mid+1;
        }
        else {
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}

int main(){
    int even[8]={2,3,4,5,6,7,8,9};
    int odd[5]={12,13,14,15,16};

    int evenIndex = binarySearch(even,8,7);
    cout<<"Index of  7 is "<<evenIndex<<endl;

    int oddIndex = binarySearch(odd,5,15);
    cout<<"Index of 15 is"<<oddIndex<<endl;

}