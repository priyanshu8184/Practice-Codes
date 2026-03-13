#include<iostream>
#include<cmath>
using namespace std;
int length(int n){
    int l=0;
    while(n!=0){
        n=n/10;
        l++;
    }
    return l;
}
int main(){
    int n;
    cin>>n; 
    int t=n;
    int sum=0;
    int l=length(n);
    while(t!=0){
        int k=t%10;
        sum= sum+pow(k,l);
        t=t/10;
    }
    if(sum==n){
        cout<<"Armstrong number";
    }
    else{
        cout<<"Not a armstrong number";
    }
    return 0;

}
