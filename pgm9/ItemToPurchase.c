/*
 * =====================================================================================
 *
 *       Filename:  ItemToPurchase.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/20/2019 09:42:47 PM
 *       Revision:  none
 *       Compiler:  gcc ItemToPurchase.c -o ItemToPurchase.c.out
 *
 *         Author:  Klifton Black (), kliftonblack@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>
#include "ItemToPurchase.h"
// Constants

// Function Prototypes


void MakeItemBlank(ItemToPurchase* item){

    item->itemPrice = 0;
    item->itemQuantity = 0;
    strcpy(item->itemName, "none");
    strcpy(item->itemDescription, "none");
}

void PrintItemCost(const ItemToPurchase* item){

    printf("%s %d @ $%d = $%d\n",
            item->itemName,
            item->itemQuantity,
            item->itemPrice,
            item->itemQuantity * item->itemPrice);
}

void PrintItemDescription(const ItemToPurchase* item){

    printf("%s: %s\n", item->itemName, item->itemDescription);

}
// Function Definitions
ItemToPurchase GetItemFromConsole(){
    ItemToPurchase itp;

    printf("Enter the item name:\n");
    scanf(" %[^\n]s", itp.itemName);
    printf("Enter the item description:\n");
    scanf(" %[^\n]s", itp.itemDescription);
    printf("Enter the item price:\n");
    scanf("%d", &itp.itemPrice);
    printf("Enter the item quantity:\n");
    scanf("%d", &itp.itemQuantity);

    return itp;

}



