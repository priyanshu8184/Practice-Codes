//   Number Triangle Pattern
//      1 
//       2 3 2 
//     3 4 5 4 3 
//   4 5 6 7 6 5 4 
// 5 6 7 8 9 8 7 6 5  
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the name of rows:";
    cin>>n;
    for(int i=1;i<=n;i++){
        // spaces
        for(int j=1;j<=2*(n-i);j++){
            cout<<" ";
        }
        // left half- increasing numbers
        for(int j=0;j<i;j++){
            cout<<(i+j)<<" ";
        }
        // right half-decreasing numbers
        for(int j=i-2;j>=0;j--){
            cout<<(i+j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}