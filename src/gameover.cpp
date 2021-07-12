/**
 * @brief game over
 * 
 */
#include<iostream>
#include<conio.h>
#include<windows.h>
#include"utility.h"
using namespace std;
void gameover(){
	system("cls");
	cout<<endl;
	cout<<"\t\t--------------------------"<<endl;
	cout<<"\t\t-------- Game Over -------"<<endl;
	cout<<"\t\t--------------------------"<<endl<<endl;
	cout<<"\t\tPress any key to go back to menu.";
	getch();
}