#include<iostream>
using namespasce std;

void discountPrice(string countryName,int ticketPrice);

main()
{
 string countryName;
 int ticketPrice;
 while(true)
 {
  cout<<"Enter country name";
  std::cin>>countryName;
  cout<<"Enter ticket price...";
  cin>>ticketPrice;
  discountPrice(countryName,ticketPrice);
}
}
 void discountPrice(string countryName ,int ticketPrice)
{
  int finalPrice;
  if(countryName == "pakistan")
    {
     finalPrice = ticketPrice- (ticketPrice*0.05);
     cout<<"finalPrice";
    }
  if(countryName == "ireland")
    {
      finalPrice = ticketPrice- (ticketPrice*0.10);
      cout<<"finalPrice";
    }
  if(countryName == "india")
    {
     finalPrice = ticketPrice- (ticketPrice*0.20);
     cout<<"finalPrice";
    }
  if(countryName == "england")
    {
     finalPrice = ticketPrice- (ticketPrice*0.30);
     cout<<"finalPrice";
    }
 if(countryName == "canada")
    {
     finalPrice = ticketPrice- (ticketPrice*0.45);
      cout<<"finalPrice";
    }
}
