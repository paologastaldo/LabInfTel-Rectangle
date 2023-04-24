/// \file rectangle.cpp
///	\brief class Rectangle: implementation of the functions
///
///	Details.
///

#include<iostream>
#include "Rectangle.h"

/// @brief default constructor 
Rectangle::Rectangle() {

	cout << "Rectangle - constructor - default" << endl;

	width = 0.;
	length = 0.;

}

/// @brief constructor 
/// @param w width of the rectangle
/// @param h length of the rectangle
Rectangle::Rectangle(float w, float l) {

	width = 0.;
	length = 0.;

	cout << "Rectangle - constructor" << endl;

	if (w <= 0.) 
		cout << "WARNING: Rectangle - constructor: width should be > 0" << endl;
	else
		width = w;

	if (l <= 0.) 
		cout << "WARNING: Rectangle - constructor: length should be > 0" << endl;
	else
		length = l;



}

/// @brief destructor 
Rectangle::~Rectangle() {

	cout << "Rectangle - destructor" << endl;

}

/// @brief copy constructor 
/// @param r reference to the object that should be copied 
Rectangle::Rectangle(const Rectangle &r) { 

	cout << "Rectangle - copy constructor" << endl;

	width = r.width;
	length = r.length;
	
}

/// @brief overload of operator = 
/// @param r reference to the object on the right side of the operator 
/// @return reference to the object on the left side of the operator 
Rectangle& Rectangle::operator=(const Rectangle &r) { 

	cout << "Rectangle - operator =" << endl;

	width = r.width ;
	length = r.length;
	
	return *this;
	
}

/// @brief overload of operator == 
/// @param r reference to the object on the right side of the operator 
/// @return true if the two objects have the same width and the same length  
bool Rectangle::operator==(const Rectangle &r) { 

	if (r.width == width && r.length == length)
		return true;
		
	return false;
}




/// @brief set width of the object
/// @param w width 
void Rectangle::SetWidth(float w) {

	if (w < 0.) {
		cout << "WARNING: Rectangle - SetWidth: width should be > 0" << endl;
		return;
	}

	width = w;

}

/// @brief set length of the object
/// @param l length 
void Rectangle::SetLength(float l) {

	if (l < 0.) {
		cout << "WARNING: Rectangle - SetLength: length should be > 0" << endl;
		return;
	}

	length = l;

}

/// @brief set width and length of the object
/// @param w width 
/// @param l length 
void Rectangle::SetDim(float w, float l) {

	SetWidth(w);
	SetLength(l);
}


/// @brief get width of the object
/// @return width 
float Rectangle::GetWidth() {

	return width;

}

/// @brief get length of the object
/// @return length
float Rectangle::GetLength() {

	return length;
}

/// @brief get width and length of the object
/// @param w width 
/// @param l length
void Rectangle::GetDim(float &w, float &l) {

	w = width;
	l = length; 
	
	return;
}

/// @brief get the area of the object
/// @return area of the rectangle
float Rectangle::GetArea() {

	return width * length;

}

/// @brief get the perimeter of the object
/// @return perimeter of the rectangle
float Rectangle::GetPerimeter() {

	return 2 * (width + length);

}


