/*
 * LadyMoves.c
 *
 *  Created on: Feb 23, 2024
 *      Author: Jurin PC
 */
#include "LadyMoves.h"
extern PCA9685 pwm;  //use this to avoid passing PCA9685 *pca

void walkfast_tripod(){
	//start neutral LEFT GAIT
	PCA9685_SetMicros(&pwm,0,1500);//BL leg
	PCA9685_SetMicros(&pwm,1,1500);//BL shoulder
	PCA9685_SetMicros(&pwm,4,1500);//FL leg
	PCA9685_SetMicros(&pwm,5,1500);//FL shoulder
	PCA9685_SetMicros(&pwm,8,1500);//MR leg
	PCA9685_SetMicros(&pwm,9,1500);//MR shoulder
	//start neutral RIGHT GAIT
	PCA9685_SetMicros(&pwm,6,1500);//BR leg
	PCA9685_SetMicros(&pwm,7,1500);//BR shoulder
	PCA9685_SetMicros(&pwm,10,1500);//FR leg
	PCA9685_SetMicros(&pwm,11,1500);//FR shoulder
	PCA9685_SetMicros(&pwm,2,1500);//ML leg
	PCA9685_SetMicros(&pwm,3,1500);//ML shoulder
	HAL_Delay(200);
	for(int i=0 ; i<5 ; i++){
//-----------------------------------------------------------------------------------------------------------------//
//RIGHT GAIT LIFT---
		PCA9685_SetMicros(&pwm,6,1300);//BR leg
		PCA9685_SetMicros(&pwm,10,1300);//FR leg
		PCA9685_SetMicros(&pwm,2,1700);//ML leg
		HAL_Delay(50);
//RIGHT GAIT SWEEP%%%
		PCA9685_SetMicros(&pwm,7,1500);//BR shoulder
		PCA9685_SetMicros(&pwm,11,1500);//FR shoulder
		PCA9685_SetMicros(&pwm,3,1500);//ML shoulder
//LEFT GAIT PUSH***
		PCA9685_SetMicros(&pwm,1,1000);//BL shoulder
		PCA9685_SetMicros(&pwm,5,1000);//FL shoulder
		PCA9685_SetMicros(&pwm,9,1650);//MR shoulder
		HAL_Delay(200);
// RIGHT GAIT DOWN!!
		PCA9685_SetMicros(&pwm,6,1500);//BR leg
		PCA9685_SetMicros(&pwm,10,1500);//FR leg
		PCA9685_SetMicros(&pwm,2,1500);//ML leg
		HAL_Delay(100);
//LEFT GAIT LIFT---
		PCA9685_SetMicros(&pwm,0,1700);//BL leg
		PCA9685_SetMicros(&pwm,4,1700);//FL leg
		PCA9685_SetMicros(&pwm,8,1300);//MR leg
		HAL_Delay(50);
//LEFT GAIT SWEEP%%%
		PCA9685_SetMicros(&pwm,1,1500);//BL shoulder
		PCA9685_SetMicros(&pwm,5,1500);//FL shoulder
		PCA9685_SetMicros(&pwm,9,1500);//MR shoulder
//RIGHT GAIT PUSH***
		PCA9685_SetMicros(&pwm,7,2000);//BR shoulder
		PCA9685_SetMicros(&pwm,11,2000);//FR shoulder
		PCA9685_SetMicros(&pwm,3,1350);//ML shoulder
		HAL_Delay(200);
//LEFT GAIT DOWN!!
		PCA9685_SetMicros(&pwm,0,1500);//BL leg
		PCA9685_SetMicros(&pwm,4,1500);//FL leg
		PCA9685_SetMicros(&pwm,8,1500);//MR leg
		HAL_Delay(100);
	  }
	PCA9685_SetMicros(&pwm, 0, 1500); //neutral BL leg
	PCA9685_SetMicros(&pwm, 1, 1500); //neutral BL shoulder
	PCA9685_SetMicros(&pwm, 2, 1500); //neutral ML leg
	PCA9685_SetMicros(&pwm, 3, 1500); //neutral ML shoulder
	PCA9685_SetMicros(&pwm, 4, 1500); //neutral FL leg
	PCA9685_SetMicros(&pwm, 5, 1500); //neutral FL shoulder

	PCA9685_SetMicros(&pwm, 6, 1500); //neutral BR leg
	PCA9685_SetMicros(&pwm, 7, 1500); //neutral BR shoulder
	PCA9685_SetMicros(&pwm, 8, 1500); //neutral MR leg
	PCA9685_SetMicros(&pwm, 9, 1500); //neutral MR shoulder
	PCA9685_SetMicros(&pwm, 10, 1500);//neutral FR leg
	PCA9685_SetMicros(&pwm, 11, 1500);//neutral FR shoulder
//end
}
void walkslow_tripod(){
	//start neutral LEFT GAIT
	PCA9685_SetMicros(&pwm,0,1500);//BL leg
	PCA9685_SetMicros(&pwm,1,1500);//BL shoulder
	PCA9685_SetMicros(&pwm,4,1500);//FL leg
	PCA9685_SetMicros(&pwm,5,1500);//FL shoulder
	PCA9685_SetMicros(&pwm,8,1500);//MR leg
	PCA9685_SetMicros(&pwm,9,1500);//MR shoulder 1400
	//start neutral RIGHT GAIT
	PCA9685_SetMicros(&pwm,6,1500);//BR leg
	PCA9685_SetMicros(&pwm,7,1500);//BR shoulder
	PCA9685_SetMicros(&pwm,10,1500);//FR leg
	PCA9685_SetMicros(&pwm,11,1500);//FR shoulder
	PCA9685_SetMicros(&pwm,2,1500);//ML leg
	PCA9685_SetMicros(&pwm,3,1500);//ML shoulder 1600
	HAL_Delay(200);
	for(int i=0 ; i<5 ; i++){
//-----------------------------------------------------------------------------------------------------------------//
//RIGHT GAIT LIFT---
		PCA9685_SetMicros(&pwm,6,1300);//BR leg
		PCA9685_SetMicros(&pwm,10,1300);//FR leg
		PCA9685_SetMicros(&pwm,2,1700);//ML leg
		HAL_Delay(300);
//RIGHT GAIT SWEEP%%%
		PCA9685_SetMicros(&pwm,7,1500);//BR shoulder
		PCA9685_SetMicros(&pwm,11,1500);//FR shoulder
		PCA9685_SetMicros(&pwm,3,1500);//ML shoulder
//LEFT GAIT PUSH***
		PCA9685_SetMicros(&pwm,1,1000);//BL shoulder
		PCA9685_SetMicros(&pwm,5,1000);//FL shoulder
		PCA9685_SetMicros(&pwm,9,1650);//MR shoulder
		HAL_Delay(800);
// RIGHT GAIT DOWN!!
		PCA9685_SetMicros(&pwm,6,1500);//BR leg
		PCA9685_SetMicros(&pwm,10,1500);//FR leg
		PCA9685_SetMicros(&pwm,2,1500);//ML leg
		HAL_Delay(500);
//LEFT GAIT LIFT---
		PCA9685_SetMicros(&pwm,0,1700);//BL leg
		PCA9685_SetMicros(&pwm,4,1700);//FL leg
		PCA9685_SetMicros(&pwm,8,1300);//MR leg
		HAL_Delay(300);
//LEFT GAIT SWEEP%%%
		PCA9685_SetMicros(&pwm,1,1500);//BL shoulder
		PCA9685_SetMicros(&pwm,5,1500);//FL shoulder
		PCA9685_SetMicros(&pwm,9,1500);//MR shoulder
//RIGHT GAIT PUSH***
		PCA9685_SetMicros(&pwm,7,2000);//BR shoulder
		PCA9685_SetMicros(&pwm,11,2000);//FR shoulder
		PCA9685_SetMicros(&pwm,3,1350);//ML shoulder
		HAL_Delay(800);
//LEFT GAIT DOWN!!
		PCA9685_SetMicros(&pwm,0,1500);//BL leg
		PCA9685_SetMicros(&pwm,4,1500);//FL leg
		PCA9685_SetMicros(&pwm,8,1500);//MR leg
		HAL_Delay(500);
	  }
	PCA9685_SetMicros(&pwm, 0, 1500); //neutral BL leg
	PCA9685_SetMicros(&pwm, 1, 1500); //neutral BL shoulder
	PCA9685_SetMicros(&pwm, 2, 1500); //neutral ML leg
	PCA9685_SetMicros(&pwm, 3, 1500); //neutral ML shoulder
	PCA9685_SetMicros(&pwm, 4, 1500); //neutral FL leg
	PCA9685_SetMicros(&pwm, 5, 1500); //neutral FL shoulder

	PCA9685_SetMicros(&pwm, 6, 1500); //neutral BR leg
	PCA9685_SetMicros(&pwm, 7, 1500); //neutral BR shoulder
	PCA9685_SetMicros(&pwm, 8, 1500); //neutral MR leg
	PCA9685_SetMicros(&pwm, 9, 1500); //neutral MR shoulder
	PCA9685_SetMicros(&pwm, 10, 1500);//neutral FR leg
	PCA9685_SetMicros(&pwm, 11, 1500);//neutral FR shouder
//end
}
void neutral(){
	PCA9685_SetMicros(&pwm, 0, 1500); //neutral BL leg
	PCA9685_SetMicros(&pwm, 1, 1500); //neutral BL shoulder
	PCA9685_SetMicros(&pwm, 2, 1500); //neutral ML leg
	PCA9685_SetMicros(&pwm, 3, 1500); //neutral ML shoulder
	PCA9685_SetMicros(&pwm, 4, 1500); //neutral FL leg
	PCA9685_SetMicros(&pwm, 5, 1500); //neutral FL shoulder

	PCA9685_SetMicros(&pwm, 6, 1500); //neutral BR leg
	PCA9685_SetMicros(&pwm, 7, 1500); //neutral BR shoulder
	PCA9685_SetMicros(&pwm, 8, 1500); //neutral MR leg
	PCA9685_SetMicros(&pwm, 9, 1500); //neutral MR shoulder
	PCA9685_SetMicros(&pwm, 10, 1500);//neutral FR leg
	PCA9685_SetMicros(&pwm, 11, 1500);//neutral FR shouder
}

