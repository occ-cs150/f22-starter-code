/**
    @file h15.h
    @author Stephen Gilbert
    @version CS 150 Function Declarations
*/
#ifndef H15_H_
#define H15_H_

#include <string>

/**
 * Opens and processes the data sets in fileName.
 * Returns as a string the count and the average.
 * @param fileName name of the file.
 * @return the stats as described in the handout.
 */
std::string dataSets(const std::string& fileName);

#endif
