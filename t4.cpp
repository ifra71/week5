#include<iostream>
#include<cmath>
using namespace std;
main()
{
  int noofhrsneeded;
  int noofdays;
  int noofworkers;
  int norworkday;
  int workhours;
  int totalworkhours;
  int overtime;
  int hours;
  float tenper;
  int remainhrs;
  int tothrs;
  cout<< " enter number of hours needed [0-200000] : " ;
  cin>> noofhrsneeded;
  cout<< " enter the number of days the firm has [0-20000] : ";
  cin>> noofdays;
  cout<<" enter the number of workers [0-200] : " ;
  cin>> noofworkers;
  norworkday=8;
  overtime=2;
  workhours=norworkday+overtime;
  totalworkhours=noofdays*workhours;
  tenper=(totalworkhours/100)*10;
  remainhrs=totalworkhours-tenper;
  tothrs=noofhrsneeded-remainhrs;
  if (tothrs<=70)
  {
  cout<<" yes! " << remainhrs <<"hours left"  ;
  }
  if (tothrs>70)
  {
  cout<< " Not Enough time ! " << tothrs << "hours needed";
   }
  


}