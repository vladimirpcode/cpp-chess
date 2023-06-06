#include "Move.h"

namespace chess{

Move::Move(int x1, int y1, int x2, int y2){
    start = Position(x1, y1);
    end = Position(x2, y2);
    doneEnPassant = false;
    pawnTransform = false;
    pawnTransformPiece = ChessPieceType::Blank;
    takingIsDone = false;
    capturedPiece = ChessPieceType::Blank;
}

Move::Move(Position, Position){

}

Move::Move(const Move&){

}

std::string Move::toString(){

}
}