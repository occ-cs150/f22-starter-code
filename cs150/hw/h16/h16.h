/**
    @file h16.h
    @author Your name
    @data Semester and Section
*/
#ifndef H16_H_
#define H16_H_

// Add your prototypes here
#include <string>

std::string getLine(const std::string& prompt="");
int getInt(const std::string& prompt="");
double getReal(const std::string& prompt="");
bool getYN(const std::string& prompt="");


#endif
