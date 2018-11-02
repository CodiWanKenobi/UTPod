/* utPod_driver.cpp
Demo Driver for the UtPod.

Mihir Shah and Chris Acosta
EE 312 10/16/18

This is a basic driver for the UtPod.

You will want to do more complete testing.

*/
#include <cstdlib>
#include <iostream>
#include "Song.h"
#include "UtPod.h"

using namespace std;

int main(int argc, char *argv[])
{
    UtPod t;

    t.showSongList();
    cout << endl << endl;
    Song s1("Zedd", "True Colors", 4);
    int result = t.addSong(s1);
    cout << "result = " << result << endl;

    t.showSongList();
    cout << endl;

    Song s2("Dwilly", "be right there", 5);
    result = t.addSong(s2);
    cout << "result = " << result << endl;

    t.showSongList();
    cout << endl;

    Song s3("Jeremy Zucker", "thinking 2 much", 6);
    result = t.addSong(s3);
    cout << "result = " << result << endl;

    t.showSongList();
    cout << endl;

    Song s4("HONNE", "306", 7);
    result = t.addSong(s4);
    cout << "result = " << result << endl;

    t.showSongList();
    cout << endl;

    Song s5("Grant", "The Edge", 24);
    result = t.addSong(s5);
    cout << "add result = " << result << endl;

    t.showSongList();
    cout << endl;

    Song s6("Martin Garrix", "Yottabyte", 2);
    result = t.addSong(s6);
    cout << "add result = " << result << endl;

    t.showSongList();
    cout << endl;

    Song s7("Hippo Campus", "Bubbles", 24);
    result = t.addSong(s7);
    cout << "add result = " << result << endl;

    result = t.addSong(s7);
    cout << "add result = " << result << endl; //add again

    t.showSongList();
    cout << endl;

    t.showSongList();
    cout << endl;
    t.sortSongList();
    t.showSongList();

    cout << "Everyday I'm shuffling" << endl << endl;
    t.shuffle();
    t.showSongList();

    result = t.removeSong(s2);
    cout << "delete result = " << result << endl;

    result = t.removeSong(s3);
    cout << "delete result = " << result << endl;

    t.showSongList();

    result = t.removeSong(s1);
    cout << "delete result = " << result << endl;

    result = t.removeSong(s5);
    cout << "delete result = " << result << endl;

    result = t.removeSong(s4);
    cout << "delete result = " << result << endl << endl;

    t.showSongList();


    result = t.removeSong(s7);
    cout <<  endl << endl;


    t.showSongList();



    //result = t.addSong(s5);
    //cout << "add result = " << result << endl;

    //t.showSongList();
    //cout << "memory = " << t.getRemainingMemory() << endl;


}