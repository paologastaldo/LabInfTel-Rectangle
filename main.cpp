#include<iostream>

#include "Rectangle.h"

int main() {

	Rectangle rectA(3.5,5);
	Rectangle rectB = rectA;
	Rectangle rectC, rectD;
	
	rectC = rectB;
	
	rectD.SetDim(1.,1.);
	
	rectA.Dump();
	rectB.Dump();
	rectC.Dump();
	rectD.Dump();

	
	return 0;

}