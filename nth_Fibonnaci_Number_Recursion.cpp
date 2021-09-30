#include<iostream>
using namespace std;

int Fibonnaci(int n){
    
    if(n==1){
        return 0;
    }

    else if(n==2){
        return 1;
    }

    else{
        return Fibonnaci(n-1)+Fibonnaci(n-2);
    }

}

int main(){
    int n;
    cin>>n;

    cout<<Fibonnaci(n)<<endl;
    return 0;
}