/** \file Lab3.cpp
 *  \brief This file contains the main program for a small matrix library.
 *  \details The program tests the matrix library functions.
 *  \author Issa Ziada
 *  \version 0.1
 *  \date 20/5/2026
 *  \bug No known bugs.
 *  \copyright University of Nicosia.
 */

#include <iostream>
#include "matrix.h"

using namespace std;

/**
 * <code>main</code> is the main function of this program.
 * <BR>
 * @return Returns 0 if success, any other value otherwise.
 */
int main()
{
    double mat[MAX_ROW][MAX_COL] = {
        {0, 1, 2, 3},
        {4, 5, 6, 7},
        {8, 9, 10, 11}
    };

    printMatrix(mat, MAX_ROW);
    
    cout << "\nSum of row 0: " << sumOfRow(mat, 0, MAX_ROW);
    cout << "\nSum of column 1: " << sumOfCol(mat, 1, MAX_ROW);

    fillWithRandomNum(mat, MAX_ROW);

    cout << "\n\nRandom matrix:\n";
    printMatrix(mat, MAX_ROW);
    cout << "\nHave a nice day :)\n";

    return 0;
}
