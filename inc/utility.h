/**
 * @file utility.h
 * @author
 * @brief Contains all the funtion definition
 * @version 0.1
 * @date 2021-07-09
 * 
 * @copyright Copyright (c) 2021
 * 
 */


#include<dos.h> 
#ifndef __UTILITY_H__
#define __UTILITY_H__
/**
 * @brief gotoxy
 * 
 * @param x 
 * @param y 
 */
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