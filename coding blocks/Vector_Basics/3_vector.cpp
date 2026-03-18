#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> a={2,7,5,8,10};
    sort(a.begin(), a.end());
    cout<<"Sorting order Ascending"<<endl;
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    sort(a.begin(), a.end(),greater<int>());
    cout<<"Descending order"<<endl;
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    vector<int> b={2,3,4,5,6};
    cout<<"Reverse order"<<endl;
    reverse(b.begin(), b.end());
   
    for(int i=0;i<b.size();i++){
        cout<<b[i]<<" ";
    }
    return 0;
}