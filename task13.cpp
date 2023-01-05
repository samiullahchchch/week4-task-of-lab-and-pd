#include <iostream>
using namespace std;
void checking(int holidays);
main()
{
   int holidays;

  cout<<"Enter holidays: ";
  cin>>holidays;
  checking(holidays);





}

void checking(int holidays)
{
 int workingdays,min,result,result1 ; 
 workingdays=365-holidays ;
 min = (holidays*127+workingdays*63) ;
 result  =30000-min ;
 result1 = min - 3000 ; 
 if(result>1)
{
    cout<<"Tom will play."<<result<<endl;
}
if(result<1)
{
    cout<<"Tom will run away"<<result1<<endl;
}


}
  





