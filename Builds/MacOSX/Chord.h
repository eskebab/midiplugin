//
//  Chord.h
//  Test
//
//  Created by Espen Gulbrandsen on 09/08/15.
//
//

#ifndef __Test__Chord__
#define __Test__Chord__

#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include "ChordDTO.h"

class Chord {

private:
    std::vector<ChordDTO> chords;

public:
    Chord();
    int GetRandomMinorNote();
    int GetRandomMajorNote();
    int *GetChord(int * chordArray, int chordNumber);
    void addChord(ChordDTO dto);
    static void ReadChords();
};


#endif /* defined(__Test__Chord__) */
