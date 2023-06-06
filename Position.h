#ifndef POSITION_H
#define POSITION_H

#include <string>

class Position{
public:
    int x;
    int y;

    Position(int x, int y);

    Position(const Position& pos);

    std::string toString();

};

#endif