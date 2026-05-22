/** \file main.cpp
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

int printMenu();

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

    int choice;
    int row;
    int column;

    do
    {
        choice = printMenu();

        if (choice == 1)
        {
            printMatrix(mat, MAX_ROW);
        }
        else if (choice == 2)
        {
            fillWithRandomNum(mat, MAX_ROW);
            cout << "\nMatrix filled with random numbers.";
        }
        else if (choice == 3)
        {
            cout << "\nEnter row number: ";
            cin >> row;

            cout << "\nSum of row: "
                 << sumOfRow(mat, row, MAX_ROW);
        }
        else if (choice == 4)
        {
            cout << "\nEnter column number: ";
            cin >> column;

            cout << "\nSum of column: "
                 << sumOfCol(mat, column, MAX_ROW);
        }
        else if (choice == 5)
        {
            cout << "\nMaximum value: "
                 << findMax(mat, MAX_ROW);
        }
        else if (choice == 6)
        {
            cout << "\nMinimum value: "
                 << findMin(mat, MAX_ROW);
        }
        else if (choice == 7)
        {
            cout << "\nAverage value: "
                 << averageOfMatrix(mat, MAX_ROW);
        }
        else if (choice == 8)
        {
            cout << "\nIs identity matrix: "
                 << isIdentityMatrix(mat, MAX_ROW);
        }
        else if (choice == 9)
        {
            makeIdentityMatrix(mat, MAX_ROW);
            cout << "\nMatrix changed to identity matrix.";
        }
        else if (choice == 10)
        {
            cout << "\nSum of diagonal: "
                 << sumOfDiagonal(mat, MAX_ROW);
        }

    } while (choice != 11);

    cout << "\nHave a nice day :)\n";

    return 0;
}

/**
 * <code>printMenu</code> displays the menu and reads the user's choice.
 * <BR>
 * @return The menu choice entered by the user.
 */
int printMenu()
{
    int choice;

    do
    {
        cout << "\n\n===== MATRIX MENU =====";
        cout << "\n1) Print matrix";
        cout << "\n2) Fill matrix with random numbers";
        cout << "\n3) Sum of row";
        cout << "\n4) Sum of column";
        cout << "\n5) Find maximum value";
        cout << "\n6) Find minimum value";
        cout << "\n7) Find average value";
        cout << "\n8) Check identity matrix";
        cout << "\n9) Make identity matrix";
        cout << "\n10) Sum of diagonal";
        cout << "\n11) Exit";
        cout << "\nEnter choice: ";

        cin >> choice;

        if (choice < 1 || choice > 11)
        {
            cout << "\nWrong choice, try again.";
        }

    } while (choice < 1 || choice > 11);

    return choice;
}
