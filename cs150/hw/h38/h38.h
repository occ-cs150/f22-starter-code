/*
 *	@file h38.h
 *  @author Your name goes here
 *  @version  what day and meeting time
 */
#ifndef H38_H_
#define H38_H_

#include <string>

/////// Declare all of your classes here ////////////////
/////// In this order: Worker, SalariedWorker, HourlyWorker
class Worker
{
	std::string m_name;
	double m_rate;
public:
	Worker(const std::string& name, double rate);
	virtual ~Worker() = default;
   // Remaining members here
};

#endif
