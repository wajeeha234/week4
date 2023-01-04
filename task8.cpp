#include<iostream>
using namespace std;
void greaternumber(int firstNumber,int secondNumber);
main()
{
int firstNumber,secondNumber;
while(true)
{
cout<<"Enter first number"<<endl;
cin>>firstNumber;
cout<<"Enter second number"<<endl;
cin>>secondNumber;
greaternumber(firstNumber,secondNumber);
}
}
void greaternumber(int firstNumber,int secondNumber)
{
if(firstNumber>secondNumber)
{
cout<<"false"<<endl;
}
if(secondNumber>firstNumber)
{
cout<<"false "<<endl;
}
if(firstNumber==secondNumber)
{
cout<<"true"<<endl;
}
}
