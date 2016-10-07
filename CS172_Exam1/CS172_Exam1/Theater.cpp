#include "Theater.h"
#include "Movie.h"
#include "Movie.cpp"

Theater::Theater(string Name, string Phone)
{

}

void Theater::AddMovie(Movie& Movie)//add a movie at a specific time
{
	Movie = Movie;
}
string Theater::GetMovieForHour(int Hour)//return movie shown at or after that time. return "" if none are upcoming
{
	for (int i = 0; i < 11; i++)
	{
		if (Movie::ShowTime == Hour)
			return Movie::Title;
		else
			return "";
	}
}
int Theater::GetShowTimeForGenre(string Genre)//when will the movie of the given genre be shown/ return -1 if none exists
{
	for (int i = 0; i < 11; i++)
	{
		if (Movie::Genre == Genre)
			return Movie::ShowTime;
		else
			return -1;
	}
}
int Theater::GetPopcornPrice()//make up cost in dollar for popcorn
{
	return 10;
}
int Theater::GetCokePrice()//make up cost of Coke
{
	return 3;
}