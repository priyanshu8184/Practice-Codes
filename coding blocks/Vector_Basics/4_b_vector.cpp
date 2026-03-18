#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{

vector<int> v={1,2,4,55,3,11,5};
// reverse order
 cout<<"Reverse order"<<endl;
reverse(v.begin(),v.end());
for(int i=0;i<v.size();i++)
{
    cout<<v[i]<<" ";    
}

cout<<endl;

// shorting order
 cout<<"Shortinng order"<<endl;
sort(v.begin(),v.end());
//Shortinng order
for(int i=0;i<v.size();i++)
{
    cout<<v[i]<<" ";
}
cout<<endl;



// sum of vector
 cout<<"sum of vector"<<endl;
int sum=0;  
for(int i=0;i<v.size();i++)
{
    sum+=v[i];
}
cout<<sum<<endl;
cout<<endl;

// decending order
 cout<<"Descending order"<<endl;
sort(v.begin(),v.end(),greater<int>());
for(int i=0;i<v.size();i++)
{
    cout<<v[i]<<" ";    
}

cout<<endl;
    cout<<endl;


    // front index element whose index is 0
    cout<<"Front element: "<<v.front()<<endl;
    // back index element whose index is v.size()-1
    cout<<"Back element: "<<v.back()<<endl;
  // particular index element
    cout<<"Element at index 3: "<<v.at(3)<<endl;
    //insert elemnt between vector
    v.insert(v.begin()+2,100);
    cout<<"After inserting 100 at index 2: "<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
// delecte element between vector
    v.erase(v.begin()+2);
    cout<<"After deleting element at index 2: "<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    // all element delent in vector
    v.clear();
    cout<<"After clearing all elements: "<<endl;
    // if i check vector is empty or not
    if(v.empty())
    {
        cout<<"Vector is empty"<<endl;
    }
    else
    {
        cout<<"Vector is not empty"<<endl;
    }

    cout<<endl;

return 0;
}