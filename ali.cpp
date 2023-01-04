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
gotoxy(10,2);
cout<<"   *   *     * ";
gotoxy(10,3);
cout<<" ***** *     * ";
gotoxy(10,4);
cout<<"*    * ****  * ";


}
