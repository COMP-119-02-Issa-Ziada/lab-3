/** \file matrix.cpp
 *  \brief This file contains the implementation of the matrix library functions.
 *  \details The file implements functions used to manipulate matrices.
 *  \author Issa Ziada
 *  \version 0.1
 *  \date 20/5/2026
 *  \bug No known bugs.
 *  \copyright University of Nicosia.
 */

#include "matrix.h"
#include <iostream>
#include <cassert>

using namespace std;

/**
 * <code>printMatrix</code> shows the content of the matrix.
 * <BR>
 * @param mat The matrix to be displayed.
 * @param maxRow The number of rows in the matrix.
 */
void printMatrix(const double mat[][MAX_COL], const int maxRow)
{
    assert(maxRow > 0);

    cout << "\nMatrix (" << maxRow << " by " << MAX_COL << ")\n";

    for (int i = 0; i < maxRow; i++)
    {
        for (int j = 0; j < MAX_COL; j++)
        {
            cout << mat[i][j] << "\t";
        }

        cout << endl;
    }
}
