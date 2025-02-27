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
    return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

bool isDigit(char c) {
    return (c >= '0' && c <= '9');
}

void convertMove(string move, int moveArray[4], bool whiteTurn) {
    // Initialize moveArray with -1 to indicate invalid positions
    for(int i = 0; i < 4; i++) moveArray[i] = -1;

    if (move.length() == 4) {
        char startColChar = move[0]; 
        char startRowChar = move[1]; 
        char endColChar = move[2]; 
        char endRowChar = move[3];

        if (isAlpha(startColChar) && isDigit(startRowChar) &&
            isAlpha(endColChar) && isDigit(endRowChar)) {
            moveArray[0] = '8' - startRowChar;
            moveArray[1] = (startColChar >= 'a' && startColChar <= 'h') ? (startColChar - 'a') : 
                            (startColChar >= 'A' && startColChar <= 'H') ? (startColChar - 'A') : -1;
            moveArray[2] = '8' - endRowChar;
            moveArray[3] = (endColChar >= 'a' && endColChar <= 'h') ? (endColChar - 'a') : 
                            (endColChar >= 'A' && endColChar <= 'H') ? (endColChar - 'A') : -1;
        } else {
            cout << "\nInvalid Move Format.\n";
        }
    }
    else if (move.length() == 5 && move[1] == 'x') {
        char startColChar = move[0]; // 'e' in 'exd4'
        char endColChar = move[2];   // 'd' in 'exd4'
        char endRowChar = move[3];   // '4' in 'exd4'

        if (isAlpha(startColChar) && isAlpha(endColChar) && isDigit(endRowChar)) {
            if (whiteTurn) {
                moveArray[0] = '8' - endRowChar + 1; // One row behind the capture
            } else {
                moveArray[0] = '8' - endRowChar - 1; // One row ahead the capture
            }
            moveArray[1] = (startColChar >= 'a' && startColChar <= 'h') ? (startColChar - 'a') : 
                            (startColChar >= 'A' && startColChar <= 'H') ? (startColChar - 'A') : -1;
            moveArray[2] = '8' - endRowChar;
            moveArray[3] = (endColChar >= 'a' && endColChar <= 'h') ? (endColChar - 'a') : 
                            (endColChar >= 'A' && endColChar <= 'H') ? (endColChar - 'A') : -1;
        } else {
            cout << "\nInvalid Capture Move Format.\n";
        }
    }
    else {
        cout << "\nInvalid Move Length.\n";
    }
    if (moveArray[0] != -1 && moveArray[1] != -1 && moveArray[2] != -1 && moveArray[3] != -1) { // Valid move parsing
        cout << "Start Position: Row " << moveArray[0] << ", Column " << moveArray[1] << endl;
        cout << "End Position: Row " << moveArray[2] << ", Column " << moveArray[3] << endl;
    }
}

bool checkPawns(char board[8][8], int moveArray[4]) {
    char piece = board[moveArray[0]][moveArray[1]];

    if (piece != 'P' && piece != 'p') {
        cout << "Selected piece is not a pawn.\n";
        return false; // Not a pawn
    }

    int direction = (piece == 'P') ? -1 : 1; // White moves up (-1), Black moves down (+1)

    int rowDiff = moveArray[2] - moveArray[0];
    int colDiff = moveArray[3] - moveArray[1];

    // Standard move forward
    if (colDiff == 0) {
        if (rowDiff == direction) {
            if (board[moveArray[2]][moveArray[3]] == 'O') {
                return true;
            } else {
                cout << "Invalid move: Destination is not empty.\n";
                return false;
            }
        }
        else if (rowDiff == 2 * direction) {
            if ((piece == 'P' && moveArray[0] == 6) || (piece == 'p' && moveArray[0] == 1)) {
                if (board[moveArray[0] + direction][moveArray[1]] == 'O' && board[moveArray[2]][moveArray[3]] == 'O') {
                    return true;
                } else {
                    cout << "Invalid move: Path is blocked.\n";
                    return false;
                }
            } else {
                cout << "Invalid move: Can only double move from starting position.\n";
                return false;
            }
        }
        else {
            cout << "Invalid move: Incorrect number of squares moved forward.\n";
            return false;
        }
    }
    else if (abs(colDiff) == 1 && rowDiff == direction) {
        char targetPiece = board[moveArray[2]][moveArray[3]];
        if ((piece == 'P' && (targetPiece >= 'a' && targetPiece <= 'z')) ||
            (piece == 'p' && (targetPiece >= 'A' && targetPiece <= 'Z'))) {
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
        cout << "\nInvalid move: Selected an empty square.\n";
    }
    else {
        if (checkPawns(board, moves)) {
            if (board[endRow][endCol] != 'O') {
                cout << "Captured " << board[endRow][endCol] << " at " << char('a' + endCol) << (8 - endRow) << endl;
            }
            board[endRow][endCol] = board[startRow][startCol];
            board[startRow][startCol] = 'O';
        }
        else {
            cout <<"\nInvalid Move: Pawn movement issue.\n";
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
    string moveInput;
    int moveArray[4];
    bool whiteTurn = true; 

    while(true) {
        printBoard(board);
        cout << "\nEnter Moves (e2e4 e7e5 d2d4 exd4 etc.): ";
        getline(cin, moveInput);
        string singleMove = "";

        for (size_t i = 0; i <= moveInput.length(); i++) {
            if (i < moveInput.length() && moveInput[i] != ' ') {
                singleMove += moveInput[i];
            }

            if ((i == moveInput.length() || moveInput[i] == ' ') && !singleMove.empty()) {
                if (singleMove.length() == 4 || singleMove.length() == 5) {
                    convertMove(singleMove, moveArray, whiteTurn);
                    if (moveArray[0] != -1 && moveArray[1] != -1 && moveArray[2] != -1 && moveArray[3] != -1) { // Check for valid parsing
                        char piece = board[moveArray[0]][moveArray[1]];
                        if ((whiteTurn && piece == 'P') || (!whiteTurn && piece == 'p')) {
                            if (checkPawns(board, moveArray)) {
                                makeMove(board, moveArray);
                                whiteTurn = !whiteTurn; // Toggle turn
                            }
                        } else {
                            cout << "\nIt's " << (whiteTurn ? "White" : "Black") << "'s turn.\n";
                        }
                    }
                }
                else {
                    cout << "\nInvalid Move Format: " << singleMove << "\n";
                }
                singleMove = "";
            }
        }
    }
}
