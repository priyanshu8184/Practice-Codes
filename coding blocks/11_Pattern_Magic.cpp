// Magic Pattern
// *********
// **** ****
// ***   ***
// **     **
// *       *
// **     **
// ***   ***
// **** ****
// *********
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows:";
    if(!(cin>>n)) return 0;
    // the total width of the pattern is 2* n -1
    int totalWidth= 2*n-1;
    // ---Part 1: upper half(Rows 1 to n)
    for(int i=1;i<=n;i++){
        // number of stars on the one side of row i
        int stars = n-i+1;
        // Left stars
        for(int j=1;j<=stars;j++) cout<<"*";
        // Middle spaces
        // Space count 1st row =0 2nd row =1 3rd row=3 etc
        int spaces = 2*i-3;
        for(int j=1;j<=spaces;j++) cout<< " ";
        // Right Stars(skip the first one as it is the very first row )
        int start =(i==1) ?2:1;
        for(int j=start;j<=stars;j++) cout<<"*";
        cout <<endl;

    } 
    // ---Part 2:Lower Half(rows n-1 down to 1)
    for(int i=n-1;i>=1;i--){
        int stars= n-i +1;
        // Left stars
        for(int j=1;j<=stars;j++) cout<<"*";

        // Middle spaces
        int spaces = 2*i-3;
        for(int j=1;j<=spaces;j++) cout<<" ";

        // Right stars(skip the first one as it is the  very last row )
        int start =(i==1)?2:1;
        for(int j=start;j<=stars;j++) cout<<"*";
        cout<<endl;

    }
    return 0;
}