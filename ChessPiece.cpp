#include "ChessPiece.h"

namespace chess {

ChessPiece::ChessPiece(ChessPieceType type, Color color){
    this->pieceType = type;
    this->pieceColor = color;
    switch (type)
    {
        case ChessPieceType::Pawn: pieceWeight = 100; break;
        case ChessPieceType::Knight: pieceWeight = 300; break;
        case ChessPieceType::Bishop: pieceWeight = 300; break;
        case ChessPieceType::Rock: pieceWeight = 400; break;
        case ChessPieceType::Queen: pieceWeight = 800; break;
        case ChessPieceType::King: pieceWeight = 1000000; break;
    }
}

ChessPieceType& ChessPiece::type(){
    return pieceType;
}

Color& ChessPiece::color(){
    return pieceColor;
}

int ChessPiece::weight(){
    return pieceWeight;
}

}