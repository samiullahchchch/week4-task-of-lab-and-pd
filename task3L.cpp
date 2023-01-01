#include <iostream>
using namespace std;
void showresult(int num);


main () {

int num;
while(true)
{
 cout<<" enter your marks "<<endl;
 cin>>num;
 showresult( num);


}




}

void showresult(int num)

{
 if(num >50)
 {
 cout<<" passed"<<endl;
 }

 if(num <50)
 {
 cout<<" jawanah mehnet kar"<<endl;
 }
 
if(num == 50)
 {
 cout<<" almost passed"<<endl;
 }

}