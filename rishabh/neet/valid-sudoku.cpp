#include <iostream>
#include <vector>
#include <unordered_map>

bool isValidSudoku(std::vector<std::vector<char>> &board)
{
    for (int y = 0; y < 9; y++) // O(n2)
    {
        std::unordered_map<char, bool> row;
        for (int x = 0; x < 9; x++)
        {

            if (board[y][x] == '.')
            {
                continue;
            }

            if (row[board[y][x]])
            {
                return false;
            }
            else
            {
                row[board[y][x]] = true;
                continue;
            }
        }
    }

    for (int x = 0; x < 9; x++) // O(n2)
    {
        std::unordered_map<char, bool> col;
        for (int y = 0; y < 9; y++)
        {
            if (board[y][x] == '.')
            {
                continue;
            }

            if (col[board[y][x]])
            {
                return false;
            }
            else
            {
                col[board[y][x]] = true;
                continue;
            }
        }
    }
    for (int a = 0; a < 3; a++) // O(n^2)
    {
        for (int b = 0; b < 3; b++)
        {
            std::unordered_map<char, bool> block;
            for (int y = a * 3; y < 3 * (a + 1); y++)
            {
                for (int x = b * 3; x < 3 * (b + 1); x++)
                {
                    if (board[y][x] == '.')
                    {
                        continue;
                    }
                    if (block[board[y][x]])
                    {
                        return false;
                    }
                    block[board[y][x]] = true;
                }
            }
        }
    }

    return true;
}

int main()
{
    std::vector<std::vector<char>> board = {
        {'1','2','.','.','3','.','.','.','.'},
        {'4','.','.','5','.','.','.','.','.'},
        {'.','9','8','.','.','.','.','.','3'},
        {'5','.','.','.','6','.','.','.','4'},
        {'.','.','.','8','.','3','.','.','5'},
        {'7','.','.','.','2','.','.','.','6'},
        {'.','.','.','.','.','.','2','.','.'},
        {'.','.','.','4','1','9','.','.','8'},
        {'.','.','.','.','8','.','.','7','9'}
    };


    bool isValid = isValidSudoku(board);
    std::cout << "Is the Sudoku board valid? " << (isValid ? "Yes" : "No") << std::endl;

    return 0;   
}
