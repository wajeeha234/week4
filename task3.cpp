#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y);
main()
{
system("cls");
cout<<"########################################"<<endl;
cout<<"#                                      #"<<endl;
cout<<"#                                      #"<<endl;
cout<<"#                                      #"<<endl;
cout<<"#                                      #"<<endl;
cout<<"#                                      #"<<endl;
cout<<"#                                      #"<<endl;
cout<<"#                                      #"<<endl;
cout<<"#                                      #"<<endl;
cout<<"#                                      #"<<endl;
cout<<"#                                      #"<<endl;
cout<<"#                                      #"<<endl;
cout<<"########################################"<<endl;
int x=10, y=10;
gotoxy(x,y);
if(x<65)
 {
  cout<<"P";
 }
}
void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}