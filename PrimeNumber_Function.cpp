#include<iostream>
using namespace std;

int PrimeNumber(int n){
    int flag=0;

    if(n==0||n==1){
        cout<<"The Entered Number is not Prime";
        flag=1;
    }

    else{
        for(int i=2; i<n; i++){
             if(n%i==0){
                 cout<<"The Entered Number is not Prime"<<endl;
                 flag=1;
                 break;
                 
             }
           } 
        }

    if(flag==0){
        cout<<"The Entered Number is Prime"<<endl;
    }

    return 0; 
}    

int main(){

    int n;
    cout<<"Please Enter your Number:";
    cin>>n;

    cout<<PrimeNumber(n)<<endl;
    return 0;
}