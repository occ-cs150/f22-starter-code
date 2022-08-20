/**
    @file h31.h
    @author Stephen Gilbert
    @version Declarations for CS 150 Homework
*/
#ifndef H31_H_
#define H31_H_

/**
 * Finds the first occurrence of str2 which appears in str1.
 * Returns a pointer to the first occurrence of str2 in str1.
 * If no match is found, then a null pointer is returned.
 * If str2 points to a string of zero length, then the argument str1 is returned.
 *
 * @param str1 C-string to search through.
 * @param str2 C-string to search for.
 * @return
 */
const char * findStr(const char *str1, const char *str2);

// DO NOT CHANGE THESE LINES
#define strcmp static_assert(false, "strcmp not allowed");
#define strstr static_assert(false, "strstr not allowed");
#define strlen(s) static_assert(false, "strlen not allowed");
#define strcat(d, s) static_assert(false, "strcat not allowed");
#define strcpy(d, s) static_assert(false, "strcpy not allowed");
#define string static_assert(false, "string not allowed");

#endif
