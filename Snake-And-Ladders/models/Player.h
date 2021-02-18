#include<string>
using namespace std;

class Player {
    string name;
    int position;
    public:
        Player(string name, int position);

        string getName();
        int getPosition();
        void setName(string name);

        void setPosition(int position);
};