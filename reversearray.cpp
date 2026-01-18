#include<iostream>
using namespace std;
//function
void reverse(int arr[],int n){
int start=0;
int end = n-1;
while(start<=end){
    swap(arr[start], arr[end]);
        start++;
        end--;

}}



void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}



int main(){
int arr[5]={3,5,8,3,6};
int brr[6]={1,7,9,4,3,7};

reverse(arr,5);
reverse(brr,6);

//print
printArray(arr,5);
printArray(brr,6);

return 0;




}