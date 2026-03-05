#include<iostream>
using namespace std;
//function
int factorial(int n) {

int fact = 1;

for(int i = 1;i<=n;i++){
    fact = fact * i;

}
return fact;
}
//function
//returntype function  input
int nCr(int n,int r){
    int num = factorial(n);

    int deno = factorial(r) * factorial(n-r);
    return num/deno;
    }

int main(){
int n , r;
cin>>n >> r;

cout<<"Anser is "<<nCr(n,r) <<endl;
}