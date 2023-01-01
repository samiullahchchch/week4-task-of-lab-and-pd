#include <iostream>
using namespace std;
#include <windows.h>

void gotoxy(int x,int y);
void maze();
void playerMove(int x, int y);

main () {
int x = 3;
  int y = 3;


system("cls");
  maze(); 
   gotoxy(15,15);
  while(true)
{
  playerMove (x,y);
if(x < 20)
{
 x = x + 1;
}
if(x == 20 )
{ 
 x = 3;
}


}
}

void maze()
{
 cout<<"  ############################                     "<<endl;
 cout<<"  #                          #                   "<<endl;
 cout<<"  #                          #                   "<<endl;
 cout<<"  #                          #                   "<<endl;
 cout<<"  #                          #                   "<<endl;
 cout<<"  #                          #                   "<<endl;
 cout<<"  #                          #                   "<<endl;
 cout<<"  #                          #                   "<<endl;
 cout<<"  #                          #                   "<<endl;
 cout<<"  ############################                                             "<<endl;
}

void gotoxy(int x,int y)
{
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void playerMove(int x, int y)
{
 

 gotoxy(x-1,y);
 cout<< " ";
 gotoxy(x,y);
 cout << "p";
 Sleep(1000);

}