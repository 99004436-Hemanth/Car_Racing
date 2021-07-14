/**
 * @brief set cursor
 * 
 * @param visible 
 * @param size 
 */
#include<dos.h>
#include"macros.h"
#include<iostream>
#include<conio.h>

using namespace std;
void setcursor(bool visible, DWORD size) {
	if(size == 0)
		size = 20;	
	
	CONSOLE_CURSOR_INFO lpCursor;	
	lpCursor.bVisible = visible;
	lpCursor.dwSize = size;
	SetConsoleCursorInfo(console,&lpCursor);
}