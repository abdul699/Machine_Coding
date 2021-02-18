#include "Ladder.h"

Ladder :: Ladder(int start, int end) {
    this->start = start;
    this->end = end;
}

int Ladder :: getStart() {
    return start;
}

int Ladder :: getEnd() {
    return end;
}

void Ladder :: setStart(int start) {
    this->start = start;
}

void Ladder :: setEnd(int end) {
    this->end = end;
}