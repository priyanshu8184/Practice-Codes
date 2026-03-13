#include<iostream>
using namespace std;
int sum(int n){
    int sum=0;
    while(n!=0){
        int k=n%10;
        sum+=k;
        n=n/10;
    }
    return sum;
}
bool prime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    int lhs=sum(n);
    int rhs=0;
    for(int i=2;i<n;i++){
        if(prime(i)){
            if(n%i==0){
                while(n%i==0){
                    rhs+=sum(i);
                }
            }
        }
    }
    if(n>1){
        rhs+=sum(n);
    }
    if(lhs=rhs){
        cout<<"Boston number"<<endl;
    }
    else{
        cout<<"Not boston number";
    }
    return 0;

}