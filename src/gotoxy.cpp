/**
 * @brief gotoxy
 * 
 * @param x 
 * @param y 
 */
#include<dos.h> 
#include"macros.h"
#include<iostream>
#include"utility.h"
using namespace std;

void gotoxy(int x, int y){
	CursorPosition.X = x;
	CursorPosition.Y = y;
	SetConsoleCursorPosition(console, CursorPosition);
}