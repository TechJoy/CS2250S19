/*!
 *    \file  read_bin.c
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

struct ThreeNums{
    int n1;
    int n2;
    int n3;
};

typedef struct ThreeNums ThreeNums;


/* Main Function */
int main(int argc, char* argv[])
{
     FILE *fptr;

    ThreeNums nums;
    if((fptr=fopen("program.bin", "rb")) == NULL){
        printf("Error! Opening file\n");
    }

    for(int n = 1; n < 5; n++){
        // to write binary data use;
        // fread(address_data, size_data,numbers_data, pointer_to_file)

        fread(&nums, sizeof(ThreeNums),1,fptr);
        printf("n1:%d\tn2:%d\tn3:%d\n", nums.n1, nums.n2, nums.n3);
    }

    fclose (fptr);

    return 0;
}
/* Function Defenitions */
/** ============================================================================
 *  @file   read_bin.c
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


