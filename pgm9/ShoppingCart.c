/*
 * =====================================================================================
 *
 *       Filename:  ShoppingCart.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/22/2019 08:34:05 PM
 *       Revision:  none
 *       Compiler:  gcc ShoppingCart.c -o ShoppingCart.c.out
 *-
 *         Author:  Klifton Black (), kliftonblack@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>
#include "ShoppingCart.h"
//#include "ItemToPurchase.h"
// Constants

// Function Prototypes


ShoppingCart AddItem(ItemToPurchase item, ShoppingCart cart){     
    //if(cart.cartSize < 10){
        cart.cartItems[cart.cartSize] = item;
        cart.cartSize++;
//        printf("cartSize = %d\n", cart.cartSize);
   // } else {
   //     printf("Cart is full.  Item not added\n");
   // }

    return cart;
}

ShoppingCart RemoveItem(char name[], ShoppingCart cart){
    int itemFoundIndex = -1;

    for(int i = 0; i < cart.cartSize; i++){
        if(strcmp(name, cart.cartItems[i].itemName) == 0){
             itemFoundIndex = i;
        }
    }
//:printf("ifi=%d\n", itemFoundIndex);
    if(itemFoundIndex >= 0){
        if(cart.cartSize == 1)
            cart.cartSize = 0;
        else if (cart.cartSize == (itemFoundIndex + 1))
            cart.cartSize--;
        else {
           for(int x = itemFoundIndex; x < cart.cartSize - 1; x++){
               cart.cartItems[x] = cart.cartItems[x+1];
      //         printf("x=%d," ,x);
           }
           cart.cartSize--;
        }
    } else {
        printf("Item not found in cart. Nothing removed.\n"); 
    }

    return cart;
}


ShoppingCart ModifyItem(ItemToPurchase item, ShoppingCart cart){
     
    int itemFound = 0;

    for(int i = 0; i < cart.cartSize; i++){
      
        if(strcmp(item.itemName, cart.cartItems[i].itemName) == 0){
             cart.cartItems[i].itemQuantity = item.itemQuantity;
             cart.cartItems[i].itemPrice = item.itemPrice;
             strcpy(cart.cartItems[i].itemDescription, item.itemDescription);
             itemFound = 1;
        }
    }

    if(itemFound == 0) {
        printf("Item not found in cart. Nothing modified.\n");
    }

    return cart;
}

int GetNumItemsInCart(ShoppingCart cart){
     int sum = 0;
        for(int i = 0; i < cart.cartSize;i++){
            sum = sum + cart.cartItems[i].itemQuantity;
        }
    return sum;
}

int GetCostOfCart(ShoppingCart cart){
    int sum = 0;
        for(int i = 0; i < cart.cartSize;i++){
            sum = sum + (cart.cartItems[i].itemPrice * cart.cartItems[i].itemQuantity);
        }
    return sum;
}
void PrintTotal(ShoppingCart cart){
       printf("%s's Shopping Cart - %s\n", 
            cart.customerName,
            cart.currentDate);
        printf("Number of Items: %d\n\n", GetNumItemsInCart(cart));
        
        
        if(cart.cartSize == 0){
             printf("SHOPPING CART IS EMPTY\n");
        } else {
            for(int i = 0; i < cart.cartSize;i++){
                PrintItemCost(&cart.cartItems[i]);
            }
        }
        printf("\nTotal: $%d\n", GetCostOfCart(cart));
    
   }
void PrintDescriptions(ShoppingCart cart){
     printf("%s's Shopping Cart - %s\n\n", 
            cart.customerName,
            cart.currentDate);
     printf("Item Descriptions\n");

     for(int i = 0; i < cart.cartSize;i++){
            PrintItemDescription(&cart.cartItems[i]);
        }
}
// Function Definitions


