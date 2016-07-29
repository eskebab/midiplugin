//
//  Chord.cpp
//  Test
//
//  Created by Espen Gulbrandsen on 09/08/15.
//
//

#include "Chord.h"


Chord::Chord() {
    ChordDTO chord1{"minor1"};
    ChordDTO chord2{"major1"};

    int intervals[] = {3,7,10,0};
    chord1.intervals.assign(intervals, intervals + 4);
    int intervals2[] = {4,7,11,0};
    chord2.intervals.assign(intervals2, intervals2 + 4);

    this->addChord(chord1);
    this->addChord(chord2);
}

int Chord::GetRandomMinorNote() {
    
    int minorNoteIntervals[] = {0,2,3,5,7,9,10,12};
    
    int index = rand() % (sizeof(minorNoteIntervals)/sizeof(*minorNoteIntervals));

    return minorNoteIntervals[index];
}

int Chord::GetRandomMajorNote() {

    int majorNoteIntervals[] = {0,2,4,6,7,9,11,12};

    int index = rand() % (sizeof(majorNoteIntervals)/sizeof(*majorNoteIntervals));

    return majorNoteIntervals[index];
}

int* Chord::GetChord(int * chordArray, int chordNumber) {
     int * test = &chords.at(chordNumber).intervals[0];
/*
    chordArray[0] = 4;
    chordArray[1] = 7;
    chordArray[2] = 12;
    chordArray[3] = 0;
*/
    return test;
}

void Chord::ReadChords() {

}

void Chord::addChord(ChordDTO dto) {
    this->chords.push_back(dto);
}
