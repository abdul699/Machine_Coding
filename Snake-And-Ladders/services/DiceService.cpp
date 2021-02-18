#include "DiceService.h"

int DiceService :: rollDice() {
    return rand()%6+1;
}