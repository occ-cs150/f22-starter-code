/**
    @file h21.h
    @author Stephen Gilbert
    @version Declarations for CS 150 Homework
*/
#ifndef H21_H_
#define H21_H_
#include <vector>
#include <string>
/**
 *  Opens a file and returns a vector<string> containing words.
 *  @param filename contains the path needed to open the file.
 *  @return a vector<string> of words.
 */
std::vector<std::string> fileToWords(const std::string& filename);

#endif
