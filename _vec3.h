#pragma once


#ifndef _VEC_H
#define _VEC_H


#include <ostream>
#include <math.h>

template<typename T>


/// Tunables loader.
/** This class contains a set of functions for loading tunables from
 * file. Usually you only need one QuaTunablesLoader object in your
 * program. Once its work is done, you can safely destroy it.
 *
 * ... blah, blah, blah ...
 * */
class _vec3 { // generic 3D vector of type T
public:
	_vec3<T>() : d{ 0,0,0 } {}
	_vec3<T>(T a, T b, T c) : d{ a,b,c } {}
	T& operator[] (int i) { return d[i]; }
	T operator[] (int i) const { return d[i]; }



	/** 
	
 * Implements addition of two vectors.
 * 
 * NOTE: This examples assumes a (1x3) size
 *
 * @param a first vector
 * @param b second vector

 * @return the result of the vector addtion
 * 
 * \f(\vec{c} = \vec{a}+\vec{b} = <a_1+b_1,a_2+b_2,a_3+b_3> \f).
 */ 
	friend _vec3<T> operator+(const _vec3<T>& a, const _vec3<T>& b) {
		return _vec3<T>(a[0] + b[0], a[1] + b[1], a[2] + b[2]);
	}

	/**

* Implements subtraction of two vectors.
*
* NOTE: This examples assumes a (1x3) size
*
* @param a first vector
* @param b second vector

* @return the result of the vector addtion
*
* \f(\vec{c} = \vec{a}-\vec{b} = <a_1-b_1,a_2-b_2,a_3-b_3> \f).
*/
	friend _vec3<T> operator-(const _vec3<T>& a, const _vec3<T>& b) {
		return _vec3<T>(a[0] - b[0], a[1] - b[1], a[2] - b[2]);
	}

	/**

* Implements dot product of two vectors.
*
* NOTE: This examples assumes a (1x3) size
*
* @param a first vector
* @param b second vector

* @return the result of the vector dot product
*
* \f(\vec{a}\cdot \vec{b} = a_1*b_1 + a_2*b_2+a_3*b_3 \f).
*/
	friend T dot(const _vec3<T>& a, const _vec3<T>& b) {
		return a[0] * b[0] + a[1] * b[1] + a[2] * b[2];
	}
	
	/**

* Implements the magnitude of a vector.
*
*
* @param a  an arbitrary vector

* @return the result of the magnitude between two vectors
*
* \f(\left\|\vec{a} \right\| = \sqrt{\vec{a} \cdot \vec{a}} \f).
*/
	friend double mag(const _vec3<T>& a) { return sqrt(dot(a, a)); }
	
	
	friend std::ostream& operator<<(std::ostream& out, const _vec3<T>& a) {
		out << a[0] << " " << a[1] << " " << a[2]; return out;
	}
protected:
	T d[3];
};
using double3 = _vec3<double>; // assign a nickname

#endif
