//I affirm that all code given below was written solely by me, Sarah Kirsten, and that any help I received adhered to the rules stated for this exam.
#pragma once
#ifndef THEATER_H
#define THEATER_H


#include <iostream>
#include <iomanip>
#include <ctime>
#include <cmath>
#include <string>
#include <cstdlib>
#include <fstream>
#include <climits>

using namespace std;

#include "Movie.h"


class Theater
{
private:
	 static string Name;//name of the theater
	 static string Phone;//phone number of the theater

public:
	Theater(string Name, string Phone);

	void AddMovie(Movie& Movie);
	string GetMovieForHour(int Hour);
	int GetShowTimeForGenre(string Genre);
	int GetPopcornPrice();
	int GetCokePrice();
};

#endif
