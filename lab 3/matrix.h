/** \file matrix.h
 *  \brief This file contains the constants and function prototypes for the matrix library.
 *  \details The file declares the matrix library functions used by the main program.
 *  \author Issa Ziada
 *  \version 0.1
 *  \date 20/5/2026
 *  \bug No known bugs.
 *  \copyright University of Nicosia.
 */

#ifndef MATRIX_H
#define MATRIX_H

// Library constants
const int MAX_ROW = 3;
const int MAX_COL = 4;

// Function prototypes
void printMatrix(const double mat[][MAX_COL], const int maxRow);

#endif // MATRIX_H
