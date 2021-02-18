#include<iostream>
using namespace std;

class Snake {
    int start, end;
    public:
        Snake(int start, int end);

        int getStart();

        int getEnd();

        void setStart(int start);

        void setEnd(int end);
};