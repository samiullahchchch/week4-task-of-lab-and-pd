#include <iostream>
using namespace std;
  

main() {
string day;
int totalamount;

while(true)
{ 
cout<<" Enter day "<<endl;
cin>>day;
cout<<"enter your amount "<<endl;
cin>>totalamount;

if(day == "sunday")
{
 int result,payableamount;
 result = totalamount * (0.1);
 payableamount = totalamount + result;
 cout<<"your amount is: "<< payableamount<<endl;
}
cout<<"this offer is only for sunday"<<endl;
}

}
   