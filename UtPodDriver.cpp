/* utPod_driver.cpp
Demo Driver for the UtPod.

Roger Priebe
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

    Song s1("Zedd", "True Color", 4);
    cout << endl;
    int result = t.addSong(s1);
    cout << "add result = " << result << endl;

    t.showSongList();

    Song s2("Hippo Campus", "Bubbles", 5);
    cout << endl;
    result = t.addSong(s2);
    cout << "add result = " << result << endl;

    t.showSongList();

    Song s3("Jeremy Zucker", "thinking 2 much", 6);
    cout << endl;
    result = t.addSong(s3);
    cout << "add result = " << result << endl;

    t.showSongList();

    Song s4("Dwilly", "be right there", 7);
    cout << endl;
    result = t.addSong(s4);
    cout << "add result = " << result << endl;

    t.showSongList();

    Song s5("HONNE", "306", 241);
    cout << endl;
    result = t.addSong(s5);
    cout << "add result = " << result << endl;

    t.showSongList();

    Song s6("HONNE", "Sometimes", 2);
    cout << endl;
    result = t.addSong(s6);
    cout << "add result = " << result << endl;

    t.showSongList();

    cout << endl;
    cout << "Everyday I'm shuffling" << endl;
    t.shuffle();
    t.showSongList();

    cout << endl;
    cout << "Check Sort" << endl;
    t.sortSongList();
    t.showSongList();

    cout << endl;
    result = t.removeSong(s2); //remove "Hippo Campus", "Bubbles", 5
    cout << "delete result = " << result << endl;

    result = t.removeSong(s3); //remove "Jeremy Zucker", "thinking 2 much", 6
    cout << "delete result = " << result << endl;

    cout << endl;
    t.showSongList();

    cout << endl;
    result = t.removeSong(s1);
    cout << "delete result = " << result << endl;

    cout << endl;
    result = t.removeSong(s5);
    cout << "delete result = " << result << endl;

    cout << endl;
    result = t.removeSong(s4);
    cout << "delete result = " << result << endl;

    cout << endl;
    t.showSongList();

    cout << endl;
    result = t.addSong(s5);
    cout << "add result = " << result << endl;

    t.showSongList();
    cout << endl;
    cout << "memory = " << t.getRemainingMemory() << endl;

    Song s7("Jeremy Zucker", "desire", 513);
    cout << endl;
    result = t.addSong(s7);
    cout << "add result = " << result << endl;

    t.showSongList();

    cout << endl;
    Song s8("Jeremy Zucker", "firefly", 5);
    result = t.removeSong(s8);
    cout << "delete result = " << result << endl;
    t.showSongList();
}