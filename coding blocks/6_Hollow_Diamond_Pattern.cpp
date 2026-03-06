// Hollow diamond pattern
// *       *       *       *       *
// *       *               *       *
// *                               *
// *       *               *       *
// *       *       *       *       *
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    int m= (n+1)/2;
    // upper half
    for(int i=1;i<=m;i++){
        if(i==1){
            for(int j=1;j<=n;j++){
                cout<<"*\t";
            }
        }
        else{
            for(int j=1;j<=m-i+1;j++){
                cout<<"*\t";
                
            }
            for(int j=1;j<=2*i-3;j++){
                cout<<"\t";
            }
            for(int j=1;j<=m-i+1;j++){
                cout<<"*\t";
            }
        }
        cout<<endl;
        
    }
    // lower half
    for(int i=m-1;i>=1;i--){
        if(i==1){
            for(int j=1;j<=n;j++){
                cout<<"*\t";
            }
        }
        else{
            for(int j=1;j<=m-i+1;j++){
                cout<<"*\t";
            }
            for(int j=1;j<=2*i-3;j++){
                cout<<"\t";
            }
            for(int j=1;j<=m-i+1;j++){
                cout<<"*\t";
            }
        }
        cout<<endl;
    }
    return 0;
}