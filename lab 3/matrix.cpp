/** \file Lab3.cpp
 *  \brief this file contains a small matrix program
 *  \details the program...
 *  \author    Issa Ziada
 *  \version   0.1
 *  \date      20/5/2026
 *  \bug       no bugs
 *  \copyright University of Nicosia.
 */

#include "matrix.h"
#include <iostream>
#include <cassert>
using namespace std;

/**
 @todo
 */
void printMatrix(const double mat[][MAX_COL], const int maxRow)
{
    assert (maxRow>0);
    
    cout<<"\nMatrix ("<<maxRow<<" by "<<MAX_COL<<")";
    
    for (int i = 0; i < maxRow; i++)
        {
            cout<<endl;
            for ( int j = 0; j < MAX_COL; j++)
            {
                cout << mat[i][j] << "\t";
            }
        }
}
