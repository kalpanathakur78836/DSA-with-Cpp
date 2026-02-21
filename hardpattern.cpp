#include<iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int i = 1;
    //one triangle
    while(i<=n){
int start = 1;
        int j = 1;
    
        while(j<=n-i+1){
            
            cout<< start;
            start = start + 1;
        
            j = j + 1;
        }//stars 1
        int stars = i-1;
        while(stars){
            cout<<"*";
            stars = stars - 1;
        }//stars 2

        int star= i - 1;
        while(star){
            cout<<"*";
            star = star - 1;
        }//4th triangle
        int count = n-i+1;
        while(count){
            cout<<count;
            count = count - 1;
        }

        cout<< endl ;
        i = i + 1 ;
    }
}