#include<iostream>
using namespace std;
main()
{
int numberofholidays;
int tomsleep;
int timeofPlayingOnWorkingdays;
int numberOfdayInyear=365;
int timeofplayingonholidays;
int timeforgameonHolidays;
int timeForGameOnWorkingDays;
int totalTimeForGamePlay;
int diffrence;
cout<<"enter holidays";
cin>>numberofholidays;
tomsleep=30000;
timeofplayingonworkingdays=63;
timeofplayingonholidays=127;
timeForGameonWorkingDays=(numberofdayInyear-numberofholidays)*63;
timeforgameonHolidays=numberofholidays*127;
totalTimeForGamePlay=timeForGameonWorkingDays+timeforgameonHolidays;
diffrence=30000-totalTimeForGamePlay;
cout<<"tom sleeps...."<<diffrence;
if(totalTimeForGamePlay>30000)
{
cout<<"tom will run away";
}
if(totalTimeForGamePlay<30000)
{
cout<<"tom sleep well";
}


