/*
================
cBkGround.h
- Header file for class definition - SPECIFICATION
- Header file for the Key Description class which is a child of cSprite class
=================
*/
#ifndef _CKEYDESC_H //_CBKGROUND_H
#define _CKEYDESC_H //_CBKGROUND_H
#include "cSprite.h"

class cKeyDescription : public cSprite
{
public:
	void render();		// Default render function
	void update(float deltaTime);		// Update method
};
#endif