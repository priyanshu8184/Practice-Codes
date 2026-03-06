//  mirror pattern  of stars
//                 *
//         *       *       *
// *       *       *       *       *
//         *       *       *
//                 *
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    // validation check for odd numbers
    if(n%2==0) return 0;
    int stars=1;
    int spaces=n/2;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=spaces;j++){
            cout<<"\t";
        }
        for(int j=1;j<= stars;j++){
            cout<<"*";
            if(j< stars) cout<<"\t";
        }
        cout<<endl;
        if(i<=n/2){
            spaces--;
            stars +=2;
        }
        else{
            spaces++;
            stars -=2;
        }
    }
    return 0;
}