#include "Snake.h"

Snake :: Snake(int start, int end) {
    this->start = start;
    this->end = end;
}

int Snake :: getStart() {
    return start;
}

int Snake :: getEnd() {
    return end;
}

void Snake :: setStart(int start) {
    this->start = start;
}

void Snake :: setEnd(int end) {
    this->end = end;
}