void go_sleep(){
	PCA9685_SetMicros(&pwm, 0, 1500); //BL leg
	PCA9685_SetMicros(&pwm,1,1500-500);//BL shoulder  back extend
	PCA9685_SetMicros(&pwm, 2, 1500); //ML leg
	PCA9685_SetMicros(&pwm, 3, 1500-300); //ML shoulder pull back
	PCA9685_SetMicros(&pwm, 4, 1500); //FL leg
	PCA9685_SetMicros(&pwm,5,1500);//FL shoulder
	PCA9685_SetMicros(&pwm, 6, 1500); //BR leg
	PCA9685_SetMicros(&pwm,7,1500+500);//BR shoulder  back extend
	PCA9685_SetMicros(&pwm, 8, 1500); //MR leg
	PCA9685_SetMicros(&pwm, 9, 1500+300); //MR shoulder pull back
	PCA9685_SetMicros(&pwm, 10, 1500);//FR leg
	PCA9685_SetMicros(&pwm,11,1500);//FR shoulder
	HAL_Delay(200);
	for(int i=0 ; i<900 ; i++){ //0.95 correction factor
		PCA9685_SetMicros(&pwm,0,1500-i*0.95);//BL leg
		PCA9685_SetMicros(&pwm,2,1500-i);//ML leg
		PCA9685_SetMicros(&pwm,4,1500-i);//FL leg
		PCA9685_SetMicros(&pwm,6,1500+i*0.95);//BR leg
		PCA9685_SetMicros(&pwm,8,1500+i);//MR leg
		PCA9685_SetMicros(&pwm,10,1500+i);//FR leg
	}
}
void wakeup(){
	PCA9685_SetMicros(&pwm, 0, 645); //BL leg
	PCA9685_SetMicros(&pwm,1,1500-500);//BL shoulder  back extend
	PCA9685_SetMicros(&pwm, 2, 600); //ML leg
	PCA9685_SetMicros(&pwm, 3, 1500-300); //ML shoulder pull back
	PCA9685_SetMicros(&pwm, 4, 600); //FL leg
	PCA9685_SetMicros(&pwm,5,1500);//FL shoulder
	PCA9685_SetMicros(&pwm, 6, 2355); //BR leg
	PCA9685_SetMicros(&pwm,7,1500+500);//BR shoulder  back extend
	PCA9685_SetMicros(&pwm, 8, 2400); //MR leg
	PCA9685_SetMicros(&pwm, 9, 1500+300); //MR shoulder pull back
	PCA9685_SetMicros(&pwm, 10, 2400);//FR leg
	PCA9685_SetMicros(&pwm,11,1500);//FR shoulder
	HAL_Delay(200);
	for(int i=0 ; i<900 ; i++){
		PCA9685_SetMicros(&pwm,0,645+i*0.95);//BL leg
		PCA9685_SetMicros(&pwm,2,600+i);//ML leg
		PCA9685_SetMicros(&pwm,4,600+i);//FL leg
		PCA9685_SetMicros(&pwm,6,2355-i*0.95);//BR leg
		PCA9685_SetMicros(&pwm,8,2400-i);//MR leg
		PCA9685_SetMicros(&pwm,10,2400-i);//FR leg
	}
}

