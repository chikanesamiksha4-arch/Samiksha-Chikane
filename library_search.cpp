#include<iostream>
uing namespace std;
int main() {
int book[5];
int searchID;
cout<<"Enter 5 book IDs:\n";
for (int i=0; i<5; i++)
{
cin>> book[i];
}
cout<<"Enter Book ID to search:";
cin>>searchID;
for (int i=0;i<5;i++)
{
if(book[i]== searchID)
{
cout<<"Book found!";
return 0;
}
}
cout<<"Book Not Found!";
return 0;
}



