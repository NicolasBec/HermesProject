#ifndef RESETBUTTON_H
#define RESETBUTTON_H

#include "Arduino.h"
#include "SDWriter.h"

/**
 *  ResetButton class
 *  This class allows to make an interruption when the pin's state change
 */
class ResetButton
{
	private:
		int8_t interruptPin;
		SDWriter* writer;
		
	public:
		ResetButton(SDWriter* writer);
		ResetButton(SDWriter* writer, int _interruptPin);
		void init();
		void reset();
}
