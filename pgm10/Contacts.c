/*!
 *    \file  Contacts.c
 *   \brief  
 *
 *  \author  Klifton Black (), kliftonblack@mail.weber.edu
 *
 *  \internal
 *       Created:  03/25/2019
 *      Revision:  none
 *      Compiler:  gcc
 *  Organization:  WSU
 *     Copyright:  Copyright (c) 2019, Klifton Black
 *
 *  This source code is released for free distribution under the terms of the
 *  GNU General Public License as published by the Free Software Foundation.
 */
#include <stdio.h>
#include "Contacts.h"

//

    ContactNode CreateContactNode(){

        struct ContactNode node;
        printf("Enter name:\n");
        scanf("%[^\n]s", &node.contactName);
        printf("Enter phone number:\n");
        scanf("%[^\n]", &node.contactPhoneNumber);

        return node;
    }

    void InsertContactAfter(ContactNode* node, ContactNode* insert){


    }
    ContactNode* GetNextContact(ContactNode* node){
        return node->nextNodePtr;

    }
    void PrintContactNode(const ContactNode* node){

        printf("Name: %s\n", node->contactName);
        printf("Phone number: &s\n", node->contactPhoneNumber);

    }
