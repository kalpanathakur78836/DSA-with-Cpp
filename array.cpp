#include<iostream>
using namespace std;
//functioncall
void printArray (int arr[],int size){
     cout<<"printing the array"<<endl;
    //priting an array 
    for(int i = 0; i < size ;i++){
        cout<<arr[i]<<" ";

}}
int main(){
    int number [15];
    cout<<"Value of 14 index"<<number [14]<<endl;


    int second[4]={2,3,4};
    cout<<"Value of 2 index "<<second [2]<<endl;


    int third[15]={6,2,8};
    int n = 15;
    cout<<"printing the array"<<endl;
    //priting an array 
    for(int i = 0; i < n ;i++){
        cout<<third[i]<<" ";
    }




    cout<<"Everything is fine Kalpana"<<endl;
}