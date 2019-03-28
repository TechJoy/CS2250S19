/*!
 *    \file  Contacts.h
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

#ifndef  CONTACTS__INC__
#define  CONTACTS_INC__

    struct ContactNode{
        char contactName[50];
        char contactPhoneNumber[50];
        struct ContactNode* nextNodePtr;
    };

    typedef struct ContactNode ContactNode;

    ContactNode CreateContactNode();
    void InsertContactAfter(ContactNode* node, ContactNode* insert);
    ContactNode* GetNextContact(ContactNode* node);
    void PrintContactNode(const ContactNode* node); 
#endif /* ----- #ifndef CONTACTS__INC__ ----- */


