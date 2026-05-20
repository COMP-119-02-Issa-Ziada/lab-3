/** \file Lab3.cpp
 *  \brief this file contains a small matrix program
 *  \details the program...
 *  \author    Issa Ziada
 *  \version   0.1
 *  \date      20/5/2026
 *  \bug       no bugs
 *  \copyright University of Nicosia.
 */

#include <iostream>
#include "matrix.h"
using namespace std;

/**
 * Function<code>main</code> is the main function of this program.
 * <BR>
 * @return Returns 0 if success, any other value otherwise.
 */

int main()
{
    const int MAX_ROW=3;
    double mat[MAX_ROW][MAX_COL] = {0,1,2,3,4,5,6,7,8,9,10};
    
    printMatrix(mat, MAX_ROW);
    
    cout<<"\nHave a nice day:)\n";
    
}
