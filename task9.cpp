#include<iostream>
using namespace std;
void reverseInput(string reverseinput);

int main()
{
string reverseinput;
cout<<"Enter true or false:"<<endl;
cin>>reverseinput;
reverseInput(reverseinput);
}
void reverseInput(string reverseinput)
{
if(reverseinput=="true")
  {
   cout<<"false"<<endl;
  }
if(reverseinput=="false")
  { 
   cout<<"true"<<endl;
  }
}
 