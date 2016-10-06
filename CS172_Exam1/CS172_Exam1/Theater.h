//I affirm that all code given below was written solely by me, Sarah Kirsten, and that any help I received adhered to the rules stated for this exam.

#ifndef THEATER_H
#define THEATER_H

#include <iostream>
#include <iomanip>
#include <ctime>
#include <cmath>
#include <string>
#include <cstdlib>
#include <fstream>

using namespace std;

#include "Movie.h"

class Theater
{
private:
	string Name;//name of the theater
	string Phone;//phone number of the theater
	const int MOVIECOUNT = 0;

	movieListing[MOVIECOUNT];

public:
	Theater(string Name, string Phone);

	void AddMovie(Movie& Movie)//add a movie at a specific time
	{

	}
	string GetMovieForHour(int Hour)//return movie shown at or after that time. return "" if none are upcoming
	{

	}
	int GetShowTimeForGenre(string Genre)//when will the movie of the given genre be shown/ return -1 if none exists
	{

	}
	int GetPopcornPrice()//make up cost in dollar for popcorn
	{
		return 10;
	}
	int GetCokePrice()//make up cost of Coke
	{
		return 3;
	}
};

#endif
