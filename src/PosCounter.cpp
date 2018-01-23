/*
 * PosCounter.cpp
 *  Created on: Jan 13, 2018	Updated on: Jan 14, 2018
 *      Author: Sarah Lind and Devon Palma
 * If the robot has to go forward, the code with return a 1, if it has to go back, it will return -1,
 * and if it is where it has to be, it'll return 0
 */

#include "PosCounter.h"
PosCounter::PosCounter(int Gap) {
	// TODO Auto-generated constructor stub
	gap = Gap;
}

void PosCounter::setPoint(int EndPoint){
	endPoint = EndPoint;
}
double PosCounter::PIDGet(){
	itr_num++;
	if (curPosition < endPoint) {						//if we have to go foward
		if (itr_num - lastitrneg >= gap) {  //this will check how long it has been since we went back
			curPosition++;					//if it was less than the allotted gap, it will reset the curPosition and lastitrpos and return 1
			lastitrpos = itr_num;
			return 1;
		} else {
			return 0;
		}
	}
	else if (curPosition == endPoint){				//if we are at the endPoint
		return 0;
	}
	else {											// having to go backwards
		if (itr_num-lastitrpos >= gap) {			//same as above, but for negative instead of positive
			curPosition--;
			lastitrneg = itr_num;
			return -1;
		} else {
			return 0;
		}
	}
}
PosCounter::~PosCounter() {
	// TODO Auto-generated destructor stub
}
