#include <iostream>
#include <algorithm>
#include "stringManipulator.h"

using namespace std;

string StringManipulator::ConvertToUpper(string input)
{
    transform(input.begin(), input.end(), input.begin(), ::toupper);
    return input;
}

string StringManipulator::ConvertToLower(string input)
{
    transform(input.begin(), input.end(), input.begin(), ::tolower);
    return input;
}
