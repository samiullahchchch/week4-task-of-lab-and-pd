#include <iostream>
using namespace std;

void speed();

main()
{

speed();

}





void speed()
{
 int speed1;
 cout<<"Enter the car speed "<<endl;
 cin>>speed1;
  
if (speed1 <= 100)
{
 cout<<"Perfect! Your are going good:    "<<endl;
}


if (speed1 >= 101)
{
 cout<<"Halt YOU WILL BE CHALLENGED!!!    "<<endl;
}

} 