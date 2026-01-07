#include<iostream>
using namespace std;

//function signature
void printcounting(int num){

//function body
for(int i = 1;i<=num; i++){
    cout<<i<<" ";


}
cout<<endl;
}
int main(){
    int n;
    cin>>n;
    
    //functioncall
printcounting(n);

return 0;
}