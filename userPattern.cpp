#include<iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"Enter the rows you want: "<<endl;
    cin>>n;
    cout<<"Enter the column you want: "<<endl;
    cin>>m;
    

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<"*"<<" ";
        }cout<<endl;
    }
}