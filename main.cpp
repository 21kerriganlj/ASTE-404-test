
///
/// test1, test2, test 3
/// 

#include <iostream>
#include "_vec3.h"

/**
This is where my program starts.

 @arg	num_args	number of command line arguments
 @arg	args		an array of command line arguments as strings
 @return	Exit code to pass to the operating system

*/
	int main(int num_args, char** args) {
		double3 a{ 0,1,2 };   //! some 3 dimensional double precision array
		double3 b{ 0,0,1 };

		/**
		Take vector subtraction
		*/
		std::cout << a - b << std::endl;

		/**
		Take vector dot product
		*/
		std::cout << dot(a, b) << std::endl;
		return 0;
	}


