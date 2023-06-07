#include "Move.h"

namespace chess{

Move::Move(int x1, int y1, int x2, int y2) 
    : start(x1, y1), end(x2, y2), pawnTransformPiece(ChessPieceType::Blank, Color::Black),
    capturedPiece(ChessPieceType::Blank, Color::Black){
    doneEnPassant = false;
    pawnTransform = false;
    takingIsDone = false;
    shortCastlingLost = false;
    longCastlingLost = false;
    localMovesWithoutMistakes = 0;
    evaluate = 0;
}

Move::Move(Position point_start, Position point_end) 
    : start(point_start), end(point_end),
    pawnTransformPiece(ChessPieceType::Blank, Color::Black),
    capturedPiece(ChessPieceType::Blank, Color::Black){
    doneEnPassant = false;
    pawnTransform = false;
    takingIsDone = false;
    shortCastlingLost = false;
    longCastlingLost = false;
    localMovesWithoutMistakes = 0;
    evaluate = 0;
}

Move::Move(const Move& mv) : start(mv.start), end(mv.end), 
    pawnTransformPiece(mv.pawnTransformPiece),capturedPiece(mv.capturedPiece){
    doneEnPassant = mv.doneEnPassant;
    pawnTransform = mv.pawnTransform;
    takingIsDone = mv.takingIsDone;
    shortCastlingLost = mv.shortCastlingLost;
    longCastlingLost = mv.longCastlingLost;
    localMovesWithoutMistakes = mv.localMovesWithoutMistakes;
    evaluate = mv.evaluate;
}

std::string Move::toString(){
    return start.toString() + "-" + end.toString();
}

}