//I affirm that all code given below was written solely by me, Sarah Kirsten, and that any help I received adhered to the rules stated for this exam.

#ifndef MOVIE_H
#define MOVIE_H

#include <iostream>
#include <iomanip>
#include <ctime>
#include <cmath>
#include <string>
#include <cstdlib>
#include <fstream>

using namespace std;



class Movie
{
private:
	int popcorn;
	int soda;
	string Title;
	string Genre;
	int ShowTime;


public:

	Movie(string Title, string Genre, int ShowTime);

	string GetTitle()
	{
		return Title;
	}


	string GetGenre()
	{
		if (Genre == "Action")
			return "Action";
		else if (Genre == "Horror")
			return "Horror";
		else if (Genre == "Documentary")
			return "Documentary";
		else
			return "Comedy";

	}


	int GetShowTime()
	{
		return ShowTime;
	}


};

#endif
