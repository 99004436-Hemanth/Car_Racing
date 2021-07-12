#include"macros.h"
#include<dos.h>
#include<iostream>
#include"utility.h"
using namespace std;
void drawCar(){
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			gotoxy(j+carPos, i+22); cout<<car[i][j];
		}
	}
}