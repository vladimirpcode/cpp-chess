#include "Position.h"
#include <string>

Position::Position(int x, int y){
    this->x = x;
    this->y = y;
}

Position::Position(const Position& pos){
    x = pos.x;
    y = pos.y;
}

std::string Position::toString(){
    char result[3];
    result[0] = (char)(x+97);
    result[1] = (char)(y+49);
    result[2] = '\0';
    std::string s_result(result);
    return s_result;
}
