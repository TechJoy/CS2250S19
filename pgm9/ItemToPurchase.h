/*
 * =====================================================================================
 *
 *       Filename:  ItemToPurchase.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/20/2019 09:30:22 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Klifton Black (), kliftonblack@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  ITEMTOPURCHASE__INC__
#define  ITEMTOPURCHASE_INC__

struct ItemToPurchase {
    char itemName[50];
    char itemDescription[50];
    int itemPrice;
    int itemQuantity;
};

typedef struct ItemToPurchase ItemToPurchase;


void MakeItemBlank(ItemToPurchase* item);
void PrintItemCost(const ItemToPurchase* item);
ItemToPurchase GetItemFromConsole();
void PrintItemDescription(const ItemToPurchase* item);

#endif /* ----- #ifndef ITEMTOPURCHASE__INC__ ----- */

