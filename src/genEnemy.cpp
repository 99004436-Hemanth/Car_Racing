#include"macros.h"
#include<dos.h>
#include<iostream>
#include"utility.h"
using namespace std;
void genEnemy(int ind){
	enemyX[ind] = 17 + rand()%(33);  
}