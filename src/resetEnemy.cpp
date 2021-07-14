#include<dos.h> 
#include"macros.h"
#include<iostream>
using namespace std;

void resetEnemy(int ind){
	eraseEnemy(ind);
	enemyY[ind] = 1;
	genEnemy(ind);
}
