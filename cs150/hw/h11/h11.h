/**
    @file h11.h
    @author
    @version
*/
#ifndef H11_H_
#define H11_H_
#include <string>

bool read(const std::string& prompt, int& n, bool ln=false);
bool read(const std::string& prompt, double& n, bool ln=false);
bool read(const std::string& prompt, std::string& s, bool ln=false);
bool read(char& c, char sentinel);

#endif
