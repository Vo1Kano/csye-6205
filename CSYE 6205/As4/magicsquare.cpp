/*----------------------------------------------------------------
Copyright (c) 2023 Author: Jagadeesh Vasudevamurthy
file: magicsquare.cpp
-----------------------------------------------------------------*/

/*----------------------------------------------------------------
This file has magicsquare class definition
-----------------------------------------------------------------*/

/*----------------------------------------------------------------
All includes here
NOTHING CAN BE CHANGED
-----------------------------------------------------------------*/
#include "magicsquare.h"

/*----------------------------------------------------------------
WRITE CODE BELOW
-----------------------------------------------------------------*/


//EOF


// Private Function 1,Function to allocate memory for the magic square
vector<vector<int>> magicsquare::allocate_square(int n) {
    vector<vector<int>> square(n, vector<int>(n));
    return square;
}

// Private Function 2,Function to initialize the magic square
void magicsquare::init_square(vector<vector<int>>& square) {
    int n = square.size();
    int i = n / 2;
    int j = n - 1;
    for (int num = 1; num <= n * n; ) {
        if (i == -1 && j == n) {
            j = n - 2;
            i = 0;
        }
        else {
            if (j == n) {
                j = 0;
            }
            if (i < 0) {
                i = n - 1;
            }
        }
        if (square[i][j]) {
            j -= 2;
            i++;
            continue;
        }
        else {
            square[i][j] = num++;
        }
        j++; i--;
    }
}

// Private Function 3,Function to implements an algorithm to generate a magic square
vector<vector<int>> magicsquare::generate_magic_square(int n) {
    std::vector<std::vector<int>> square = allocate_square(n);
    int row = 0, col = n / 2, num = 1;
    for (int i = 0; i < n * n; i++) {
        square[row][col] = num;
        num++;
        row--;
        col++;
        if (row == -1) row = n - 1;
        if (col == n) col = 0;
        if (square[row][col] != 0) {
            row = (row + 1) % n;
            col--;
            if (col == -1) col = n - 1;
        }
    }
    return square;
}

// Private Function 4,Function to verify if the square is a magic square
bool magicsquare::verify_square(const vector<vector<int>>& square) {
    int n = square.size();
    int sum = n * (n * n + 1) / 2;
    for (int i = 0; i < n; i++) {
        int row_sum = 0;
        for (int j = 0; j < n; j++) {
            row_sum += square[i][j];
        }
        if (row_sum != sum) {
            return false;
        }
    }
    for (int j = 0; j < n; j++) {
        int col_sum = 0;
        for (int i = 0; i < n; i++) {
            col_sum += square[i][j];
        }
        if (col_sum != sum) {
            return false;
        }
    }
    int diag_sum1 = 0;
    int diag_sum2 = 0;
    for (int i = 0; i < n; i++) {
        diag_sum1 += square[i][i];
        diag_sum2 += square[i][n - i - 1];
    }
    if (diag_sum1 != sum || diag_sum2 != sum) {
        return false;
    }
    return true;
}

// Private Function 5,Function to print the magic square
void magicsquare::print_square(const vector<vector<int>>& square) {
    int n = square.size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << square[i][j] << " ";
        }
        cout << endl;
    }
}

//--------------------------------------------------------------------------------------------

//Function 1 Allocate_square
vector<vector<int>> Allocate_square(int n) {
    vector<vector<int>> square(n, vector<int>(n));
    return square;
}

//Function 2 Init_square
void Init_square(vector<vector<int>>& square) {
    int n = square.size();
    int i = n / 2;
    int j = n - 1;
    for (int num = 1; num <= n * n; ) {
        if (i == -1 && j == n) {
            j = n - 2;
            i = 0;
        }
        else {
            if (j == n) {
                j = 0;
            }
            if (i < 0) {
                i = n - 1;
            }
        }
        if (square[i][j]) {
            j -= 2;
            i++;
            continue;
        }
        else {
            square[i][j] = num++;
        }
        j++; i--;
    }
}

//Function 3 Generate_width
int Generate_width(int n) {
    n = 1 + (int)log10(n * n);
    return n;
}

//Main Function print_magic_square
void magicsquare::print_magic_square(int n)
{
    vector<vector<int>> square = Allocate_square(n);
    Init_square(square);
    int width = Generate_width(n);
    cout << "Magic Square for n = " << n << " sum = " << n * (pow(n, 2) + 1) / 2 << "\n";
    // After 11 only print sum
    if (n <= 11) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << right << setw(width) << square[i][j] << " ";
            }
            cout << endl;
        }
    }
}

