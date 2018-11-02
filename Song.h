//
// Created by shahm on 10/31/2018.
//

#ifndef UTPOD_SONG_H
#define UTPOD_SONG_H

#include <cstdlib>
#include <iostream>

using namespace std;
class Song
{
private:
    string title;
    string artist;
    int size;

public:
    Song();
    Song(string, string, int);
    void setTitle(string);
    void setArtist(string);
    void setSize (int);
    string getTitle() const
        {   return title;   }
    string getArtist () const
        {   return artist;   }
    int getSize() const
        {   return size;   }

    bool operator >(Song const &rhs);
    bool operator <(Song const &rhs);
    bool operator ==(Song const &rhs);
};

#endif //UTPOD_SONG_H
