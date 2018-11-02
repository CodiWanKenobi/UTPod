//
// Created by shahm on 10/31/2018.
//

#include "UtPod.h"
#include <ctime>
#include <cstdlib>
#include <iostream>
#include <utility>

using namespace std;

UtPod::UtPod()
{
    memSize = MAX_MEMORY;
    songs = NULL;
}

UtPod::UtPod(int size)
{
    if(size > MAX_MEMORY || size <= 0)
        size = MAX_MEMORY;
    songs = NULL;
}


int UtPod::addSong(Song const &s)
{
    if(s.getSize() <= getRemainingMemory())
    {
        SongNode *newSong = new SongNode;
        newSong->s = s;
        newSong->next = songs;
        songs = newSong;
        return SUCCESS;
    }
    else
        return NO_MEMORY;

}

int UtPod::removeSong(Song const &s)
{
    SongNode *temp1 = songs;
    SongNode *temp2;
    int iterations = 0;
    while(temp1 != NULL)
    {
        if(temp1->s == s)
        {
            if(iterations == 0)
            {
                songs = songs->next;
                delete temp1;
                return SUCCESS;
            }
            else
            {
                temp2->next = temp1->next;
                delete temp1;
                return SUCCESS;
            }
        }
        temp2 = temp1;
        temp1 = temp1->next;
        iterations++;
    }
    return NOT_FOUND;
}

void UtPod::shuffle()
{
    int i, j;
    SongNode *temp1 = songs;
    SongNode *temp2 = songs;
    int numSongs = 0;
    srand(time(0));
    while(temp1 != NULL)
    {
        numSongs++;
        temp1 = temp1->next;
    }
    if(numSongs >= 2)
    {
        temp1 = temp2;
        for (i = 0; i < rand(); i++) {
            for (j = 0; j < (rand() % (numSongs)); j++) {
                temp1 = temp1->next;
            }
            swap(temp1->s, temp2->s);
            temp2 = temp1;
            temp1 = songs;
        }
    }
}

void UtPod::showSongList()
{
    SongNode *save = songs;
    while(songs != NULL)
    {
        cout << songs->s.getArtist() + " - ";
        cout << songs->s.getTitle() + ", ";
        cout << songs->s.getSize() << " MB"<< endl;
        songs = songs->next;
    }
    songs = save;
}

void UtPod::sortSongList()
{
    SongNode *temp1 = songs;
    SongNode *temp2 = NULL;
    bool switched;
    do
    {
        switched = false;
        temp1 = songs;
        while(temp1->next != temp2)
        {
            if(temp1->s > temp1->next->s)
            {
                swap(temp1->s, temp1->next->s);
                switched = true;
            }
            temp1 = temp1->next;
        }
        temp2 = temp1;
    }while(switched);

}

void UtPod::clearMemory()
{
    SongNode *leader = songs;
    SongNode *follower = songs;

    while(leader != NULL)
    {
        leader = leader->next;
        delete(follower);
        follower = leader;
    }

}

int UtPod::getRemainingMemory()
{
    int totalMemUsed = 0;
    SongNode *save = songs;

    while(songs != NULL)
    {
        totalMemUsed += songs->s.getSize();
        songs = songs->next;
    }
    songs = save;
    return memSize - totalMemUsed;
}

UtPod::~UtPod()
{
    clearMemory();
}