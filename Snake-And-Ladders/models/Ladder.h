#pragma once
#include<iostream>
using namespace std;

class Ladder {
    int start, end;
    public:
        Ladder(int start, int end);

        int getStart();

        int getEnd();

        void setStart(int start);

        void setEnd(int end);
};