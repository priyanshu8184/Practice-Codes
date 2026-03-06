// pattern with zeroes
// 1
// 2       2
// 3       0       3
// 4       0       0       4
// 5       0       0       0       5
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(j==1||j==i){
                cout<<i<<"\t";
            }
            else{
                cout<<"0\t";

            }
        }
        cout<<endl;
    }
    return 0;

}