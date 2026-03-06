// Fibonacci Pattern 
// 0
// 1       1
// 2       3       5
// 8       13      21      34
// 55      89      144     233     377
#include<iostream>
using namespace std;
int main(){
    int a=0,b=1,next,n;
    cout<<" Enter the number of rows:";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<a<<"\t";
            next=a+b;
            a=b;
            b=next;
        }
        cout<<endl;
    }
    return 0;
}