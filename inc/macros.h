#ifndef __MACROS_H__
#define __MACROS_H__

#include<iostream>
#include<conio.h>
#include<dos.h> 
#include <windows.h>
#include <time.h>

#define SCREEN_WIDTH 90
#define SCREEN_HEIGHT 26
#define WIN_WIDTH 70 

using namespace std; 
 
HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;

int enemyY[3];
int enemyX[3];
int enemyFlag[3];
char car[4][4] = { ' ','*','*',' ', 
					'*','*','*','*', 
					' ','*','*',' ',
					'*','*','*','*' }; 
					
int carPos = WIN_WIDTH/2;
int score = 0; 
void gotoxy(int x,int y);
/**
 * @brief setCursor
 * 
 * @param visible 
 * @param size 
 */
void setcursor(bool visible, DWORD size);
/**
 * @brief drawBorder
 * 
 */
void drawBorder();
/**
 * @brief genEnemy
 * 
 * @param ind 
 */
void genEnemy(int ind);
/**
 * @brief drawEnemy
 * 
 * @param ind 
 */
void drawEnemy(int ind);
/**
 * @brief eraseEnemy
 * 
 * @param ind 
 */
void eraseEnemy(int ind);
/**
 * @brief resetEnemy
 * 
 * @param ind 
 */
void resetEnemy(int ind);
/**
 * @brief drawCar
 * 
 */
void drawCar();
/**
 * @brief eraseCar
 * 
 */
void eraseCar();
/**
 * @brief collision
 * 
 * @return int 
 */
int collision();
/**
 * @brief gameover
 * 
 */
void gameover();
/**
 * @brief updateScore
 * 
 */
void updateScore();
/**
 * @brief instruction
 * 
 */
void instructions();
/**
 * @brief play
 * 
 */
void play();

#endif