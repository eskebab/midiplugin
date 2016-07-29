//
// Created by Espen Gulbrandsen on 29/07/16.
//

#ifndef TEST_CHORDDTO_H
#define TEST_CHORDDTO_H

#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include "../JuceLibraryCode/JuceHeader.h"

class ChordDTO {
    String name_;

public:
    ChordDTO(String name) : name_{name} {}

    std::vector<int> intervals;
};

#endif //TEST_CHORDDTO_H
