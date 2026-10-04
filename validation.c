#include "validation.h"

int validChoice(int choice, int min, int max)
{
    if (choice >= min && choice <= max)
        return 1;

    return 0;
}

int validNumber(double number)
{
    if (number >= 0)
        return 1;

    return 0;
}