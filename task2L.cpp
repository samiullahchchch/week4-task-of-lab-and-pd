#include <iostream>
using namespace std;
void mul(int num1,int num2);
void add(int num1,int num2);
void sub(int num1,int num2);
void division(int num1,int num2);
main () {
     
 int num1,num2;
 char operation;
 while (true)
{
  cout<<"1st value   "<<endl;
 cin>>num1;
 cout<<" 2ed value"<<endl;
 cin>>num2;
  
 cout<<" enter operation (+,-,/,*): " <<endl;
 cin>>operation;
 if(operation == '+' )  
{
  add(num1,num2); 

}


if(operation == '-' )  
{
  sub(num1,num2); 

}


if(operation == '/' )  
{
  division(num1,num2); 

}

if(operation == '*' )  
{
  mul(num1,num2); 

}


}


} 




void mul(int num1,int num2)
{ 
 int answer;
 answer = num1 * num2;
 cout<<"answer is :"<<answer<<endl;
}
void add(int num1,int num2)
{ 
 int answer;
 answer = num1 + num2;
 cout<<"answer is :"<<answer<<endl;
}

void sub(int num1,int num2)
{ 
 int answer;
 answer = num1 - num2;
 cout<<"answer is :"<<answer<<endl;
}

void division(int num1,int num2)
{ 
 int answer;
 answer = num1/num2;
 cout<<"answer is :"<<answer<<endl;
}


