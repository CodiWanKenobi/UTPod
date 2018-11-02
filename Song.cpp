//
// Created by shahm on 10/31/2018.
//

#include "Song.h"


Song::Song()
{
    artist = "";
    title = "";
    size = 0;
}

Song::Song(string a, string t, int s)
{
    artist = a;
    title = t;
    size = s;
}

void Song::setArtist(string a)
{
    artist = a;
}

void Song::setTitle(string t)
{
    title = t;
}

void Song::setSize(int s)
{
    size = s;
}

bool Song::operator >(Song const &rhs)
{
    if(artist > rhs.artist)
    {
        return true;
    }
    else if(artist == rhs.artist)
    {
        if(title > rhs.title)
            return true;
        else if(title == rhs.title) {
            if (size > rhs.size)
                return true;
        }
    }
    else
        return false;
}

bool Song::operator <(Song const &rhs)
{
    if(artist < rhs.artist)
    {
        return true;
    }
    else if(artist == rhs.artist)
    {
        if(title < rhs.title)
            return true;
        else if(title == rhs.title) {
            if (size < rhs.size)
                return true;
        }
    }
    else
        return false;
}

bool Song::operator ==(Song const &rhs)
{
    if(artist == rhs.artist)
    {
        if(title == rhs.title)
        {
            if(size == rhs.size)
                return true;
            else
                return false;
        }
        else
            return false;
    }
    else
        return false;
}
