#include<iostream>
using namespace std;
main()
{
int roseNumber;
int whiteRoseNumber;
int tulipFlower;
float priceOfRoses;
float priceOfWhiteRoses;
float priceOfTulips;
float roses;
float whiteRoses;
float tulips;
float totalPrice;
float price;
cout<<"enter number of red roses";
cin>>roseNumber;
cout<<"enter number of white roses";
cin>>whiteRoseNumber;
cout<<"enter number of tulips";
cin>>tulipFlower;
priceOfRoses = 2.00;
priceOfWhiteRoses = 4.10;
priceOfTulips = 2.50;
roses = roseNumber * priceOfRoses;
whiteRoses = whiteRoseNumber * priceOfWhiteRoses;
tulips = tulipFlower * priceOfTulips;
totalPrice = roses + whiteRoses + tulips;
cout<<"total price is ...:"<<totalPrice<<endl;
if(totalPrice>200)
 {
 price = totalPrice - (totalPrice*0.2);
 cout<<"price is...:"<<price;
 }
}


