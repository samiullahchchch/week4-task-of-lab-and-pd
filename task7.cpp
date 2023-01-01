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
if(y < 20)
{
 y = y + 1;
}
if(y == 20 )
{ 
 y = 3;
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
 

 gotoxy(x,y-1);
 cout<< " ";
 gotoxy(x,y);
 cout << "p";
 Sleep(1000);

}