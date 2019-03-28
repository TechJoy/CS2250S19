/*!
 *    \file  read_file.c
 *   \brief  
 *
 *  \author  Klifton Black (), kliftonblack@mail.weber.edu
 *
 *  \internal
 *       Created:  03/28/2019
 *      Revision:  none
 *      Compiler:  gcc
 *  Organization:  WSU
 *     Copyright:  Copyright (c) 2019, Klifton Black
 *
 *  This source code is released for free distribution under the terms of the
 *  GNU General Public License as published by the Free Software Foundation.
 */
#include <stdio.h>
#include <stdlib.h>
/* Function Prototypes */

/* Main Function */
int main(int argc, char* argv[])
{
    FILE *fptr;
    int num;
//1) open file: ptr = fopen("filetoopen", "mode");
    
    if ((fptr = fopen("program.txt", "r")) == NULL){
        printf("Error! Could not open file for writing\n");
        exit(1);
    }
//2) read from file
    fscanf(fptr, "%d", &num);

    printf("Read %d from input file", num);
//3) close file: fclose(ptr)

    fclose(fptr);


    return 0;
}
/* Function Defenitions */
/** ============================================================================
 *  @file   read_file.c
 *  @brief  Description
 *
 *  @author Full Name
 *
 *  @internal
 *       Created  28.Mar.2019
 *      Revision  none
 *      Compiler  gcc
 *  Organization  Organization
 *     Copyright  Copyright (c) 2019, Full Name
 *
 *  This source code is released for free distribution under the terms of the
 *  GNU General Public License as published by the Free Software Foundation.
 * =============================================================================
 */


