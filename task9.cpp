#include <iostream>
using namespace std;
void checking();


main() 
{ 

while(true)
{
checking();

}


}


void checking()
{
string condition;
cout<<"Enter the condition"<<endl;
cin>>condition;

if (condition == "true")
{
 cout<<"false"<<endl;
}


if (condition == "false")
{
 cout<<"true"<<endl;
}

}