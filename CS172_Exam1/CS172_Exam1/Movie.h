//I affirm that all code given below was written solely by me, Sarah Kirsten, and that any help I received adhered to the rules stated for this exam.
#pragma once
#ifndef MOVIE_H
#define MOVIE_H

#include <iostream>
#include <iomanip>
#include <ctime>
#include <cmath>
#include <string>
#include <cstdlib>
#include <fstream>
#include <climits>

#include "Theater.h"

using namespace std;



class Movie
{
private:

	


public:
	static int popcorn;
	static int soda;
	static string Title;
	static string Genre;
	static int ShowTime;

	Movie();

	Movie(string Title, string Genre, int ShowTime);

	string GetTitle();
	string GetGenre();
	int GetShowTime();


};

#endif
