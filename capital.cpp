#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
main()
{
system("cls");
gotoxy(10,10);
cout<<"W";
gotoxy(10,11);
cout<<"A";
gotoxy(10,12);
cout<<"J";
gotoxy(10,13);
cout<<"I";
gotoxy(10,14);
cout<<"H";
gotoxy(10,15);
cout<<"A";
}
