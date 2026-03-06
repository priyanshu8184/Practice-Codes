// Rhombus pattern
//                                 1
//                         2       3       2
//                 3       4       5       4       3
//         4       5       6       7       6       5       4
// 5       6       7       8       9       8       7       6       5
//         4       5       6       7       6       5       4
//                 3       4       5       4       3
//                         2       3       2
//                                 1
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    int rows=2*n-1;
    int spaces=n-1;
    int elements=1;
    for(int i=1;i<= rows; i++){
        for(int j=1;j<=spaces;j++)  cout<<"\t";
        // the starting number for the row
        int val = (i<=n)? i:(rows-i+1);
        for(int j=1;j<=elements;j++){
            cout<<val;
            if(j<=elements/2){
                val++;
            }
            else val--;{
                if(j<elements){
                    cout<<"\t";
                }
            }
        }
        cout<<endl;
        if(i<n){
            spaces--;
            elements +=2;
        }
        else{
            spaces++;
            elements -=2;

        }
    }
    return 0;
}