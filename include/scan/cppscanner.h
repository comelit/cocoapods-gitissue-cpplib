/**
 * @file cppscanner.h
 *
 * ComelitCppScanner class. This is a sample class to mimic a C++ library
 *
 * @author Andrea Busi
 */


#ifndef COMELITCPPSCANNER_H
#define COMELITCPPSCANNER_H

#include <stdlib.h>

class ComelitCppScanner
{
public:
    ComelitCppScanner();
	~ComelitCppScanner();

	/**
	 * @brief start the scan
	 * @return 0 if everything is ok, -1 otherwise
	 */
	int scan();
};
#endif // COMELITCPPSCANNER_H