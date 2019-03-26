/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/20/2019 09:54:09 PM
 *       Revision:  none
 *       Compiler:  gcc main.c -o main.c.out
 *
 *         Author:  Klifton Black (), kliftonblack@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include "ItemToPurchase.h"
#include "ShoppingCart.h"

// Constants

// Function Prototypes

char GetMenuInput();
void GetSetupInput(ShoppingCart* cart);
ShoppingCart GetNameOfItemToRemove(ShoppingCart cart);
ShoppingCart ChangeItemQuantity(ShoppingCart cart);
// Main Function 
int main(int argc, char* argv[])
{

    ShoppingCart sc;

    sc.cartSize = 0;
    GetSetupInput(&sc);
    char menuChoice = ' ';

    while(menuChoice != 'q'){
        menuChoice = GetMenuInput();

        switch (menuChoice) {
            case 'a':
                printf("ADD ITEM TO CART\n");
                sc = AddItem(GetItemFromConsole(), sc);
               // printf(",%d", sc.cartSize);
                break;
            case 'r':
                printf("REMOVE ITEM FROM CART\n");
                sc = GetNameOfItemToRemove(sc);
                break;
            case 'c':
                printf("CHANGE ITEM QUANTITY\n");
                sc = ChangeItemQuantity(sc);
                break;
            case 'i':
                printf("OUTPUT ITEMS' DESCRIPTIONS\n");
                PrintDescriptions(sc);
                break;
            case 'o':
                printf("OUTPUT SHOPPING CART\n");
                PrintTotal(sc);
                break;
        }
    }

    return 0;
}
// Function Definitionsm
ShoppingCart ChangeItemQuantity(ShoppingCart cart){
    ItemToPurchase itp;
    printf("Enter the item name:\n");
    scanf(" %[^\n]s", itp.itemName);
    printf("Enter the new quantity:\n");
    scanf("%d", &itp.itemQuantity);

    return ModifyItem(itp, cart);

}


ShoppingCart GetNameOfItemToRemove(ShoppingCart cart){
    char name[50];
    printf("Enter name of item to remove:\n");
    scanf(" %[^\n]s", name);

    return RemoveItem(name, cart);

}

void GetSetupInput(ShoppingCart* cart){

    printf("Enter Customer's Name:\n");
    scanf(" %[^\n]s", cart->customerName);
    printf("Enter Today's Date:\n");
    scanf(" %[^\n]s", cart->currentDate);

    printf("\nCustomer Name: %s\n", cart->customerName);
    printf("Today's Date: %s\n", cart->currentDate);
}


char GetMenuInput(){

    char input;
    printf("\nMENU\n");
    printf("a - Add item to cart\n");
    printf("r - Remove item from cart\n");
    printf("c - Change item quantity\n");
    printf("i - Output items' descriptions\n");
    printf("o - Output shopping cart\n");
    printf("q - Quit\n\n");

    do{
    printf("Choose an option:\n");
    scanf(" %c", &input);
    }while(!(input == 'a' ||
            input == 'r' ||
            input == 'c' ||
            input == 'i' ||
            input == 'o' ||
            input == 'q'));
        


    return input;
}