void push_ups(){
	PCA9685_SetMicros(&pwm, 0, 1500+400); //BL leg lift leg
	PCA9685_SetMicros(&pwm, 1, 1500-700); //BL shoulder extend back
	PCA9685_SetMicros(&pwm, 2, 1500+900); //ML leg
	PCA9685_SetMicros(&pwm, 3, 1700); //ML shoulder bit forward
	PCA9685_SetMicros(&pwm, 4, 1500); //FL leg
	PCA9685_SetMicros(&pwm, 5, 1500); //FL shoulder
	PCA9685_SetMicros(&pwm, 6, 1500-400); //BR leg lift leg
	PCA9685_SetMicros(&pwm, 7, 1500+700); //BR shoulder extend back
	PCA9685_SetMicros(&pwm, 8, 1500-900); //MR leg
	PCA9685_SetMicros(&pwm, 9, 1300); //MR shoulder bit forward
	PCA9685_SetMicros(&pwm, 10, 1500);//FR leg
	PCA9685_SetMicros(&pwm, 11, 1500);//FR shoulder
	for(int j=0 ; j<5 ; j++){
	for(int i=0 ; i<600 ; i++){
		PCA9685_SetMicros(&pwm, 4, 1500+i); //FL leg
		PCA9685_SetMicros(&pwm, 10, 1500-i);//FR leg
		PCA9685_SetMicros(&pwm, 3, 1700-i); //ML shoulder
		PCA9685_SetMicros(&pwm, 9, 1300+i); //MR shoulder
	}
	for(int i=0 ; i<600 ; i++){
		PCA9685_SetMicros(&pwm, 4, 2100-i); //FL leg
		PCA9685_SetMicros(&pwm, 10, 900+i);//FR leg
		PCA9685_SetMicros(&pwm, 3, 1100+i); //ML shoulder
		PCA9685_SetMicros(&pwm, 9, 1900-i); //MR shoulder
	}
	}
}
void circle_left(){
	/*//start neutral LEFT GAIT
	PCA9685_SetMicros(&pwm,0,1500);//BL leg
	PCA9685_SetMicros(&pwm,1,1500);//BL shoulder
	PCA9685_SetMicros(&pwm,4,1500);//FL leg
	PCA9685_SetMicros(&pwm,5,1500);//FL shoulder
	PCA9685_SetMicros(&pwm,8,1500);//MR leg
	PCA9685_SetMicros(&pwm,9,1500);//MR shoulder 1400
	//start neutral RIGHT GAIT
	PCA9685_SetMicros(&pwm,6,1500);//BR leg
	PCA9685_SetMicros(&pwm,7,1500);//BR shoulder
	PCA9685_SetMicros(&pwm,10,1500);//FR leg
	PCA9685_SetMicros(&pwm,11,1500);//FR shoulder
	PCA9685_SetMicros(&pwm,2,1500);//ML leg
	PCA9685_SetMicros(&pwm,3,1500);//ML shoulder 1600
	HAL_Delay(200);*/
	//Idea: right gait more, left gait opposite
	for(int i=0 ; i<15 ; i++){
//-----------------------------------------------------------------------------------------------------------------//
//RIGHT GAIT LIFT---
		PCA9685_SetMicros(&pwm,6,1300);//BR leg
		PCA9685_SetMicros(&pwm,10,1300);//FR leg
		PCA9685_SetMicros(&pwm,2,1700);//ML leg
		HAL_Delay(50);
//RIGHT GAIT SWEEP%%%
		PCA9685_SetMicros(&pwm,7,1500);//BR shoulder
		PCA9685_SetMicros(&pwm,11,1300);//FR shoulder xx further front d700
		PCA9685_SetMicros(&pwm,3,1400);//ML shoulder xx opposite d200
//LEFT GAIT PUSH***
		PCA9685_SetMicros(&pwm,1,1700);//BL shoulder opposite and further back d700
		PCA9685_SetMicros(&pwm,5,1700);//FL shoulder xx further front and opposite d700
		PCA9685_SetMicros(&pwm,9,1600);//MR shoulder xx more d200
		HAL_Delay(200);
// RIGHT GAIT DOWN!!
		PCA9685_SetMicros(&pwm,6,1500);//BR leg
		PCA9685_SetMicros(&pwm,10,1500);//FR leg
		PCA9685_SetMicros(&pwm,2,1500);//ML leg
		HAL_Delay(100);
//LEFT GAIT LIFT---
		PCA9685_SetMicros(&pwm,0,1700);//BL leg
		PCA9685_SetMicros(&pwm,4,1700);//FL leg
		PCA9685_SetMicros(&pwm,8,1300);//MR leg
		HAL_Delay(50);
//LEFT GAIT SWEEP%%%
		PCA9685_SetMicros(&pwm,1,1000);//BL shoulder xx opposite d700
		PCA9685_SetMicros(&pwm,5,1000);//FL shoulder xx opposite d700
		PCA9685_SetMicros(&pwm,9,1400);//MR shoulder xx d200
//RIGHT GAIT PUSH***
		PCA9685_SetMicros(&pwm,7,2200);//BR shoulder xx further back d700
		PCA9685_SetMicros(&pwm,11,2000);//FR shoulder
		PCA9685_SetMicros(&pwm,3,1600);//ML shoulder xx opposite d200
		HAL_Delay(200);
//LEFT GAIT DOWN!!
		PCA9685_SetMicros(&pwm,0,1500);//BL leg
		PCA9685_SetMicros(&pwm,4,1500);//FL leg
		PCA9685_SetMicros(&pwm,8,1500);//MR leg
		HAL_Delay(100);
	  }
//end
}
void turn_left(){
	/*//start neutral LEFT GAIT
	PCA9685_SetMicros(&pwm,0,1500);//BL leg
	PCA9685_SetMicros(&pwm,1,1500);//BL shoulder
	PCA9685_SetMicros(&pwm,4,1500);//FL leg
	PCA9685_SetMicros(&pwm,5,1500);//FL shoulder
	PCA9685_SetMicros(&pwm,8,1500);//MR leg
	PCA9685_SetMicros(&pwm,9,1500);//MR shoulder 1400
	//start neutral RIGHT GAIT
	PCA9685_SetMicros(&pwm,6,1500);//BR leg
	PCA9685_SetMicros(&pwm,7,1500);//BR shoulder
	PCA9685_SetMicros(&pwm,10,1500);//FR leg
	PCA9685_SetMicros(&pwm,11,1500);//FR shoulder
	PCA9685_SetMicros(&pwm,2,1500);//ML leg
	PCA9685_SetMicros(&pwm,3,1500);//ML shoulder 1600
	HAL_Delay(200);*/
	//Idea: right gait more, left gait opposite
	for(int i=0 ; i<3 ; i++){
//-----------------------------------------------------------------------------------------------------------------//
//RIGHT GAIT LIFT---
		PCA9685_SetMicros(&pwm,6,1300);//BR leg
		PCA9685_SetMicros(&pwm,10,1300);//FR leg
		PCA9685_SetMicros(&pwm,2,1700);//ML leg
		HAL_Delay(50);
//RIGHT GAIT SWEEP%%%
		PCA9685_SetMicros(&pwm,7,1500);//BR shoulder
		PCA9685_SetMicros(&pwm,11,1500);//FR shoulder
		PCA9685_SetMicros(&pwm,3,1400);//ML shoulder xx opposite d200
//LEFT GAIT PUSH***
		PCA9685_SetMicros(&pwm,1,1500);//BL shoulder stay
		PCA9685_SetMicros(&pwm,5,1000);//FL shoulder
		PCA9685_SetMicros(&pwm,9,1600);//MR shoulder xx more d200
		HAL_Delay(200);
// RIGHT GAIT DOWN!!
		PCA9685_SetMicros(&pwm,6,1500);//BR leg
		PCA9685_SetMicros(&pwm,10,1500);//FR leg
		PCA9685_SetMicros(&pwm,2,1500);//ML leg
		HAL_Delay(100);
//LEFT GAIT LIFT---
		PCA9685_SetMicros(&pwm,0,1700);//BL leg
		PCA9685_SetMicros(&pwm,4,1700);//FL leg
		PCA9685_SetMicros(&pwm,8,1300);//MR leg
		HAL_Delay(50);
//LEFT GAIT SWEEP%%%
		PCA9685_SetMicros(&pwm,1,1500);//BL shoulder
		PCA9685_SetMicros(&pwm,5,1500);//FL shoulder
		PCA9685_SetMicros(&pwm,9,1400);//MR shoulder xx d200
//RIGHT GAIT PUSH***
		PCA9685_SetMicros(&pwm,7,2000);//BR shoulder
		PCA9685_SetMicros(&pwm,11,2000);//FR shoulder
		PCA9685_SetMicros(&pwm,3,1600);//ML shoulder xx opposite d200
		HAL_Delay(200);
//LEFT GAIT DOWN!!
		PCA9685_SetMicros(&pwm,0,1500);//BL leg
		PCA9685_SetMicros(&pwm,4,1500);//FL leg
		PCA9685_SetMicros(&pwm,8,1500);//MR leg
		HAL_Delay(100);
//AGAIN	//RIGHT GAIT LIFT---
				PCA9685_SetMicros(&pwm,6,1300);//BR leg
				PCA9685_SetMicros(&pwm,10,1300);//FR leg
				PCA9685_SetMicros(&pwm,2,1700);//ML leg
				HAL_Delay(50);
		//RIGHT GAIT SWEEP%%%
				PCA9685_SetMicros(&pwm,7,1500);//BR shoulder
				PCA9685_SetMicros(&pwm,11,1500);//FR shoulder
				PCA9685_SetMicros(&pwm,3,1400);//ML shoulder xx opposite d200
		//LEFT GAIT PUSH***
				PCA9685_SetMicros(&pwm,1,1500);//BL shoulder stay
				PCA9685_SetMicros(&pwm,5,1000);//FL shoulder
				PCA9685_SetMicros(&pwm,9,1600);//MR shoulder xx more d200
				HAL_Delay(200);
		// RIGHT GAIT DOWN!!
				PCA9685_SetMicros(&pwm,6,1500);//BR leg
				PCA9685_SetMicros(&pwm,10,1500);//FR leg
				PCA9685_SetMicros(&pwm,2,1500);//ML leg
				HAL_Delay(100);
		//LEFT GAIT LIFT---
				PCA9685_SetMicros(&pwm,0,1700);//BL leg
				PCA9685_SetMicros(&pwm,4,1700);//FL leg
				PCA9685_SetMicros(&pwm,8,1300);//MR leg
				HAL_Delay(50);
		//LEFT GAIT SWEEP%%%
				PCA9685_SetMicros(&pwm,1,1500);//BL shoulder
				PCA9685_SetMicros(&pwm,5,1500);//FL shoulder
				PCA9685_SetMicros(&pwm,9,1400);//MR shoulder xx d200
		//RIGHT GAIT PUSH***
				PCA9685_SetMicros(&pwm,7,2000);//BR shoulder
				PCA9685_SetMicros(&pwm,11,2000);//FR shoulder
				PCA9685_SetMicros(&pwm,3,1600);//ML shoulder xx opposite d200
				HAL_Delay(200);
		//LEFT GAIT DOWN!!
				PCA9685_SetMicros(&pwm,0,1500);//BL leg
				PCA9685_SetMicros(&pwm,4,1500);//FL leg
				PCA9685_SetMicros(&pwm,8,1500);//MR leg
				HAL_Delay(100);
//-------STEP NORMAL IN BETWEEN ---
		//RIGHT GAIT LIFT---
				PCA9685_SetMicros(&pwm,6,1300);//BR leg
				PCA9685_SetMicros(&pwm,10,1300);//FR leg
				PCA9685_SetMicros(&pwm,2,1700);//ML leg
				HAL_Delay(50);
		//RIGHT GAIT SWEEP%%%
				PCA9685_SetMicros(&pwm,7,1500);//BR shoulder
				PCA9685_SetMicros(&pwm,11,1500);//FR shoulder
				PCA9685_SetMicros(&pwm,3,1500);//ML shoulder
		//LEFT GAIT PUSH***
				PCA9685_SetMicros(&pwm,1,1000);//BL shoulder
				PCA9685_SetMicros(&pwm,5,1000);//FL shoulder
				PCA9685_SetMicros(&pwm,9,1650);//MR shoulder
				HAL_Delay(200);
		// RIGHT GAIT DOWN!!
				PCA9685_SetMicros(&pwm,6,1500);//BR leg
				PCA9685_SetMicros(&pwm,10,1500);//FR leg
				PCA9685_SetMicros(&pwm,2,1500);//ML leg
				HAL_Delay(100);
		//LEFT GAIT LIFT---
				PCA9685_SetMicros(&pwm,0,1700);//BL leg
				PCA9685_SetMicros(&pwm,4,1700);//FL leg
				PCA9685_SetMicros(&pwm,8,1300);//MR leg
				HAL_Delay(50);
		//LEFT GAIT SWEEP%%%
				PCA9685_SetMicros(&pwm,1,1500);//BL shoulder
				PCA9685_SetMicros(&pwm,5,1500);//FL shoulder
				PCA9685_SetMicros(&pwm,9,1500);//MR shoulder
		//RIGHT GAIT PUSH***
				PCA9685_SetMicros(&pwm,7,2000);//BR shoulder
				PCA9685_SetMicros(&pwm,11,2000);//FR shoulder
				PCA9685_SetMicros(&pwm,3,1350);//ML shoulder
				HAL_Delay(200);
		//LEFT GAIT DOWN!!
				PCA9685_SetMicros(&pwm,0,1500);//BL leg
				PCA9685_SetMicros(&pwm,4,1500);//FL leg
				PCA9685_SetMicros(&pwm,8,1500);//MR leg
				HAL_Delay(100);
	  }
//end
}
