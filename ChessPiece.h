#ifndef CHESSPIECE_H
#define CHESSPIECE_H

#include <string>
#include "ChessPieceType.h"
#include "Color.h"

namespace chess{

class ChessPiece{
public:
    ChessPiece(ChessPieceType, Color);
    ChessPieceType& type();
    Color& color();
    int weight();
private:
    ChessPieceType pieceType;
    Color pieceColor;
    int pieceWeight;
};

}
#endif