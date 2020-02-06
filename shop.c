#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//struct declaration
struct Item
{
    char Name[64];
    int Price;
    int Empty;
};
typedef struct Item Item;

int i=0;
int BuyID=0;

int FreeSlot=0;

//Int Main__________________________________________
int main(){

    //item declaration pull, short, casquette >Inventaire
    Item pull = {"pull", 25, 1};
    Item short = {"short", 15, 1};
    Item casquette = {"casquette", 10, 1};

    //item declaration Pantalon, bonnet, tongs >Inventaire
    Item Pantalon = {"Pantalon", 20, 1};
    Item bonnet = {"bonnet", 8, 1};
    Item tongs = {"tongs", 12, 1};

    Item Empty = {"Empty !", 0, 0};

    //INV array
    Item a_inv[5];
    a_inv[0]= pull;
    a_inv[1]= short;
    a_inv[2]= casquette;
    a_inv[3]= Empty;
    a_inv[4]= Empty;

    //MERCH array
    Item a_merch[5];
    a_merch[0]= Pantalon;
    a_merch[1]= bonnet;
    a_merch[2]= tongs;
    a_merch[3]= Empty;
    a_merch[4]= Empty;

    //_________________________________________________________________________//
    //AFFICHAGE INV
    for (i=0; i<5; i++)
    {
        if (a_inv[i].Empty = 1)
        {
            printf("=> Inv(%d) : %s \n", i+1, a_inv[i].Name);
        }
        else 
        {

            printf("Empty");
        }
    }

    printf("---\n");

    //AFFICHAGE MERCH
    for (i=0; i<5; i++)
    {
        if (a_merch[i].Empty = 1)
        {
            printf("=> Merch(%d) : %s (%d gold)\n", i+1, a_merch[i].Name, a_merch[i].Price);
        }
        else 
        {
            printf("Empty");
        }
    }
};