#include<dos.h>
#include"macros.h"
#include<iostream>
#include"utility.h"
using namespace std;
int collision(){
	if( enemyY[0]+4 >= 23 ){
		if( enemyX[0] + 4 - carPos >= 0 && enemyX[0] + 4 - carPos < 9  ){
			return 1;
		}
	}
	return 0;
} 