#include<iostream>
using namespace std;

int main() {
    int Rollno[5];
    int search;
    int found = 0;

    cout<<"Enter a 5 Rollno:\n";

    for(int i=0; i<5; i++) {
        cin>>Rollno[i];
    }

    cout<<"Enter a Rollno to search:\n";
    cin>>search;

    for(int i=0; i<5; i++) {
        if(Rollno[i] == search) {
            cout<<"Book Found!"<<endl;
            found = 1;
        }
    }

    if(found == 0) {
        cout<<"Book not Found!"<<endl;
    }

    return 0;
}
