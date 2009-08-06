#ifndef RANDOM_H
#define RANDOM_H

#include <iostream> 
#include <ctime> 
#include <cstdlib>

using namespace std;

static class Random
{
public:
	static void Init(int seed){
		//srand((unsigned)time(0));
		srand(seed);

	}

	static int Next(int bottom, int top){
		
		


		int range = (top - bottom) +1;
		
		int int_random = bottom + int(range * rand()/(RAND_MAX + 1.0));

		return int_random;

		

		

	}
};

#endif