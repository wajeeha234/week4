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
int timeforgameonHoliday;
int totalTimeForGamePlay;
int diffrence;
cout<<"enter holidays";
cin>>numberofholidays;
tomsleep=30000;
timeofPlayingOnWorkingdays=63;
timeofplayingonholidays=127;
timeForGameOnWorkingDays=(numberOfdayInyear - numberofholidays)*63;
timeforgameonHoliday=numberofholidays*127;
totalTimeForGamePlay=timeForGameOnWorkingDays+timeforgameonHoliday;
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

}
