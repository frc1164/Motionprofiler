/*
 * MotionProfiler.h
 *
 *  Created on: Jan 13, 2018
 *      Author: info
 */

#ifndef MOTIONPROFILER_H_
#define MOTIONPROFILER_H_
#include "PosCounter.h"
#include "Filters/LinearDigitalFilter.h"
#include <Filters/Filter.h>

using namespace frc;

class MotionProfiler {
public:
	MotionProfiler();
	virtual ~MotionProfiler();
	float setPos();
	float update();
	float getPos();
private:
	PosCounter *counter;
	frc::LinearDigitalFilter *Filter;
};
#endif /* MOTIONPROFILER_H_ */
