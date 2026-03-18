#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    vector<int> a ={6,7,8,9,10};
    sort(a.begin(), a.end());
    cout<<"sorting order"<<endl;
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }   
    cout<<endl;
    cout<<"Reverse sorting order"<<endl;
    sort(a.rbegin(), a.rend());
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    } 

    //alternatively we can also use reverse() function to reverse the order of elements in the vector

    cout<<endl<<"Reverse sorting order"<<endl;
    vector<int> b = {1,2,3,4,5};
    reverse(b.begin(), b.end());
    for(int i=0; i<b.size(); i++){
        cout<<b[i]<<" ";
    }

    cout<<endl;
    cout<<"Descending ordrer"<<endl;
    sort(a.begin(), a.end(), greater<int>());
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }

    cout<<a.front()<<endl; //first element of the vector
    cout<<a.back()<<endl; //last element of the vector
    cout<<a.at(2)<<endl; //element at index 2

    cout<<endl<<"after inserting"<<endl;
    a.insert(a.begin()+2, 100); //inserting 100 at index 2
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    

    cout<<endl<<"after erasing"<<endl;
    a.erase(a.begin()+2); //erasing element at index 2
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }

    a.clear();
    if(a.empty()){
        cout<<endl<<"vector is empty"<<endl;
    }
    else{
        cout<<endl<<"vector is not empty"<<endl;
    }

    return 0;
}