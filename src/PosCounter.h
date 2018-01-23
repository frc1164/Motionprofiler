/*
 * PosCounter.h
 *
 *  Created on: Jan 13, 2018
 *      Author: info
 */

#ifndef POSCOUNTER_H_
#define POSCOUNTER_H_

#include <PIDSource.h>

class PosCounter: public frc::PIDSource {
public:
	PosCounter(int Gap);
	virtual ~PosCounter();
	double PIDGet ();
	void setPoint (int EndPoint);
private:
	int endPoint;
	int curPosition;
	int itr_num;
	int lastitrpos;
	int lastitrneg;
	int gap;
};

#endif /* POSCOUNTER_H_ */
