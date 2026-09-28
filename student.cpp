#include<iostream>
using namespace std;
int main() {
    int Roll_no[5];
    cout<<"Enter a 5 Roll_no:\n";
    for(int i=0; i<5;i++)
        {
            cout<<"student"<<(i+1)<<": ";
          cin>>Roll_no[i];
        }    
    for(int i=0; i<5;i++)
        {
            cout<<Roll_no[i]<<" ";
        }
    return 0;
}
