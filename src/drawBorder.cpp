
#include<dos.h>
#include"macros.h"
#include<iostream>
#include"utility.h"
using namespace std;
/**
 * @brief drawBorder
 * 
 */
void drawBorder(){  
	for(int i=0; i<SCREEN_HEIGHT; i++){
		for(int j=0; j<17; j++){
			gotoxy(0+j,i); cout<<"�";
			gotoxy(WIN_WIDTH-j,i); cout<<"�";
		}
	} 
	for(int i=0; i<SCREEN_HEIGHT; i++){
		gotoxy(SCREEN_WIDTH,i); cout<<"�";
	} 
}