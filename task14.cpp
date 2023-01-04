#include<iostream>
#include<windows.h>
using namespace std;
void headerUAMS();
void aggregate (string name , float matric , float intermediate , float ecat);
void compare(string namestd1 , float ecatMarksStd1 , string namestd2 , float ecatMarksStd2 );
main()
{
system("cls");
string name;
float matric;
float intermediate;
float ecat;
string namestd1;
string namestd2;
float ecatMarksStd1;
float ecatMarksStd2;
cout<<"enter your name..";
cin>>name;
cout<<"enter your matric marks..";
cin>>matric;
cout<<"enter your intermediate marks..";
cin>>intermediate;
cout<<"enter your ecat marks..";
cin>>ecat;
cout<<"enter name of the student 1..";
cin>>namestd1;
cout<<"enter ecat marks of the student 1..";
cin>>ecatMarksStd1;
cout<<"enter name of student 2..";
cin>>namestd2;
cout<<"enter ecat marks of student 2";
cin>>ecatMarksStd2;
headerUAMS();
aggregate(name,matric,intermediate,ecat);
compare(namestd1 , ecatMarksStd1 , namestd2 , ecatMarksStd2);
}
void headerUAMS()
{
cout<<"************************************************"<<endl;
cout<<"*                                              *"<<endl;
cout<<"*                                              *"<<endl;
cout<<"*      UNIVERSITY ADMISSION MANAGEMENT         *"<<endl;
cout<<"*                                              *"<<endl;
cout<<"*                 SYSTEM                       *"<<endl;
cout<<"*                                              *"<<endl;
cout<<"*                                              *"<<endl;
cout<<"*                                              *"<<endl;
cout<<"*                                              *"<<endl;
cout<<"*                                              *"<<endl;
cout<<"************************************************"<<endl;
}
void aggregate (string name ,float matric ,float intermediate ,float ecat)
{
float matricResult;
float interResult;
float ecatResult;
float aggregate;
matricResult=matric/1100.0*100*0.30;
interResult=intermediate/550.0*100*0.30;
ecatResult=ecat/400.0*100*0.40;
aggregate=matricResult+interResult+ecatResult;
cout<<"aggregate is ..."<<aggregate<<endl;
}
void compare( string namestd1 , float ecatMarksStd1 , string namestd2 , float ecatMarksStd2 )
{
if(ecatMarksStd1-ecatMarksStd2>0)
{
 cout<<"roll no of student 1 is 1"<<endl;
}
if(ecatMarksStd1-ecatMarksStd2<0)
{
cout<<"roll no of student 2 is 1"<<endl;
}

}


