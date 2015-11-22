//
//  Chord.cpp
//  Test
//
//  Created by Espen Gulbrandsen on 09/08/15.
//
//

#include "Chord.h"
#include <iostream>

int Chord::GetRandomMinorNote() {
    
    int minorNoteIntervals[] = {0,2,3,5,7,9,10,12};
    
    int index = rand() % (sizeof(minorNoteIntervals)/sizeof(*minorNoteIntervals));
    
    std::cout << index;
    std::cout << " index\n";
    
    return minorNoteIntervals[index];
}
