#include<iostream>
#include<cmath>

using namespace std;


void printBoard(char board[8][8]) {
    for (int r = 0; r < 8; r++) {
        cout << 8 - r << " ";
        for (int c = 0; c < 8; c++) {
            cout << board[r][c] << " ";
        }
        cout << endl;
    }
    cout << "  a b c d e f g h" << endl;
}

void convertMove(string move, int moveArray[4]) {
    if (move.length() != 4) {
        cout << "\nInvalid Move, please check your formatting.\n";
        return;
    }
    int startRow, startCol, endRow, endCol;
    char startColChar = move[0]; 
    char startRowChar = move[1]; 

    if (isalpha(startColChar) and isdigit(startRowChar)) {
        startCol = startColChar - 'a';  
        startRow = '8' - startRowChar;
    } else {
        cout << "\nInvalid Start Position.\n";
        return;
    }
    char endColChar = move[2]; 
    char endRowChar = move[3];

    if (isalpha(endColChar) and isdigit(endRowChar)) {
        endCol = endColChar - 'a'; 
        endRow = '8' - endRowChar;
    } else {
        cout << "\nInvalid End Position.\n";
        return;
    }
    moveArray[0] = startRow;
    moveArray[1] = startCol;
    moveArray[2] = endRow;
    moveArray[3] = endCol;

    cout << "Start Position: Row " << startRow << ", Column " << startCol << endl;
    cout << "End Position: Row " << endRow << ", Column " << endCol << endl;

}


bool checkPawns(char board[8][8], int moveArray[4]) {
    // moveArray indices:
    // 0: Start Row
    // 1: Start Column
    // 2: End Row
    // 3: End Column

    char piece = board[moveArray[0]][moveArray[1]];

    if (piece != 'P' and piece != 'p') {
        return true;
    }
    int direction;
    if (piece == 'P') {
        direction = -1;
    } 
    else {
        direction = 1;
    }

    int rowDiff = moveArray[2] - moveArray[0];
    int colDiff = moveArray[3] - moveArray[1];

    if (colDiff == 0) {
        if (rowDiff == direction) {
            if (board[moveArray[2]][moveArray[3]] == 'O') {
                return true;
            } else {
                cout << "Invalid move, Destination is not empty.\n";
                return false;
            }
        }
        else if (rowDiff == 2 * direction) {
            if ((piece == 'P' and moveArray[0] == 6) or (piece == 'p' and moveArray[0] == 1)) {
                if (board[moveArray[0] + direction][moveArray[1]] == 'O' and board[moveArray[2]][moveArray[3]] == 'O') {
                    return true;
                } else {
                    cout << "Invalid move: Path is blocked.\n";
                    return false;
                }
            } else {
                cout << "Invalid move: Can only double jump on first move.\n";
                return false;
            }
        }
        else {
            cout << "Invalid move: Can't move that many squares.\n";
            return false;
        }
    }
    // Validate capture moves
    else if (abs(colDiff) == 1 && rowDiff == direction) {
        // Ensure the destination has an opponent's piece
        char targetPiece = board[moveArray[2]][moveArray[3]];
        if ((piece == 'P' && targetPiece >= 'a' && targetPiece <= 'z') ||
            (piece == 'p' && targetPiece >= 'A' && targetPiece <= 'Z')) {
            return true;
        } else {
            cout << "Invalid capture: No opponent's piece to capture.\n";
            return false;
        }
    }
    else {
        cout << "Invalid move: Incorrect movement pattern for pawn.\n";
        return false;
    }
}


void makeMove(char board[8][8], int moves[4]) {
    int startRow = moves[0];
    int startCol = moves[1];
    int endRow = moves[2];
    int endCol = moves[3];
    
    if (board[startRow][startCol] == 'O' ) {
        cout << "\nInvalid move, selected an Open space.\n";
    }
    
    else {
        if (checkPawns(board, moves)) {
            board[endRow][endCol] = board[startRow][startCol];
            board[startRow][startCol] = 'O';
        }
        else {
            cout <<"\nInvalid Move Pawn Issue.\n";
        }
    }

}

int main() { 
    char board[8][8] = {
        {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
        {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
        {'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'},
        {'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'},
        {'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'},
        {'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'},
        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
        {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}
    };
    string move;
    bool whiteTurn = true;
    int moveArray[4];
    while(true) {
        printBoard(board);
        cout << ""
        cout << "\nEnter Moves (e2e3 e7e6 etc.): ";
        getline(cin, move);
        string singleMove = "";
        for (int i = 0; i <= move.length(); i++) {
            if (move[i] != ' ' and i < move.length()) {
                singleMove += move[i];
            }
            if (i == move.length() or move[i] == ' ') {
                if (singleMove.length() == 4) {
                    convertMove(singleMove, moveArray);
                    for (int i = 0; i < 4; i++) {
                        cout << moveArray[i];
                    }
                    cout << "\n";
                    makeMove(board, moveArray);
                }
                else if (singleMove.length() != 0) {
                    cout << "\nInvalid Move, please check your formatting: " << singleMove << "\n";
                }
                singleMove = "";
            
            }
    
        }
    }
}