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
#include <cstdlib>

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

/**
 * <code>sumOfRow</code> calculates the sum of a specific row.
 * <BR>
 * @param mat The matrix.
 * @param row The row to be summed.
 * @param maxRow The number of rows in the matrix.
 * @return The sum of the selected row.
 */
double sumOfRow(const double mat[][MAX_COL], const int row, const int maxRow)
{
    assert(maxRow > 0);
    assert(row >= 0 && row < maxRow);

    double sum = 0;

    for (int column = 0; column < MAX_COL; column++)
    {
        sum += mat[row][column];
    }

    return sum;
}

/**
 * <code>sumOfCol</code> calculates the sum of a specific column.
 * <BR>
 * @param mat The matrix.
 * @param column The column to be summed.
 * @param maxRow The number of rows in the matrix.
 * @return The sum of the selected column.
 */
double sumOfCol(const double mat[][MAX_COL], const int column, const int maxRow)
{
    assert(maxRow > 0);
    assert(column >= 0 && column < MAX_COL);

    double sum = 0;

    for (int row = 0; row < maxRow; row++)
    {
        sum += mat[row][column];
    }

    return sum;
}

/**
 * <code>fillWithRandomNum</code> fills the matrix with random numbers.
 * <BR>
 * @param mat The matrix to be filled.
 * @param maxRow The number of rows in the matrix.
 */
void fillWithRandomNum(double mat[][MAX_COL], const int maxRow)
{
    assert(maxRow > 0);

    for (int row = 0; row < maxRow; row++)
    {
        for (int column = 0; column < MAX_COL; column++)
        {
            mat[row][column] = rand() % 100;
        }
    }
}

/**
 * <code>findMax</code> finds the largest value in the matrix.
 * <BR>
 * @param mat The matrix.
 * @param maxRow The number of rows in the matrix.
 * @return The largest value in the matrix.
 */
double findMax(const double mat[][MAX_COL], const int maxRow)
{
    assert(maxRow > 0);

    double maxValue = mat[0][0];

    for (int row = 0; row < maxRow; row++)
    {
        for (int column = 0; column < MAX_COL; column++)
        {
            if (mat[row][column] > maxValue)
            {
                maxValue = mat[row][column];
            }
        }
    }

    return maxValue;
}

/**
 * <code>findMin</code> finds the smallest value in the matrix.
 * <BR>
 * @param mat The matrix.
 * @param maxRow The number of rows in the matrix.
 * @return The smallest value in the matrix.
 */
double findMin(const double mat[][MAX_COL], const int maxRow)
{
    assert(maxRow > 0);

    double minValue = mat[0][0];

    for (int row = 0; row < maxRow; row++)
    {
        for (int column = 0; column < MAX_COL; column++)
        {
            if (mat[row][column] < minValue)
            {
                minValue = mat[row][column];
            }
        }
    }

    return minValue;
}

/**
 * <code>averageOfMatrix</code> calculates the average of all matrix values.
 * <BR>
 * @param mat The matrix.
 * @param maxRow The number of rows in the matrix.
 * @return The average value of the matrix.
 */
double averageOfMatrix(const double mat[][MAX_COL], const int maxRow)
{
    assert(maxRow > 0);

    double sum = 0;
    int totalElements = maxRow * MAX_COL;

    for (int row = 0; row < maxRow; row++)
    {
        for (int column = 0; column < MAX_COL; column++)
        {
            sum += mat[row][column];
        }
    }

    return sum / totalElements;
}

/**
 * <code>isIdentityMatrix</code> checks if the matrix is an identity matrix.
 * <BR>
 * @param mat The matrix.
 * @param maxRow The number of rows in the matrix.
 * @return True if the matrix is an identity matrix, false otherwise.
 */
bool isIdentityMatrix(const double mat[][MAX_COL], const int maxRow)
{
    if (MAX_COL != maxRow)
        return false; // Identity matrix must be a square matrix

    for (int i = 0; i < maxRow; ++i) {
        for (int j = 0; j < maxRow; ++j) {
            if (i == j && mat[i][j] != 1)
                return false;
            else if (i != j && mat[i][j] != 0)
                return false;
        }
    }
    return true;
}

/**
 * <code>makeIdentityMatrix</code> changes the matrix into an identity matrix.
 * <BR>
 * @param mat The matrix.
 * @param maxRow The number of rows in the matrix.
 * @return True if the matrix was changed successfully, false otherwise.
 */
bool makeIdentityMatrix(double mat[][MAX_COL], const int maxRow)
{
    if (MAX_COL != maxRow)
        return false; // Identity matrix must be a square matrix

    for (int i = 0; i < maxRow; ++i) {
        for (int j = 0; j < MAX_COL; ++j) {
            if (i == j)
                mat[i][j] = 1;
            else
                mat[i][j] = 0;
        }
    }
    return true;
}

/**
 * <code>sumOfDiagonal</code> calculates the sum of the diagonal values.
 * <BR>
 * @param mat The matrix.
 * @param maxRow The number of rows in the matrix.
 * @return The sum of the diagonal values.
 */
double sumOfDiagonal(const double mat[][MAX_COL], const int maxRow)
{
    double sum = 0;

    if (MAX_COL != maxRow)
        return 0; // Identity matrix must be a square matrix

    for (int i = 0; i < maxRow; ++i) {
        sum += mat[i][i];
    }

    return sum;
}
