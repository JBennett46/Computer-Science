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

bool isAlpha(char c) {
    return ((c >= 'A' and c <= 'Z') or (c >= 'a' and c <= 'z'));
}

bool isDigit(char c) {
    return (c >= '0' and c <= '9');
}

void convertMove(string move, int moveArray[4], bool whiteTurn) {
    for(int i = 0; i < 4; i++) moveArray[i] = -1;

    if (move.length() == 4) {
        char startColChar = move[0]; 
        char startRowChar = move[1]; 
        char endColChar = move[2]; 
        char endRowChar = move[3];

        if (isAlpha(startColChar) and isDigit(startRowChar) and
            isAlpha(endColChar) and isDigit(endRowChar)) {
            int startCol = tolower(startColChar) - 'a';
            int startRow = '8' - startRowChar;
            int endCol = tolower(endColChar) - 'a';
            int endRow = '8' - endRowChar;

            moveArray[0] = startRow;
            moveArray[1] = startCol;
            moveArray[2] = endRow;
            moveArray[3] = endCol;
        } else {
            cout << "\nInvalid Move Format.\n";
            return;
        }
    }
    else if (move.length() == 5 and move[1] == 'x') {
        char startColChar = move[0];
        char endColChar = move[2];
        char endRowChar = move[3];

        if (isAlpha(startColChar) and isAlpha(endColChar) and isDigit(endRowChar)) {
            int endCol = tolower(endColChar) - 'a';
            int endRow = '8' - endRowChar;
            int startCol = tolower(startColChar) - 'a';
            int startRow = whiteTurn ? (endRow - 1) : (endRow + 1);

            if(startRow < 0 or startRow > 7){
                cout << "\nInvalid Capture Move: Starting row out of bounds.\n";
                return;
            }

            moveArray[0] = startRow;
            moveArray[1] = startCol;
            moveArray[2] = endRow;
            moveArray[3] = endCol;
        } else {
            cout << "\nInvalid Capture Move Format.\n";
            return;
        }
    }
    else {
        cout << "\nInvalid Move Length.\n";
        return;
    }

    if (moveArray[0] != -1 and moveArray[1] != -1 and moveArray[2] != -1 and moveArray[3] != -1) {
        cout << "Start Position: Row " << moveArray[0] << ", Column " << moveArray[1] << endl;
        cout << "End Position: Row " << moveArray[2] << ", Column " << moveArray[3] << endl;
    }
}

bool checkPawns(char board[8][8], int moveArray[4]) {
    char piece = board[moveArray[0]][moveArray[1]];

    if (piece != 'P' and piece != 'p') {
        cout << "Selected piece is not a pawn.\n";
        return false;
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
    else if (abs(colDiff) == 1 and rowDiff == direction) {
        char targetPiece = board[moveArray[2]][moveArray[3]];
        if ((piece == 'P' and targetPiece >= 'a' and targetPiece <= 'z') or
            (piece == 'p' and targetPiece >= 'A' and targetPiece <= 'Z')) {
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
            if (board[endRow][endCol] != 'O') {
                cout << "Captured " << board[endRow][endCol] << " at " 
                     << char('a' + endCol) << (8 - endRow) << endl;
            }
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
        cout << "\nEnter Moves (e2e4 e7e5 d2d4 exd4 etc.): ";
        getline(cin, move);
        string singleMove = "";
        for (int i = 0; i <= move.length(); i++) {
            if (i < move.length() and move[i] != ' ') {
                singleMove += move[i];
            }
            if ((i == move.length() or move[i] == ' ') and !singleMove.empty()) {
                if (singleMove.length() == 4 or singleMove.length() == 5) {
                    convertMove(singleMove, moveArray, whiteTurn);
                    if (moveArray[0] != -1 and moveArray[1] != -1 and moveArray[2] != -1 and moveArray[3] != -1) {
                        char piece = board[moveArray[0]][moveArray[1]];
                        if ((whiteTurn and piece == 'P') or (!whiteTurn and piece == 'p')) {
                            if (checkPawns(board, moveArray)) {
                                makeMove(board, moveArray);
                                whiteTurn = !whiteTurn;
                            }
                        } else {
                            cout << "\nIt's " << (whiteTurn ? "White" : "Black") << "'s turn.\n";
                        }
                    }
                }
                else if (singleMove.length() != 0) {
                    cout << "\nInvalid Move, please check your formatting: " << singleMove << "\n";
                }
                singleMove = "";
            }
        }
    }
}
