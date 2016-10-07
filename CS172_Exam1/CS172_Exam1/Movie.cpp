#include "Movie.h"
#include "Theater.h"


Movie::Movie()
{

}

Movie::Movie(string Title, string Genre, int ShowTime)
{

}


string Movie::GetTitle()
{
	return Title;
}


string Movie::GetGenre()
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


int Movie::GetShowTime()
{
	return ShowTime;
}