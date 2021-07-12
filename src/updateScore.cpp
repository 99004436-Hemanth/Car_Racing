/**
 * @brief updateScore
 * 
 */
#include<iostream>
#include<conio.h>
#include<dos.h> 
#include"macros.h"
#include"utility.h"
using namespace std;

void updateScore(){
	gotoxy(WIN_WIDTH + 7, 5);cout<<"Score: "<<score<<endl;
}