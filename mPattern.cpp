#include<iostream>
using namespace std;

int main(){
    int r,c;
    cout<<"Enter row: ";
    cin>>r;
    cout<<"Now Enter Column: ";
    cin>>c;
    for(int i=1;i<=r;i++){
        for(int i=1;i<=c;i++){
            cout<<"@"<<" ";
        }cout<<endl;
    }
}