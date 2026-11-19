#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a Number= ";
    cin>>n;
    for(int i=0; i<=n-1; i++){
        for(int j=0; j<=i; j++){
            if(i%2==0){cout<<j+1<<" ";}
            else{cout<<(char)(j+65)<<" ";}
        }
        cout<<endl;
    }
}