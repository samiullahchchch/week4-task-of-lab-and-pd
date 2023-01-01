#include <iostream>
using namespace std;



main() {

string day;
int totalamount;
while(true)
{
cout<<" Enter day:"<<endl;
cin>>day;
cout<<" Enter amount: "<<endl;
cin>>totalamount;


if(day == "sunday")
{
 float result, pb;
 result = totalamount * 0.1;
 pb = totalamount + result;
 cout<<"your payable amount is: "<<pb<<endl;
}
else
{
float result, pb;
 result = totalamount * 0.05;
 pb = totalamount + result;
 cout<<"your payable amount is: "<<pb<<endl;
}

}


}