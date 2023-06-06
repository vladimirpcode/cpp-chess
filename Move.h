#ifndef MOVE_H
#define MOVE_H

#include <string>
#include "Position.h"
#include "ChessPiece.h"

namespace chess{

class Move{
public:
    Position start;
    Position end;
    bool doneEnPassant; //в этом хоте делается взятие на проходе
    bool pawnTransform; //... превращение пешки
    ChessPiece pawnTransformPiece; // во что превращается
    bool takingIsDone;
    ChessPiece capturedPiece;
    bool shortCastlingLost; // потеря рокировки
    bool longCastlingLost;
    int localMovesWithoutMistakes;
    int evaluate;

    Move(int, int, int, int);
    Move(Position, Position);
    Move(const Move&);
    std::string toString();
};


}


#endif