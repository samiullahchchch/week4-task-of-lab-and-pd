#include <iostream>
#include <windows.h>

using namespace std;
void gotoxy(int x,int y);

void  printmaze();




 int main()
{
  
 system("cls");
 printmaze();
 int x = 3;
 int y = 4;
while(true)
{
 gotoxy(x,y);
 cout<<" "; 
 x = x + 1;
 if(x == 20)
{ 
 x = 3;
}
 gotoxy(x,y);
 cout<<"p";
 Sleep(200);
}
 }



void gotoxy(int x,int y)
{

 COORD coordinates;
 coordinates.X = x ;
 
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void printmaze()
{
 cout<< "#######################################" <<endl;
 cout<< "#                                     #" <<endl;
 cout<< "#                                     #" <<endl;
 cout<< "#                                     #" <<endl;
 cout<< "#                                     #" <<endl;
 cout<< "#                                     #" <<endl;
 cout<< "#                                     #" <<endl;
 cout<< "#                                     #" <<endl;
 cout<< "#                                     #" <<endl;
 cout<< "#######################################" <<endl;
}