#include<iostream>
using namespace std;
int main(){
    int t, x;
    cin>>t;
    while(t--){
        cin>>x;
        (x<=10 && x>=1)? cout<<"Yes" : cout<<"No";
        cout<<endl;
    }
}