
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int Dish1=0;
int Dish2=0;
int Dish3=0;
int Dish4=0;
int Dish5=0;
int Dish6=0;
int Dish7=0;
int Dish8=0;
int Dish9=0;
int Dish10=0;
int Dish11=0;
int Dish12=0;
int Dish13=0;
int Dish14=0;
int Dish15=0;
int Dish16=0;
int Dish17=0;
int Dish18=0;
int Dish19=0;
int Dish20=0;


int main() {
    start:;
    int Dish1=0;
    int Dish2=0;
    int Dish3=0;
    int Dish4=0;
    int Dish5=0;
    int Dish6=0;
    int Dish7=0;
    int Dish8=0;
    int Dish9=0;
    int Dish10=0;
    int Dish11=0;
    int Dish12=0;
    int Dish13=0;
    int Dish14=0;
    int Dish15=0;
    int Dish16=0;
    int Dish17=0;
    int Dish18=0;
    int Dish19=0;
    int Dish20=0;
    int Dish21=0;
    int Dish22=0;
    int Dish23=0;
    int Dish24=0;

    int Quantity1=0;
    int Quantity2=0;
    int Quantity3=0;
    int Quantity4=0;
    int Quantity5=0;
    int Quantity6=0;
    int Quantity7=0;
    int Quantity8=0;
    int Quantity9=0;
    int Quantity10=0;
    int Quantity11=0;
    int Quantity12=0;
    int Quantity13=0;
    int Quantity14=0;
    int Quantity15=0;
    int Quantity16=0;
    int Quantity17=0;
    int Quantity18=0;
    int Quantity19=0;
    int Quantity20=0;
    int Quantity21=0;
    int Quantity22=0;
    int Quantity23=0;
    int Quantity24=0;
    
    int Cost1 =499; //Japanese Ramen
    int Cost2 =399; //Japanese Takoyaki
    int Cost3 =199; //Japanese Onigiri
    int Cost4 =299; //Japanese Dango
    int Cost5 =299; //Indian Butter Chicken
    int Cost6 =199; //Indian Kadhai Paneer
    int Cost7 =99; //Indian Masala Dosa
    int Cost8 =29; //Indian Naan
    int Cost9 =899; //Italian Pizza
    int Cost10=199; //Italian Pasta
    int Cost11=499; //Italian Lasagne
    int Cost12=799; //Italian Risotto
    int Cost13=129; //French Onion Soup
    int Cost14=199; //French Apple Pie
    int Cost15=349; //French Steak
    int Cost16=469; //French Crepe
    int Cost17=999; //Chinese Hot Pot
    int Cost18=199; //Chinese Dimsum
    int Cost19=149; //Chinese Dumplings
    int Cost20=129; //Chinese Chow Mein
    int Cost21=20; //Beverage Mineral Water
    int Cost22=60; //Beverage Coca Cola
    int Cost23=40; //Beverage Maaza
    int Cost24=50; //Beverage Sprite

    int Amount1=0;
    int Amount2=0;
    int Amount3=0;
    int Amount4=0;
    int Amount5=0;
    int Amount6=0;
    int Amount7=0;
    int Amount8=0;
    int Amount9=0;
    int Amount10=0;
    int Amount11=0;
    int Amount12=0;
    int Amount13=0;
    int Amount14=0;
    int Amount15=0;
    int Amount16=0;
    int Amount17=0;
    int Amount18=0;
    int Amount19=0;
    int Amount20=0;
    int Amount21=0;
    int Amount22=0;
    int Amount23=0;
    int Amount24=0;

    printf("|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n");
    printf("|~~~~~~| Welcome to Oishii Restaurant. |~~~~~~|\n");
    printf("|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n");
    printf("|Kanishk Kumar | CSE Core A2 | RA2111003010764|\n");
    printf("|   SRM INSTITUTE OF SCIENCE AND TECHNOLOGY   |\n");
    printf("|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n");
    reorder:
    if(Dish20!=0){printf("\n\n\n\nYou have reached the maximum number of items on this order. Please create a new order to get more items.");goto billing;}
    else{
    printf("\n\n\n\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\nPlease select your Cuisine Type by entering the\ncorresponding number.\nYou will be able to select one dish at a time.\nYou can order at most 20 items per order.\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n1.Japanese\n2.Indian\n3.Italian\n4.French\n5.Chinese\n6.Beverages\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\nPlease Enter a Number: ");
    int cuisinetype;
    scanf("%d",&cuisinetype);
        if (cuisinetype==1)
            {
                printf("You have selected Japanese Cuisine.\n\nJapanese Dishes\n~~~~~~~~~~~~~~~\n1.Ramen           Rs 499\n2.Takoyaki        Rs 399\n3.Onigiri         Rs 199\n4.Dango           Rs 299");
                    if (Dish1==0)
                    {   order1:
                        /*printf("\n\n");
                        printf("|=======================================================|\n");
                        printf("|                       DEBUG CODE                      |\n");
                        printf("|=======================================================|\n");
                        printf("|Dish01 Dish02 Dish03 Dish04 Dish05 Dish06 Dish07 Dish08|\n");
                        printf("|   %d      %d      %d      %d      %d      %d      %d      %d  |\n",Dish1,Dish2,Dish3,Dish4,Dish5,Dish6,Dish7,Dish8);
                        printf("|Dish09 Dish10 Dish11 Dish12 Dish13 Dish14 Dish15 Dish16|\n");
                        printf("|   %d      %d      %d      %d      %d      %d      %d      %d  |\n",Dish9,Dish10,Dish11,Dish12,Dish13,Dish14,Dish15,Dish16);
                        printf("|Dish17 Dish18 Dish19 Dish20 Dish21 Dish22 Dish23 Dish24|\n");
                        printf("|   %d      %d      %d      %d      %d      %d      %d      %d  |\n",Dish17,Dish18,Dish19,Dish20,Dish21,Dish22,Dish23,Dish24);
                        printf("|=======================================================|\n");
                        printf("\n\n");    */
                        printf("\nPlease select a Dish by entering the corresponding number: ");
                        scanf("%d", &Dish1);
                        printf("\nPlease enter the number of servings: ");
                        scanf("%d", &Quantity1);
                        printf ("\nYou have ordered %d servings of Dish %d.", Quantity1, Dish1);
                            if      (Dish1==1){Amount1=Cost1*Quantity1; printf("\nRamen           * %d servings = Rs 499 * %d = Rs %d", Quantity1, Quantity1, Amount1);}
                            else if (Dish1==2){Amount1=Cost2*Quantity1; printf("\nTakoyaki        * %d servings = Rs 399 * %d = Rs %d", Quantity1, Quantity1, Amount1);}
                            else if (Dish1==3){Amount1=Cost3*Quantity1; printf("\nOnigiri         * %d servings = Rs 199 * %d = Rs %d", Quantity1, Quantity1, Amount1);}
                            else if (Dish1==4){Amount1=Cost4*Quantity1; printf("\nDango           * %d servings = Rs 299 * %d = Rs %d", Quantity1, Quantity1, Amount1);}
                            printf ("\nDo you want to order more items?(Y/N): ");
                            char moreitems;
                            scanf ("%s", &moreitems);
                            {if(moreitems=='Y'||moreitems=='y')
                                {printf("\nSELECTED YES."); goto reorder;}
                            else if(moreitems=='N'||moreitems=='n')
                                {printf("\nSELECTED NO."); goto billing;}
                            else {printf("INVALID INPUT!");}}
                            
                    }
                    
                    else if (Dish2==0)
                    {   order2:
                        /*printf("\n\n");
                        printf("|=======================================================|\n");
                        printf("|                       DEBUG CODE                      |\n");
                        printf("|=======================================================|\n");
                        printf("|Dish01 Dish02 Dish03 Dish04 Dish05 Dish06 Dish07 Dish08|\n");
                        printf("|   %d      %d      %d      %d      %d      %d      %d      %d  |\n",Dish1,Dish2,Dish3,Dish4,Dish5,Dish6,Dish7,Dish8);
                        printf("|Dish09 Dish10 Dish11 Dish12 Dish13 Dish14 Dish15 Dish16|\n");
                        printf("|   %d      %d      %d      %d      %d      %d      %d      %d  |\n",Dish9,Dish10,Dish11,Dish12,Dish13,Dish14,Dish15,Dish16);
                        printf("|Dish17 Dish18 Dish19 Dish20 Dish21 Dish22 Dish23 Dish24|\n");
                        printf("|   %d      %d      %d      %d      %d      %d      %d      %d  |\n",Dish17,Dish18,Dish19,Dish20,Dish21,Dish22,Dish23,Dish24);
                        printf("|=======================================================|\n");
                        printf("\n\n");    */
                        printf("\nPlease select a Dish by entering the corresponding number: ");
                        scanf("%d", &Dish2);
                        printf("\nPlease enter the number of servings: ");
                        scanf("%d", &Quantity2);
                        printf ("\nYou have ordered %d servings of Dish number %d.", Quantity2, Dish2);
                            if      (Dish2==1){Amount2=Cost1*Quantity2; printf("\nRamen           * %d servings = Rs 499 * %d = Rs %d", Quantity2, Quantity2, Amount2);}
                            else if (Dish2==2){Amount2=Cost2*Quantity2; printf("\nTakoyaki        * %d servings = Rs 399 * %d = Rs %d", Quantity2, Quantity2, Amount2);}
                            else if (Dish2==3){Amount2=Cost3*Quantity2; printf("\nOnigiri         * %d servings = Rs 199 * %d = Rs %d", Quantity2, Quantity2, Amount2);}
                            else if (Dish2==4){Amount2=Cost4*Quantity2; printf("\nDango           * %d servings = Rs 299 * %d = Rs %d", Quantity2, Quantity2, Amount2);}
                            printf ("\nDo you want to order more items?(Y/N): ");
                            char moreitems;
                            scanf ("%s", &moreitems);
                            {if(moreitems=='Y'||moreitems=='y')
                                {printf("\nSELECTED YES."); goto reorder;}
                            else if(moreitems=='N'||moreitems=='n')
                                {printf("\nSELECTED NO."); goto billing;}
                            else {printf("INVALID INPUT!");}}
                    }
                    else if (Dish3==0)
                    {   order3:
                        /*printf("\n\n");
                        printf("|=======================================================|\n");
                        printf("|                       DEBUG CODE                      |\n");
                        printf("|=======================================================|\n");
                        printf("|Dish01 Dish02 Dish03 Dish04 Dish05 Dish06 Dish07 Dish08|\n");
                        printf("|   %d      %d      %d      %d      %d      %d      %d      %d  |\n",Dish1,Dish2,Dish3,Dish4,Dish5,Dish6,Dish7,Dish8);
                        printf("|Dish09 Dish10 Dish11 Dish12 Dish13 Dish14 Dish15 Dish16|\n");
                        printf("|   %d      %d      %d      %d      %d      %d      %d      %d  |\n",Dish9,Dish10,Dish11,Dish12,Dish13,Dish14,Dish15,Dish16);
                        printf("|Dish17 Dish18 Dish19 Dish20 Dish21 Dish22 Dish23 Dish24|\n");
                        printf("|   %d      %d      %d      %d      %d      %d      %d      %d  |\n",Dish17,Dish18,Dish19,Dish20,Dish21,Dish22,Dish23,Dish24);
                        printf("|=======================================================|\n");
                        printf("\n\n");    */
                        printf("\nPlease select a Dish by entering the corresponding number: ");
                        scanf("%d", &Dish3);
                        printf("\nPlease enter the number of servings: ");
                        scanf("%d", &Quantity3);
                        printf ("\nYou have ordered %d servings of Dish number %d.", Quantity3, Dish3);
                            if      (Dish3==1){Amount3=Cost1*Quantity3; printf("\nRamen           * %d servings = Rs 499 * %d = Rs %d", Quantity3, Quantity3, Amount3);}
                            else if (Dish3==2){Amount3=Cost2*Quantity3; printf("\nTakoyaki        * %d servings = Rs 399 * %d = Rs %d", Quantity3, Quantity3, Amount3);}
                            else if (Dish3==3){Amount3=Cost3*Quantity3; printf("\nOnigiri         * %d servings = Rs 199 * %d = Rs %d", Quantity3, Quantity3, Amount3);}
                            else if (Dish3==4){Amount3=Cost4*Quantity3; printf("\nDango           * %d servings = Rs 299 * %d = Rs %d", Quantity3, Quantity3, Amount3);}
                            printf ("\nDo you want to order more items?(Y/N): ");
                            char moreitems;
                            scanf ("%s", &moreitems);
                            {if(moreitems=='Y'||moreitems=='y')
                                {printf("\nSELECTED YES."); goto reorder;}
                            else if(moreitems=='N'||moreitems=='n')
                                {printf("\nSELECTED NO."); goto billing;}
                            else {printf("INVALID INPUT!");}}
                    }
                    else if (Dish4==0)
                    {   order4:
                        /*printf("\n\n");
                        printf("|=======================================================|\n");
                        printf("|                       DEBUG CODE                      |\n");
                        printf("|=======================================================|\n");
                        printf("|Dish01 Dish02 Dish03 Dish04 Dish05 Dish06 Dish07 Dish08|\n");
                        printf("|   %d      %d      %d      %d      %d      %d      %d      %d  |\n",Dish1,Dish2,Dish3,Dish4,Dish5,Dish6,Dish7,Dish8);
                        printf("|Dish09 Dish10 Dish11 Dish12 Dish13 Dish14 Dish15 Dish16|\n");
                        printf("|   %d      %d      %d      %d      %d      %d      %d      %d  |\n",Dish9,Dish10,Dish11,Dish12,Dish13,Dish14,Dish15,Dish16);
                        printf("|Dish17 Dish18 Dish19 Dish20 Dish21 Dish22 Dish23 Dish24|\n");
                        printf("|   %d      %d      %d      %d      %d      %d      %d      %d  |\n",Dish17,Dish18,Dish19,Dish20,Dish21,Dish22,Dish23,Dish24);
                        printf("|=======================================================|\n");
                        printf("\n\n");    */
                        printf("\nPlease select a Dish by entering the corresponding number: ");
                        scanf("%d", &Dish4);
                        printf("\nPlease enter the number of servings: ");
                        scanf("%d", &Quantity4);
                        printf ("\nYou have ordered %d servings of Dish number %d.", Quantity4, Dish4);
                            if      (Dish4==1){Amount4=Cost1*Quantity4; printf("\nRamen           * %d servings = Rs 499 * %d = Rs %d", Quantity4, Quantity4, Amount4);}
                            else if (Dish4==2){Amount4=Cost2*Quantity4; printf("\nTakoyaki        * %d servings = Rs 399 * %d = Rs %d", Quantity4, Quantity4, Amount4);}
                            else if (Dish4==3){Amount4=Cost3*Quantity4; printf("\nOnigiri         * %d servings = Rs 199 * %d = Rs %d", Quantity4, Quantity4, Amount4);}
                            else if (Dish4==4){Amount4=Cost4*Quantity4; printf("\nDango           * %d servings = Rs 299 * %d = Rs %d", Quantity4, Quantity4, Amount4);}
                            printf ("\nDo you want to order more items?(Y/N): ");
                            char moreitems;
                            scanf ("%s", &moreitems);
                            {if(moreitems=='Y'||moreitems=='y')
                                {printf("\nSELECTED YES."); goto reorder;}
                            else if(moreitems=='N'||moreitems=='n')
                                {printf("\nSELECTED NO."); goto billing;}
                            else {printf("INVALID INPUT!");}}
                    }
                    else {printf("CODE BROKE!");}
            }
        else if (cuisinetype==2)
            {
                printf("You have selected Indian Cuisine.\n\nIndian Dishes\n~~~~~~~~~~~~~~~\n1.Butter Chicken  Rs 299\n2.Kadhai Paneer   Rs 199\n3.Masala Dosa     Rs 99\n4.Naan            Rs 29");
                    if (Dish5==0)
                    {   order5:
                        /*printf("\n\n");
                        printf("|=======================================================|\n");
                        printf("|                       DEBUG CODE                      |\n");
                        printf("|=======================================================|\n");
                        printf("|Dish01 Dish02 Dish03 Dish04 Dish05 Dish06 Dish07 Dish08|\n");
                        printf("|   %d      %d      %d      %d      %d      %d      %d      %d  |\n",Dish1,Dish2,Dish3,Dish4,Dish5,Dish6,Dish7,Dish8);
                        printf("|Dish09 Dish10 Dish11 Dish12 Dish13 Dish14 Dish15 Dish16|\n");
                        printf("|   %d      %d      %d      %d      %d      %d      %d      %d  |\n",Dish9,Dish10,Dish11,Dish12,Dish13,Dish14,Dish15,Dish16);
                        printf("|Dish17 Dish18 Dish19 Dish20 Dish21 Dish22 Dish23 Dish24|\n");
                        printf("|   %d      %d      %d      %d      %d      %d      %d      %d  |\n",Dish17,Dish18,Dish19,Dish20,Dish21,Dish22,Dish23,Dish24);
                        printf("|=======================================================|\n");
                        printf("\n\n");    */
                        printf("\nPlease select a Dish by entering the corresponding number: ");
                        scanf("%d", &Dish5);
                        printf("\nPlease enter the number of servings: ");
                        scanf("%d", &Quantity5);
                        printf ("\nYou have ordered %d servings of Dish %d.", Quantity5, Dish5);
                            if      (Dish5==1){Amount5=Cost5*Quantity5; printf("\nButter Chicken  * %d servings = Rs 299 * %d = Rs %d", Quantity5, Quantity5, Amount5);}
                            else if (Dish5==2){Amount5=Cost6*Quantity5; printf("\nKadhai Paneer   * %d servings = Rs 199 * %d = Rs %d", Quantity5, Quantity5, Amount5);}
                            else if (Dish5==3){Amount5=Cost7*Quantity5; printf("\nMasala Dosa     * %d servings = Rs 099 * %d = Rs %d", Quantity5, Quantity5, Amount5);}
                            else if (Dish5==4){Amount5=Cost8*Quantity5; printf("\nNaan            * %d servings = Rs 029 * %d = Rs %d", Quantity5, Quantity5, Amount5);}
                            printf ("\nDo you want to order more items?(Y/N): ");
                            char moreitems;
                            scanf ("%s", &moreitems);
                            {if(moreitems=='Y'||moreitems=='y')
                                {printf("\nSELECTED YES."); goto reorder;}
                            else if(moreitems=='N'||moreitems=='n')
                                {printf("\nSELECTED NO."); goto billing;}
                            else {printf("INVALID INPUT!");}}
                            
                    }
                    
                    else if (Dish6==0)
                    {   order6:
                        printf("\n\n");
                        /*printf("|=======================================================|\n");
                        printf("|                       DEBUG CODE                      |\n");
                        printf("|=======================================================|\n");
                        printf("|Dish01 Dish02 Dish03 Dish04 Dish05 Dish06 Dish07 Dish08|\n");
                        printf("|   %d      %d      %d      %d      %d      %d      %d      %d  |\n",Dish1,Dish2,Dish3,Dish4,Dish5,Dish6,Dish7,Dish8);
                        printf("|Dish09 Dish10 Dish11 Dish12 Dish13 Dish14 Dish15 Dish16|\n");
                        printf("|   %d      %d      %d      %d      %d      %d      %d      %d  |\n",Dish9,Dish10,Dish11,Dish12,Dish13,Dish14,Dish15,Dish16);
                        printf("|Dish17 Dish18 Dish19 Dish20 Dish21 Dish22 Dish23 Dish24|\n");
                        printf("|   %d      %d      %d      %d      %d      %d      %d      %d  |\n",Dish17,Dish18,Dish19,Dish20,Dish21,Dish22,Dish23,Dish24);
                        printf("|=======================================================|\n");
                        printf("\n\n");    */
                        printf("\nPlease select a Dish by entering the corresponding number: ");
                        scanf("%d", &Dish6);
                        printf("\nPlease enter the number of servings: ");
                        scanf("%d", &Quantity6);
                        printf ("\nYou have ordered %d servings of Dish number %d.", Quantity6, Dish6);
                            if      (Dish6==1){Amount6=Cost5*Quantity6; printf("\nButter Chicken  * %d servings = Rs 299 * %d = Rs %d", Quantity6, Quantity6, Amount6);}
                            else if (Dish6==2){Amount6=Cost6*Quantity6; printf("\nKadhai Paneer   * %d servings = Rs 199 * %d = Rs %d", Quantity6, Quantity6, Amount6);}
                            else if (Dish6==3){Amount6=Cost7*Quantity6; printf("\nMasala Dosa     * %d servings = Rs 099 * %d = Rs %d", Quantity6, Quantity6, Amount6);}
                            else if (Dish6==4){Amount6=Cost8*Quantity6; printf("\nNaan            * %d servings = Rs 029 * %d = Rs %d", Quantity6, Quantity6, Amount6);}
                            printf ("\nDo you want to order more items?(Y/N): ");
                            char moreitems;
                            scanf ("%s", &moreitems);
                            {if(moreitems=='Y'||moreitems=='y')
                                {printf("\nSELECTED YES."); goto reorder;}
                            else if(moreitems=='N'||moreitems=='n')
                                {printf("\nSELECTED NO."); goto billing;}
                            else {printf("INVALID INPUT!");}}
                    }
                    else if (Dish7==0)
                    {   order7:
                        /*printf("\n\n");
                        printf("|=======================================================|\n");
                        printf("|                       DEBUG CODE                      |\n");
                        printf("|=======================================================|\n");
                        printf("|Dish01 Dish02 Dish03 Dish04 Dish05 Dish06 Dish07 Dish08|\n");
                        printf("|   %d      %d      %d      %d      %d      %d      %d      %d  |\n",Dish1,Dish2,Dish3,Dish4,Dish5,Dish6,Dish7,Dish8);
                        printf("|Dish09 Dish10 Dish11 Dish12 Dish13 Dish14 Dish15 Dish16|\n");
                        printf("|   %d      %d      %d      %d      %d      %d      %d      %d  |\n",Dish9,Dish10,Dish11,Dish12,Dish13,Dish14,Dish15,Dish16);
                        printf("|Dish17 Dish18 Dish19 Dish20 Dish21 Dish22 Dish23 Dish24|\n");
                        printf("|   %d      %d      %d      %d      %d      %d      %d      %d  |\n",Dish17,Dish18,Dish19,Dish20,Dish21,Dish22,Dish23,Dish24);
                        printf("|=======================================================|\n");
                        printf("\n\n");    */
                        printf("\nPlease select a Dish by entering the corresponding number: ");
                        scanf("%d", &Dish7);
                        printf("\nPlease enter the number of servings: ");
                        scanf("%d", &Quantity7);
                        printf ("\nYou have ordered %d servings of Dish number %d.", Quantity7, Dish7);
                            if      (Dish7==1){Amount7=Cost5*Quantity7; printf("\nButter Chicken  * %d servings = Rs 299 * %d = Rs %d", Quantity7, Quantity7, Amount7);}
                            else if (Dish7==2){Amount7=Cost6*Quantity7; printf("\nKadhai Paneer   * %d servings = Rs 199 * %d = Rs %d", Quantity7, Quantity7, Amount7);}
                            else if (Dish7==3){Amount7=Cost7*Quantity7; printf("\nMasala Dosa     * %d servings = Rs 099 * %d = Rs %d", Quantity7, Quantity7, Amount7);}
                            else if (Dish7==4){Amount7=Cost8*Quantity7; printf("\nNaan            * %d servings = Rs 029 * %d = Rs %d", Quantity7, Quantity7, Amount7);}
                            printf ("\nDo you want to order more items?(Y/N): ");
                            char moreitems;
                            scanf ("%s", &moreitems);
                            {if(moreitems=='Y'||moreitems=='y')
                                {printf("\nSELECTED YES."); goto reorder;}
                            else if(moreitems=='N'||moreitems=='n')
                                {printf("\nSELECTED NO."); goto billing;}
                            else {printf("INVALID INPUT!");}}
                    }
                    else if (Dish8==0)
                    {   order8:
                        printf("\n\n");
                        /*printf("|=======================================================|\n");
                        printf("|                       DEBUG CODE                      |\n");
                        printf("|=======================================================|\n");
                        printf("|Dish01 Dish02 Dish03 Dish04 Dish05 Dish06 Dish07 Dish08|\n");
                        printf("|   %d      %d      %d      %d      %d      %d      %d      %d  |\n",Dish1,Dish2,Dish3,Dish4,Dish5,Dish6,Dish7,Dish8);
                        printf("|Dish09 Dish10 Dish11 Dish12 Dish13 Dish14 Dish15 Dish16|\n");
                        printf("|   %d      %d      %d      %d      %d      %d      %d      %d  |\n",Dish9,Dish10,Dish11,Dish12,Dish13,Dish14,Dish15,Dish16);
                        printf("|Dish17 Dish18 Dish19 Dish20 Dish21 Dish22 Dish23 Dish24|\n");
                        printf("|   %d      %d      %d      %d      %d      %d      %d      %d  |\n",Dish17,Dish18,Dish19,Dish20,Dish21,Dish22,Dish23,Dish24);
                        printf("|=======================================================|\n");
                        printf("\n\n");    */
                        printf("\nPlease select a Dish by entering the corresponding number: ");
                        scanf("%d", &Dish8);
                        printf("\nPlease enter the number of servings: ");
                        scanf("%d", &Quantity8);
                        printf ("\nYou have ordered %d servings of Dish number %d.", Quantity8, Dish8);
                            if      (Dish8==1){Amount8=Cost5*Quantity8; printf("\nButter Chicken  * %d servings = Rs 299 * %d = Rs %d", Quantity8, Quantity8, Amount8);}
                            else if (Dish8==2){Amount8=Cost6*Quantity8; printf("\nKadhai Paneer   * %d servings = Rs 199 * %d = Rs %d", Quantity8, Quantity8, Amount8);}
                            else if (Dish8==3){Amount8=Cost7*Quantity8; printf("\nMasala Dosa     * %d servings = Rs 099 * %d = Rs %d", Quantity8, Quantity8, Amount8);}
                            else if (Dish8==4){Amount8=Cost8*Quantity8; printf("\nNaan            * %d servings = Rs 029 * %d = Rs %d", Quantity8, Quantity8, Amount8);}
                            printf ("\nDo you want to order more items?(Y/N): ");
                            char moreitems;
                            scanf ("%s", &moreitems);
                            {if(moreitems=='Y'||moreitems=='y')
                                {printf("\nSELECTED YES."); goto reorder;}
                            else if(moreitems=='N'||moreitems=='n')
                                {printf("\nSELECTED NO."); goto billing;}
                            else {printf("INVALID INPUT!");}}
                    }
                    else {printf("CODE BROKE!");}
            }
        else if (cuisinetype==3)
            {
                printf("You have selected Italian Cuisine.\n\nItalian Dishes\n~~~~~~~~~~~~~~~\n1.Pizza           Rs 899\n2.Pasta           Rs 199\n3.Lasagne         Rs 499\n4.Risotto         Rs 799");
                    if (Dish9==0)
                    {   order9:
                        printf("\n\n");
                        /*printf("|=======================================================|\n");
                        printf("|                       DEBUG CODE                      |\n");
                        printf("|=======================================================|\n");
                        printf("|Dish01 Dish02 Dish03 Dish04 Dish05 Dish06 Dish07 Dish08|\n");
                        printf("|   %d      %d      %d      %d      %d      %d      %d      %d  |\n",Dish1,Dish2,Dish3,Dish4,Dish5,Dish6,Dish7,Dish8);
                        printf("|Dish09 Dish10 Dish11 Dish12 Dish13 Dish14 Dish15 Dish16|\n");
                        printf("|   %d      %d      %d      %d      %d      %d      %d      %d  |\n",Dish9,Dish10,Dish11,Dish12,Dish13,Dish14,Dish15,Dish16);
                        printf("|Dish17 Dish18 Dish19 Dish20 Dish21 Dish22 Dish23 Dish24|\n");
                        printf("|   %d      %d      %d      %d      %d      %d      %d      %d  |\n",Dish17,Dish18,Dish19,Dish20,Dish21,Dish22,Dish23,Dish24);
                        printf("|=======================================================|\n");
                        printf("\n\n");    */
                        printf("\nPlease select a Dish by entering the corresponding number: ");
                        scanf("%d", &Dish9);
                        printf("\nPlease enter the number of servings: ");
                        scanf("%d", &Quantity9);
                        printf ("\nYou have ordered %d servings of Dish %d.", Quantity9, Dish9);
                            if      (Dish9==1){Amount9=Cost9 *Quantity9; printf("\nPizza           * %d servings = Rs 899 * %d = Rs %d", Quantity9, Quantity9, Amount9);}
                            else if (Dish9==2){Amount9=Cost10*Quantity9; printf("\nPasta           * %d servings = Rs 199 * %d = Rs %d", Quantity9, Quantity9, Amount9);}
                            else if (Dish9==3){Amount9=Cost11*Quantity9; printf("\nLasagne         * %d servings = Rs 499 * %d = Rs %d", Quantity9, Quantity9, Amount9);}
                            else if (Dish9==4){Amount9=Cost12*Quantity9; printf("\nRisotto         * %d servings = Rs 799 * %d = Rs %d", Quantity9, Quantity9, Amount9);}
                            printf ("\nDo you want to order more items?(Y/N): ");
                            char moreitems;
                            scanf ("%s", &moreitems);
                            {if(moreitems=='Y'||moreitems=='y')
                                {printf("\nSELECTED YES."); goto reorder;}
                            else if(moreitems=='N'||moreitems=='n')
                                {printf("\nSELECTED NO."); goto billing;}
                            else {printf("INVALID INPUT!");}}
                            
                    }
                    
                    else if (Dish10==0)
                    {   order10:
                        /*printf("\n\n");
                        printf("|=======================================================|\n");
                        printf("|                       DEBUG CODE                      |\n");
                        printf("|=======================================================|\n");
                        printf("|Dish01 Dish02 Dish03 Dish04 Dish05 Dish06 Dish07 Dish08|\n");
                        printf("|   %d      %d      %d      %d      %d      %d      %d      %d  |\n",Dish1,Dish2,Dish3,Dish4,Dish5,Dish6,Dish7,Dish8);
                        printf("|Dish09 Dish10 Dish11 Dish12 Dish13 Dish14 Dish15 Dish16|\n");
                        printf("|   %d      %d      %d      %d      %d      %d      %d      %d  |\n",Dish9,Dish10,Dish11,Dish12,Dish13,Dish14,Dish15,Dish16);
                        printf("|Dish17 Dish18 Dish19 Dish20 Dish21 Dish22 Dish23 Dish24|\n");
                        printf("|   %d      %d      %d      %d      %d      %d      %d      %d  |\n",Dish17,Dish18,Dish19,Dish20,Dish21,Dish22,Dish23,Dish24);
                        printf("|=======================================================|\n");
                        printf("\n\n");    */
                        printf("\nPlease select a Dish by entering the corresponding number: ");
                        scanf("%d", &Dish10);
                        printf("\nPlease enter the number of servings: ");
                        scanf("%d", &Quantity10);
                        printf ("\nYou have ordered %d servings of Dish number %d.", Quantity10, Dish10);
                            if      (Dish10==1){Amount10=Cost9 *Quantity10; printf("\nPizza           * %d servings = Rs 899 * %d = Rs %d", Quantity10, Quantity10, Amount10);}
                            else if (Dish10==2){Amount10=Cost10*Quantity10; printf("\nPasta           * %d servings = Rs 199 * %d = Rs %d", Quantity10, Quantity10, Amount10);}
                            else if (Dish10==3){Amount10=Cost11*Quantity10; printf("\nLasagne         * %d servings = Rs 499 * %d = Rs %d", Quantity10, Quantity10, Amount10);}
                            else if (Dish10==4){Amount10=Cost12*Quantity10; printf("\nRisotto         * %d servings = Rs 799 * %d = Rs %d", Quantity10, Quantity10, Amount10);}                            printf ("\nDo you want to order more items?(Y/N): ");
                            char moreitems;
                            scanf ("%s", &moreitems);
                            {if(moreitems=='Y'||moreitems=='y')
                                {printf("\nSELECTED YES."); goto reorder;}
                            else if(moreitems=='N'||moreitems=='n')
                                {printf("\nSELECTED NO."); goto billing;}
                            else {printf("INVALID INPUT!");}}
                    }
                    else if (Dish11==0)
                    {   order11:
                        /*printf("\n\n");
                        printf("|=======================================================|\n");
                        printf("|                       DEBUG CODE                      |\n");
                        printf("|=======================================================|\n");
                        printf("|Dish01 Dish02 Dish03 Dish04 Dish05 Dish06 Dish07 Dish08|\n");
                        printf("|   %d      %d      %d      %d      %d      %d      %d      %d  |\n",Dish1,Dish2,Dish3,Dish4,Dish5,Dish6,Dish7,Dish8);
                        printf("|Dish09 Dish10 Dish11 Dish12 Dish13 Dish14 Dish15 Dish16|\n");
                        printf("|   %d      %d      %d      %d      %d      %d      %d      %d  |\n",Dish9,Dish10,Dish11,Dish12,Dish13,Dish14,Dish15,Dish16);
                        printf("|Dish17 Dish18 Dish19 Dish20 Dish21 Dish22 Dish23 Dish24|\n");
                        printf("|   %d      %d      %d      %d      %d      %d      %d      %d  |\n",Dish17,Dish18,Dish19,Dish20,Dish21,Dish22,Dish23,Dish24);
                        printf("|=======================================================|\n");
                        printf("\n\n");    */
                        printf("\nPlease select a Dish by entering the corresponding number: ");
                        scanf("%d", &Dish11);
                        printf("\nPlease enter the number of servings: ");
                        scanf("%d", &Quantity11);
                        printf ("\nYou have ordered %d servings of Dish number %d.", Quantity11, Dish11);
                            if      (Dish11==1){Amount11=Cost9 *Quantity11; printf("\nPizza           * %d servings = Rs 899 * %d = Rs %d", Quantity11, Quantity11, Amount11);}
                            else if (Dish11==2){Amount11=Cost10*Quantity11; printf("\nPasta           * %d servings = Rs 199 * %d = Rs %d", Quantity11, Quantity11, Amount11);}
                            else if (Dish11==3){Amount11=Cost11*Quantity11; printf("\nLasagne         * %d servings = Rs 499 * %d = Rs %d", Quantity11, Quantity11, Amount11);}
                            else if (Dish11==4){Amount11=Cost12*Quantity11; printf("\nRisotto         * %d servings = Rs 799 * %d = Rs %d", Quantity11, Quantity11, Amount11);}                            printf ("\nDo you want to order more items?(Y/N): ");
                            printf ("\nDo you want to order more items?(Y/N): ");
                            char moreitems;
                            scanf ("%s", &moreitems);
                            {if(moreitems=='Y'||moreitems=='y')
                                {printf("\nSELECTED YES."); goto reorder;}
                            else if(moreitems=='N'||moreitems=='n')
                                {printf("\nSELECTED NO."); goto billing;}
                            else {printf("INVALID INPUT!");}}
                    }
                    else if (Dish12==0)
                    {   order12:
                        /*printf("\n\n");
                        printf("|=======================================================|\n");
                        printf("|                       DEBUG CODE                      |\n");
                        printf("|=======================================================|\n");
                        printf("|Dish01 Dish02 Dish03 Dish04 Dish05 Dish06 Dish07 Dish08|\n");
                        printf("|   %d      %d      %d      %d      %d      %d      %d      %d  |\n",Dish1,Dish2,Dish3,Dish4,Dish5,Dish6,Dish7,Dish8);
                        printf("|Dish09 Dish10 Dish11 Dish12 Dish13 Dish14 Dish15 Dish16|\n");
                        printf("|   %d      %d      %d      %d      %d      %d      %d      %d  |\n",Dish9,Dish10,Dish11,Dish12,Dish13,Dish14,Dish15,Dish16);
                        printf("|Dish17 Dish18 Dish19 Dish20 Dish21 Dish22 Dish23 Dish24|\n");
                        printf("|   %d      %d      %d      %d      %d      %d      %d      %d  |\n",Dish17,Dish18,Dish19,Dish20,Dish21,Dish22,Dish23,Dish24);
                        printf("|=======================================================|\n");
                        printf("\n\n");    */
                        printf("\nPlease select a Dish by entering the corresponding number: ");
                        scanf("%d", &Dish12);
                        printf("\nPlease enter the number of servings: ");
                        scanf("%d", &Quantity12);
                        printf ("\nYou have ordered %d servings of Dish number %d.", Quantity12, Dish12);
                            if      (Dish12==1){Amount12=Cost9 *Quantity12; printf("\nPizza           * %d servings = Rs 899 * %d = Rs %d", Quantity12, Quantity12, Amount12);}
                            else if (Dish12==2){Amount12=Cost10*Quantity12; printf("\nPasta           * %d servings = Rs 199 * %d = Rs %d", Quantity12, Quantity12, Amount12);}
                            else if (Dish12==3){Amount12=Cost11*Quantity12; printf("\nLasagne         * %d servings = Rs 499 * %d = Rs %d", Quantity12, Quantity12, Amount12);}
                            else if (Dish12==4){Amount12=Cost12*Quantity12; printf("\nRisotto         * %d servings = Rs 799 * %d = Rs %d", Quantity12, Quantity12, Amount12);}                            printf ("\nDo you want to order more items?(Y/N): ");
                            printf ("\nDo you want to order more items?(Y/N): ");
                            char moreitems;
                            scanf ("%s", &moreitems);
                            {if(moreitems=='Y'||moreitems=='y')
                                {printf("\nSELECTED YES."); goto reorder;}
                            else if(moreitems=='N'||moreitems=='n')
                                {printf("\nSELECTED NO."); goto billing;}
                            else {printf("INVALID INPUT!");}}
                    }
                    else {printf("CODE BROKE!");}
            }
        else if (cuisinetype==4)
            {
                printf("You have selected French Cuisine.\n\nFrench Dishes\n~~~~~~~~~~~~~~~\n1.Onion Soup      Rs 129\n2.Apple Pie       Rs 199\n3.Steak           Rs 349\n4.Crepe           Rs 469");
                    if (Dish13==0)
                    {   order13:
                        /*printf("\n\n");
                        printf("|=======================================================|\n");
                        printf("|                       DEBUG CODE                      |\n");
                        printf("|=======================================================|\n");
                        printf("|Dish01 Dish02 Dish03 Dish04 Dish05 Dish06 Dish07 Dish08|\n");
                        printf("|   %d      %d      %d      %d      %d      %d      %d      %d  |\n",Dish1,Dish2,Dish3,Dish4,Dish5,Dish6,Dish7,Dish8);
                        printf("|Dish09 Dish10 Dish11 Dish12 Dish13 Dish14 Dish15 Dish16|\n");
                        printf("|   %d      %d      %d      %d      %d      %d      %d      %d  |\n",Dish9,Dish10,Dish11,Dish12,Dish13,Dish14,Dish15,Dish16);
                        printf("|Dish17 Dish18 Dish19 Dish20 Dish21 Dish22 Dish23 Dish24|\n");
                        printf("|   %d      %d      %d      %d      %d      %d      %d      %d  |\n",Dish17,Dish18,Dish19,Dish20,Dish21,Dish22,Dish23,Dish24);
                        printf("|=======================================================|\n");
                        printf("\n\n");    */
                        printf("\nPlease select a Dish by entering the corresponding number: ");
                        scanf("%d", &Dish13);
                        printf("\nPlease enter the number of servings: ");
                        scanf("%d", &Quantity13);
                        printf ("\nYou have ordered %d servings of Dish %d.", Quantity13, Dish13);
                            if      (Dish13==1){Amount13=Cost13*Quantity13; printf("\nOnion Soup      * %d servings = Rs 129 * %d = Rs %d", Quantity13, Quantity13, Amount13);}
                            else if (Dish13==2){Amount13=Cost14*Quantity13; printf("\nApple Pie       * %d servings = Rs 199 * %d = Rs %d", Quantity13, Quantity13, Amount13);}
                            else if (Dish13==3){Amount13=Cost15*Quantity13; printf("\nSteak           * %d servings = Rs 349 * %d = Rs %d", Quantity13, Quantity13, Amount13);}
                            else if (Dish13==4){Amount13=Cost16*Quantity13; printf("\nCrepe           * %d servings = Rs 469 * %d = Rs %d", Quantity13, Quantity13, Amount13);}
                            printf ("\nDo you want to order more items?(Y/N): ");
                            char moreitems;
                            scanf ("%s", &moreitems);
                            {if(moreitems=='Y'||moreitems=='y')
                                {printf("\nSELECTED YES."); goto reorder;}
                            else if(moreitems=='N'||moreitems=='n')
                                {printf("\nSELECTED NO."); goto billing;}
                            else {printf("INVALID INPUT!");}}
                            
                    }
                    
                    else if (Dish14==0)
                    {   order14:
                        printf("\n\n");
                        /*printf("|=======================================================|\n");
                        printf("|                       DEBUG CODE                      |\n");
                        printf("|=======================================================|\n");
                        printf("|Dish01 Dish02 Dish03 Dish04 Dish05 Dish06 Dish07 Dish08|\n");
                        printf("|   %d      %d      %d      %d      %d      %d      %d      %d  |\n",Dish1,Dish2,Dish3,Dish4,Dish5,Dish6,Dish7,Dish8);
                        printf("|Dish09 Dish10 Dish11 Dish12 Dish13 Dish14 Dish15 Dish16|\n");
                        printf("|   %d      %d      %d      %d      %d      %d      %d      %d  |\n",Dish9,Dish10,Dish11,Dish12,Dish13,Dish14,Dish15,Dish16);
                        printf("|Dish17 Dish18 Dish19 Dish20 Dish21 Dish22 Dish23 Dish24|\n");
                        printf("|   %d      %d      %d      %d      %d      %d      %d      %d  |\n",Dish17,Dish18,Dish19,Dish20,Dish21,Dish22,Dish23,Dish24);
                        printf("|=======================================================|\n");
                        printf("\n\n");    */
                        printf("\nPlease select a Dish by entering the corresponding number: ");
                        scanf("%d", &Dish14);
                        printf("\nPlease enter the number of servings: ");
                        scanf("%d", &Quantity14);
                        printf ("\nYou have ordered %d servings of Dish number %d.", Quantity14, Dish14);
                            if      (Dish14==1){Amount14=Cost13*Quantity14; printf("\nOnion Soup      * %d servings = Rs 129 * %d = Rs %d", Quantity14, Quantity14, Amount14);}
                            else if (Dish14==2){Amount14=Cost14*Quantity14; printf("\nApple Pie       * %d servings = Rs 199 * %d = Rs %d", Quantity14, Quantity14, Amount14);}
                            else if (Dish14==3){Amount14=Cost15*Quantity14; printf("\nSteak           * %d servings = Rs 349 * %d = Rs %d", Quantity14, Quantity14, Amount14);}
                            else if (Dish14==4){Amount14=Cost16*Quantity14; printf("\nCrepe           * %d servings = Rs 469 * %d = Rs %d", Quantity14, Quantity14, Amount14);}
                            char moreitems;
                            scanf ("%s", &moreitems);
                            {if(moreitems=='Y'||moreitems=='y')
                                {printf("\nSELECTED YES."); goto reorder;}
                            else if(moreitems=='N'||moreitems=='n')
                                {printf("\nSELECTED NO."); goto billing;}
                            else {printf("INVALID INPUT!");}}
                    }
                    else if (Dish15==0)
                    {   order15:
                        printf("\n\n");
                        /*printf("|=======================================================|\n");
                        printf("|                       DEBUG CODE                      |\n");
                        printf("|=======================================================|\n");
                        printf("|Dish01 Dish02 Dish03 Dish04 Dish05 Dish06 Dish07 Dish08|\n");
                        printf("|   %d      %d      %d      %d      %d      %d      %d      %d  |\n",Dish1,Dish2,Dish3,Dish4,Dish5,Dish6,Dish7,Dish8);
                        printf("|Dish09 Dish10 Dish11 Dish12 Dish13 Dish14 Dish15 Dish16|\n");
                        printf("|   %d      %d      %d      %d      %d      %d      %d      %d  |\n",Dish9,Dish10,Dish11,Dish12,Dish13,Dish14,Dish15,Dish16);
                        printf("|Dish17 Dish18 Dish19 Dish20 Dish21 Dish22 Dish23 Dish24|\n");
                        printf("|   %d      %d      %d      %d      %d      %d      %d      %d  |\n",Dish17,Dish18,Dish19,Dish20,Dish21,Dish22,Dish23,Dish24);
                        printf("|=======================================================|\n");
                        printf("\n\n");    */
                        printf("\nPlease select a Dish by entering the corresponding number: ");
                        scanf("%d", &Dish15);
                        printf("\nPlease enter the number of servings: ");
                        scanf("%d", &Quantity15);
                        printf ("\nYou have ordered %d servings of Dish number %d.", Quantity15, Dish15);
                            if      (Dish15==1){Amount15=Cost13*Quantity15; printf("\nOnion Soup      * %d servings = Rs 129 * %d = Rs %d", Quantity15, Quantity15, Amount15);}
                            else if (Dish15==2){Amount15=Cost14*Quantity15; printf("\nApple Pie       * %d servings = Rs 199 * %d = Rs %d", Quantity15, Quantity15, Amount15);}
                            else if (Dish15==3){Amount15=Cost15*Quantity15; printf("\nSteak           * %d servings = Rs 349 * %d = Rs %d", Quantity15, Quantity15, Amount15);}
                            else if (Dish15==4){Amount15=Cost16*Quantity15; printf("\nCrepe           * %d servings = Rs 469 * %d = Rs %d", Quantity15, Quantity15, Amount15);}
                            printf ("\nDo you want to order more items?(Y/N): ");
                            char moreitems;
                            scanf ("%s", &moreitems);
                            {if(moreitems=='Y'||moreitems=='y')
                                {printf("\nSELECTED YES."); goto reorder;}
                            else if(moreitems=='N'||moreitems=='n')
                                {printf("\nSELECTED NO."); goto billing;}
                            else {printf("INVALID INPUT!");}}
                    }
                    else if (Dish16==0)
                    {   order16:
                        /*printf("\n\n");
                        printf("|=======================================================|\n");
                        printf("|                       DEBUG CODE                      |\n");
                        printf("|=======================================================|\n");
                        printf("|Dish01 Dish02 Dish03 Dish04 Dish05 Dish06 Dish07 Dish08|\n");
                        printf("|   %d      %d      %d      %d      %d      %d      %d      %d  |\n",Dish1,Dish2,Dish3,Dish4,Dish5,Dish6,Dish7,Dish8);
                        printf("|Dish09 Dish10 Dish11 Dish12 Dish13 Dish14 Dish15 Dish16|\n");
                        printf("|   %d      %d      %d      %d      %d      %d      %d      %d  |\n",Dish9,Dish10,Dish11,Dish12,Dish13,Dish14,Dish15,Dish16);
                        printf("|Dish17 Dish18 Dish19 Dish20 Dish21 Dish22 Dish23 Dish24|\n");
                        printf("|   %d      %d      %d      %d      %d      %d      %d      %d  |\n",Dish17,Dish18,Dish19,Dish20,Dish21,Dish22,Dish23,Dish24);
                        printf("|=======================================================|\n");
                        printf("\n\n");    */
                        printf("\nPlease select a Dish by entering the corresponding number: ");
                        scanf("%d", &Dish16);
                        printf("\nPlease enter the number of servings: ");
                        scanf("%d", &Quantity16);
                        printf ("\nYou have ordered %d servings of Dish number %d.", Quantity16, Dish16);
                            if      (Dish16==1){Amount16=Cost13*Quantity16; printf("\nOnion Soup      * %d servings = Rs 129 * %d = Rs %d", Quantity16, Quantity16, Amount16);}
                            else if (Dish16==2){Amount16=Cost14*Quantity16; printf("\nApple Pie       * %d servings = Rs 199 * %d = Rs %d", Quantity16, Quantity16, Amount16);}
                            else if (Dish16==3){Amount16=Cost15*Quantity16; printf("\nSteak           * %d servings = Rs 349 * %d = Rs %d", Quantity16, Quantity16, Amount16);}
                            else if (Dish16==4){Amount16=Cost16*Quantity16; printf("\nCrepe           * %d servings = Rs 469 * %d = Rs %d", Quantity16, Quantity16, Amount16);}
                            printf ("\nDo you want to order more items?(Y/N): ");
                            char moreitems;
                            scanf ("%s", &moreitems);
                            {if(moreitems=='Y'||moreitems=='y')
                                {printf("\nSELECTED YES."); goto reorder;}
                            else if(moreitems=='N'||moreitems=='n')
                                {printf("\nSELECTED NO."); goto billing;}
                            else {printf("INVALID INPUT!");}}
                    }
                    else {printf("CODE BROKE!");}
            }
        else if (cuisinetype==5)
            {
                printf("You have selected Chinese Cuisine.\n\nChinese Dishes\n~~~~~~~~~~~~~~~\n1.Hot Pot         Rs 999\n2.Dimsum          Rs 199\n3.Dumplings       Rs 149\n4.Chow Mein       Rs 129");
                    if (Dish17==0)
                    {   order17:
                        /*printf("\n\n");
                        printf("|=======================================================|\n");
                        printf("|                       DEBUG CODE                      |\n");
                        printf("|=======================================================|\n");
                        printf("|Dish01 Dish02 Dish03 Dish04 Dish05 Dish06 Dish07 Dish08|\n");
                        printf("|   %d      %d      %d      %d      %d      %d      %d      %d  |\n",Dish1,Dish2,Dish3,Dish4,Dish5,Dish6,Dish7,Dish8);
                        printf("|Dish09 Dish10 Dish11 Dish12 Dish13 Dish14 Dish15 Dish16|\n");
                        printf("|   %d      %d      %d      %d      %d      %d      %d      %d  |\n",Dish9,Dish10,Dish11,Dish12,Dish13,Dish14,Dish15,Dish16);
                        printf("|Dish17 Dish18 Dish19 Dish20 Dish21 Dish22 Dish23 Dish24|\n");
                        printf("|   %d      %d      %d      %d      %d      %d      %d      %d  |\n",Dish17,Dish18,Dish19,Dish20,Dish21,Dish22,Dish23,Dish24);
                        printf("|=======================================================|\n");
                        printf("\n\n");    */
                        printf("\nPlease select a Dish by entering the corresponding number: ");
                        scanf("%d", &Dish17);
                        printf("\nPlease enter the number of servings: ");
                        scanf("%d", &Quantity17);
                        printf ("\nYou have ordered %d servings of Dish %d.", Quantity17, Dish17);
                            if      (Dish17==1){Amount17=Cost17*Quantity17; printf("\nHot Pot         * %d servings = Rs 999 * %d = Rs %d", Quantity17, Quantity17, Amount17);}
                            else if (Dish17==2){Amount17=Cost18*Quantity17; printf("\nDimsum          * %d servings = Rs 199 * %d = Rs %d", Quantity17, Quantity17, Amount17);}
                            else if (Dish17==3){Amount17=Cost19*Quantity17; printf("\nDumplings       * %d servings = Rs 149 * %d = Rs %d", Quantity17, Quantity17, Amount17);}
                            else if (Dish17==4){Amount17=Cost20*Quantity17; printf("\nChow Mein       * %d servings = Rs 129 * %d = Rs %d", Quantity17, Quantity17, Amount17);}
                            printf ("\nDo you want to order more items?(Y/N): ");
                            char moreitems;
                            scanf ("%s", &moreitems);
                            {if(moreitems=='Y'||moreitems=='y')
                                {printf("\nSELECTED YES."); goto reorder;}
                            else if(moreitems=='N'||moreitems=='n')
                                {printf("\nSELECTED NO."); goto billing;}
                            else {printf("INVALID INPUT!");}}
                            
                    }
                    
                    else if (Dish18==0)
                    {   order18:
                        /*printf("\n\n");
                        printf("|=======================================================|\n");
                        printf("|                       DEBUG CODE                      |\n");
                        printf("|=======================================================|\n");
                        printf("|Dish01 Dish02 Dish03 Dish04 Dish05 Dish06 Dish07 Dish08|\n");
                        printf("|   %d      %d      %d      %d      %d      %d      %d      %d  |\n",Dish1,Dish2,Dish3,Dish4,Dish5,Dish6,Dish7,Dish8);
                        printf("|Dish09 Dish10 Dish11 Dish12 Dish13 Dish14 Dish15 Dish16|\n");
                        printf("|   %d      %d      %d      %d      %d      %d      %d      %d  |\n",Dish9,Dish10,Dish11,Dish12,Dish13,Dish14,Dish15,Dish16);
                        printf("|Dish17 Dish18 Dish19 Dish20 Dish21 Dish22 Dish23 Dish24|\n");
                        printf("|   %d      %d      %d      %d      %d      %d      %d      %d  |\n",Dish17,Dish18,Dish19,Dish20,Dish21,Dish22,Dish23,Dish24);
                        printf("|=======================================================|\n");
                        printf("\n\n");    */
                        printf("\nPlease select a Dish by entering the corresponding number: ");
                        scanf("%d", &Dish18);
                        printf("\nPlease enter the number of servings: ");
                        scanf("%d", &Quantity18);
                        printf ("\nYou have ordered %d servings of Dish number %d.", Quantity18, Dish18);
                            if      (Dish18==1){Amount18=Cost17*Quantity18; printf("\nHot Pot         * %d servings = Rs 999 * %d = Rs %d", Quantity18, Quantity18, Amount18);}
                            else if (Dish18==2){Amount18=Cost18*Quantity18; printf("\nDimsum          * %d servings = Rs 199 * %d = Rs %d", Quantity18, Quantity18, Amount18);}
                            else if (Dish18==3){Amount18=Cost19*Quantity18; printf("\nDumplings       * %d servings = Rs 149 * %d = Rs %d", Quantity18, Quantity18, Amount18);}
                            else if (Dish18==4){Amount18=Cost20*Quantity18; printf("\nChow Mein       * %d servings = Rs 129 * %d = Rs %d", Quantity18, Quantity18, Amount18);}
                            char moreitems;
                            scanf ("%s", &moreitems);
                            {if(moreitems=='Y'||moreitems=='y')
                                {printf("\nSELECTED YES."); goto reorder;}
                            else if(moreitems=='N'||moreitems=='n')
                                {printf("\nSELECTED NO."); goto billing;}
                            else {printf("INVALID INPUT!");}}
                    }
                    else if (Dish19==0)
                    {   order19:
                        /*printf("\n\n");
                        printf("|=======================================================|\n");
                        printf("|                       DEBUG CODE                      |\n");
                        printf("|=======================================================|\n");
                        printf("|Dish01 Dish02 Dish03 Dish04 Dish05 Dish06 Dish07 Dish08|\n");
                        printf("|   %d      %d      %d      %d      %d      %d      %d      %d  |\n",Dish1,Dish2,Dish3,Dish4,Dish5,Dish6,Dish7,Dish8);
                        printf("|Dish09 Dish10 Dish11 Dish12 Dish13 Dish14 Dish15 Dish16|\n");
                        printf("|   %d      %d      %d      %d      %d      %d      %d      %d  |\n",Dish9,Dish10,Dish11,Dish12,Dish13,Dish14,Dish15,Dish16);
                        printf("|Dish17 Dish18 Dish19 Dish20 Dish21 Dish22 Dish23 Dish24|\n");
                        printf("|   %d      %d      %d      %d      %d      %d      %d      %d  |\n",Dish17,Dish18,Dish19,Dish20,Dish21,Dish22,Dish23,Dish24);
                        printf("|=======================================================|\n");
                        printf("\n\n");    */
                        printf("\nPlease select a Dish by entering the corresponding number: ");
                        scanf("%d", &Dish19);
                        printf("\nPlease enter the number of servings: ");
                        scanf("%d", &Quantity19);
                        printf ("\nYou have ordered %d servings of Dish number %d.", Quantity19, Dish19);
                            if      (Dish19==1){Amount19=Cost17*Quantity19; printf("\nHot Pot         * %d servings = Rs 999 * %d = Rs %d", Quantity19, Quantity19, Amount19);}
                            else if (Dish19==2){Amount19=Cost18*Quantity19; printf("\nDimsum          * %d servings = Rs 199 * %d = Rs %d", Quantity19, Quantity19, Amount19);}
                            else if (Dish19==3){Amount19=Cost19*Quantity19; printf("\nDumplings       * %d servings = Rs 149 * %d = Rs %d", Quantity19, Quantity19, Amount19);}
                            else if (Dish19==4){Amount19=Cost20*Quantity19; printf("\nChow Mein       * %d servings = Rs 129 * %d = Rs %d", Quantity19, Quantity19, Amount19);}
                            printf ("\nDo you want to order more items?(Y/N): ");
                            char moreitems;
                            scanf ("%s", &moreitems);
                            {if(moreitems=='Y'||moreitems=='y')
                                {printf("\nSELECTED YES."); goto reorder;}
                            else if(moreitems=='N'||moreitems=='n')
                                {printf("\nSELECTED NO."); goto billing;}
                            else {printf("INVALID INPUT!");}}
                    }
                    else if (Dish20==0)
                    {   order20:
                        /*printf("\n\n");
                        printf("|=======================================================|\n");
                        printf("|                       DEBUG CODE                      |\n");
                        printf("|=======================================================|\n");
                        printf("|Dish01 Dish02 Dish03 Dish04 Dish05 Dish06 Dish07 Dish08|\n");
                        printf("|   %d      %d      %d      %d      %d      %d      %d      %d  |\n",Dish1,Dish2,Dish3,Dish4,Dish5,Dish6,Dish7,Dish8);
                        printf("|Dish09 Dish10 Dish11 Dish12 Dish13 Dish14 Dish15 Dish16|\n");
                        printf("|   %d      %d      %d      %d      %d      %d      %d      %d  |\n",Dish9,Dish10,Dish11,Dish12,Dish13,Dish14,Dish15,Dish16);
                        printf("|Dish17 Dish18 Dish19 Dish20 Dish21 Dish22 Dish23 Dish24|\n");
                        printf("|   %d      %d      %d      %d      %d      %d      %d      %d  |\n",Dish17,Dish18,Dish19,Dish20,Dish21,Dish22,Dish23,Dish24);
                        printf("|=======================================================|\n");
                        printf("\n\n");    */
                        printf("\nPlease select a Dish by entering the corresponding number: ");
                        scanf("%d", &Dish20);
                        printf("\nPlease enter the number of servings: ");
                        scanf("%d", &Quantity20);
                        printf ("\nYou have ordered %d servings of Dish number %d.", Quantity20, Dish20);
                            if      (Dish20==1){Amount20=Cost17*Quantity20; printf("\nHot Pot         * %d servings = Rs 999 * %d = Rs %d", Quantity20, Quantity20, Amount20);}
                            else if (Dish20==2){Amount20=Cost18*Quantity20; printf("\nDimsum          * %d servings = Rs 199 * %d = Rs %d", Quantity20, Quantity20, Amount20);}
                            else if (Dish20==3){Amount20=Cost19*Quantity20; printf("\nDumplings       * %d servings = Rs 149 * %d = Rs %d", Quantity20, Quantity20, Amount20);}
                            else if (Dish20==4){Amount20=Cost20*Quantity20; printf("\nChow Mein       * %d servings = Rs 129 * %d = Rs %d", Quantity20, Quantity20, Amount20);}
                            printf ("\nDo you want to order more items?(Y/N): ");
                            char moreitems;
                            scanf ("%s", &moreitems);
                            {if(moreitems=='Y'||moreitems=='y')
                                {printf("\nSELECTED YES."); goto reorder;}
                            else if(moreitems=='N'||moreitems=='n')
                                {printf("\nSELECTED NO."); goto billing;}
                            else {printf("INVALID INPUT!");}}
                    }
                }
        else if (cuisinetype==6)
            {
                printf("You have selected Beverages.\n\nJapanese Dishes\n~~~~~~~~~~~~~~~\n1.Mineral Water   Rs 20\n2.Coca Cola       Rs 60\n3.Maaza           Rs 40\n4.Sprite          Rs 50");
                    if (Dish21==0)
                    {   order21:
                        /*printf("\n\n");
                        printf("|=======================================================|\n");
                        printf("|                       DEBUG CODE                      |\n");
                        printf("|=======================================================|\n");
                        printf("|Dish01 Dish02 Dish03 Dish04 Dish05 Dish06 Dish07 Dish08|\n");
                        printf("|   %d      %d      %d      %d      %d      %d      %d      %d  |\n",Dish1,Dish2,Dish3,Dish4,Dish5,Dish6,Dish7,Dish8);
                        printf("|Dish09 Dish10 Dish11 Dish12 Dish13 Dish14 Dish15 Dish16|\n");
                        printf("|   %d      %d      %d      %d      %d      %d      %d      %d  |\n",Dish9,Dish10,Dish11,Dish12,Dish13,Dish14,Dish15,Dish16);
                        printf("|Dish17 Dish18 Dish19 Dish20 Dish21 Dish22 Dish23 Dish24|\n");
                        printf("|   %d      %d      %d      %d      %d      %d      %d      %d  |\n",Dish17,Dish18,Dish19,Dish20,Dish21,Dish22,Dish23,Dish24);
                        printf("|=======================================================|\n");
                        printf("\n\n");    */
                        printf("\nPlease select a Dish by entering the corresponding number: ");
                        scanf("%d", &Dish21);
                        printf("\nPlease enter the number of servings: ");
                        scanf("%d", &Quantity21);
                        printf ("\nYou have ordered %d servings of Dish %d.", Quantity21, Dish21);
                            if      (Dish21==1){Amount21=Cost21*Quantity21; printf("\nMineral Water   * %d servings = Rs 20 * %d = Rs %d", Quantity21, Quantity21, Amount21);}
                            else if (Dish21==2){Amount21=Cost22*Quantity21; printf("\nCoca Cola       * %d servings = Rs 60 * %d = Rs %d", Quantity21, Quantity21, Amount21);}
                            else if (Dish21==3){Amount21=Cost23*Quantity21; printf("\nMaaza           * %d servings = Rs 40 * %d = Rs %d", Quantity21, Quantity21, Amount21);}
                            else if (Dish21==4){Amount21=Cost24*Quantity21; printf("\nSprite          * %d servings = Rs 50 * %d = Rs %d", Quantity21, Quantity21, Amount21);}
                            printf ("\nDo you want to order more items?(Y/N): ");
                            char moreitems;
                            scanf ("%s", &moreitems);
                            {if(moreitems=='Y'||moreitems=='y')
                                {printf("\nSELECTED YES."); goto reorder;}
                            else if(moreitems=='N'||moreitems=='n')
                                {printf("\nSELECTED NO."); goto billing;}
                            else {printf("INVALID INPUT!");}}
                            
                    }
                    
                    else if (Dish22==0)
                    {   order22:
                        /*printf("\n\n");
                        printf("|=======================================================|\n");
                        printf("|                       DEBUG CODE                      |\n");
                        printf("|=======================================================|\n");
                        printf("|Dish01 Dish02 Dish03 Dish04 Dish05 Dish06 Dish07 Dish08|\n");
                        printf("|   %d      %d      %d      %d      %d      %d      %d      %d  |\n",Dish1,Dish2,Dish3,Dish4,Dish5,Dish6,Dish7,Dish8);
                        printf("|Dish09 Dish10 Dish11 Dish12 Dish13 Dish14 Dish15 Dish16|\n");
                        printf("|   %d      %d      %d      %d      %d      %d      %d      %d  |\n",Dish9,Dish10,Dish11,Dish12,Dish13,Dish14,Dish15,Dish16);
                        printf("|Dish17 Dish18 Dish19 Dish20 Dish21 Dish22 Dish23 Dish24|\n");
                        printf("|   %d      %d      %d      %d      %d      %d      %d      %d  |\n",Dish17,Dish18,Dish19,Dish20,Dish21,Dish22,Dish23,Dish24);
                        printf("|=======================================================|\n");
                        printf("\n\n");    */
                        printf("\nPlease select a Dish by entering the corresponding number: ");
                        scanf("%d", &Dish22);
                        printf("\nPlease enter the number of servings: ");
                        scanf("%d", &Quantity22);
                        printf ("\nYou have ordered %d servings of Dish number %d.", Quantity22, Dish22);
                            if      (Dish22==1){Amount22=Cost21*Quantity22; printf("\nMineral Water   * %d servings = Rs 20 * %d = Rs %d", Quantity22, Quantity22, Amount22);}
                            else if (Dish22==2){Amount22=Cost22*Quantity22; printf("\nCoca Cola       * %d servings = Rs 60 * %d = Rs %d", Quantity22, Quantity22, Amount22);}
                            else if (Dish22==3){Amount22=Cost23*Quantity22; printf("\nMaaza           * %d servings = Rs 40 * %d = Rs %d", Quantity22, Quantity22, Amount22);}
                            else if (Dish22==4){Amount22=Cost24*Quantity22; printf("\nSprite          * %d servings = Rs 50 * %d = Rs %d", Quantity22, Quantity22, Amount22);}
                            printf ("\nDo you want to order more items?(Y/N): ");
                            char moreitems;
                            scanf ("%s", &moreitems);
                            {if(moreitems=='Y'||moreitems=='y')
                                {printf("\nSELECTED YES."); goto reorder;}
                            else if(moreitems=='N'||moreitems=='n')
                                {printf("\nSELECTED NO."); goto billing;}
                            else {printf("INVALID INPUT!");}}
                    }
                    else if (Dish23==0)
                    {   order23:
                        /*printf("\n\n");
                        printf("|=======================================================|\n");
                        printf("|                       DEBUG CODE                      |\n");
                        printf("|=======================================================|\n");
                        printf("|Dish01 Dish02 Dish03 Dish04 Dish05 Dish06 Dish07 Dish08|\n");
                        printf("|   %d      %d      %d      %d      %d      %d      %d      %d  |\n",Dish1,Dish2,Dish3,Dish4,Dish5,Dish6,Dish7,Dish8);
                        printf("|Dish09 Dish10 Dish11 Dish12 Dish13 Dish14 Dish15 Dish16|\n");
                        printf("|   %d      %d      %d      %d      %d      %d      %d      %d  |\n",Dish9,Dish10,Dish11,Dish12,Dish13,Dish14,Dish15,Dish16);
                        printf("|Dish17 Dish18 Dish19 Dish20 Dish21 Dish22 Dish23 Dish24|\n");
                        printf("|   %d      %d      %d      %d      %d      %d      %d      %d  |\n",Dish17,Dish18,Dish19,Dish20,Dish21,Dish22,Dish23,Dish24);
                        printf("|=======================================================|\n");
                        printf("\n\n");    */
                        printf("\nPlease select a Dish by entering the corresponding number: ");
                        scanf("%d", &Dish23);
                        printf("\nPlease enter the number of servings: ");
                        scanf("%d", &Quantity23);
                        printf ("\nYou have ordered %d servings of Dish number %d.", Quantity23, Dish23);
                            if      (Dish23==1){Amount23=Cost21*Quantity23; printf("\nMineral Water   * %d servings = Rs 20 * %d = Rs %d", Quantity23, Quantity23, Amount23);}
                            else if (Dish23==2){Amount23=Cost22*Quantity23; printf("\nCoca Cola       * %d servings = Rs 60 * %d = Rs %d", Quantity23, Quantity23, Amount23);}
                            else if (Dish23==3){Amount23=Cost23*Quantity23; printf("\nMaaza           * %d servings = Rs 40 * %d = Rs %d", Quantity23, Quantity23, Amount23);}
                            else if (Dish23==4){Amount23=Cost24*Quantity23; printf("\nSprite          * %d servings = Rs 50 * %d = Rs %d", Quantity23, Quantity23, Amount23);}
                            printf ("\nDo you want to order more items?(Y/N): ");
                            char moreitems;
                            scanf ("%s", &moreitems);
                            {if(moreitems=='Y'||moreitems=='y')
                                {printf("\nSELECTED YES."); goto reorder;}
                            else if(moreitems=='N'||moreitems=='n')
                                {printf("\nSELECTED NO."); goto billing;}
                            else {printf("INVALID INPUT!");}}
                    }
                    else if (Dish24==0)
                    {   order24:
                        /*printf("\n\n");
                        printf("|=======================================================|\n");
                        printf("|                       DEBUG CODE                      |\n");
                        printf("|=======================================================|\n");
                        printf("|Dish01 Dish02 Dish03 Dish04 Dish05 Dish06 Dish07 Dish08|\n");
                        printf("|   %d      %d      %d      %d      %d      %d      %d      %d  |\n",Dish1,Dish2,Dish3,Dish4,Dish5,Dish6,Dish7,Dish8);
                        printf("|Dish09 Dish10 Dish11 Dish12 Dish13 Dish14 Dish15 Dish16|\n");
                        printf("|   %d      %d      %d      %d      %d      %d      %d      %d  |\n",Dish9,Dish10,Dish11,Dish12,Dish13,Dish14,Dish15,Dish16);
                        printf("|Dish17 Dish18 Dish19 Dish20 Dish21 Dish22 Dish23 Dish24|\n");
                        printf("|   %d      %d      %d      %d      %d      %d      %d      %d  |\n",Dish17,Dish18,Dish19,Dish20,Dish21,Dish22,Dish23,Dish24);
                        printf("|=======================================================|\n");
                        printf("\n\n");    */
                        printf("\nPlease select a Dish by entering the corresponding number: ");
                        scanf("%d", &Dish24);
                        printf("\nPlease enter the number of servings: ");
                        scanf("%d", &Quantity24);
                        printf ("\nYou have ordered %d servings of Dish number %d.", Quantity24, Dish24);
                            if      (Dish24==1){Amount24=Cost21*Quantity24; printf("\nMineral Water   * %d servings = Rs 20 * %d = Rs %d", Quantity24, Quantity24, Amount24);}
                            else if (Dish24==2){Amount24=Cost22*Quantity24; printf("\nCoca Cola       * %d servings = Rs 60 * %d = Rs %d", Quantity24, Quantity24, Amount24);}
                            else if (Dish24==3){Amount24=Cost23*Quantity24; printf("\nMaaza           * %d servings = Rs 40 * %d = Rs %d", Quantity24, Quantity24, Amount24);}
                            else if (Dish24==4){Amount24=Cost24*Quantity24; printf("\nSprite          * %d servings = Rs 50 * %d = Rs %d", Quantity24, Quantity24, Amount24);}
                            printf ("\nDo you want to order more items?(Y/N): ");
                            char moreitems;
                            scanf ("%s", &moreitems);
                            {if(moreitems=='Y'||moreitems=='y')
                                {printf("\nSELECTED YES."); goto reorder;}
                            else if(moreitems=='N'||moreitems=='n')
                                {printf("\nSELECTED NO."); goto billing;}
                            else {printf("INVALID INPUT!");}}
                    }
                    else {printf("CODE BROKE!");}
            }
        
/*-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    RESIDUAL CODE
        else if (cuisinetype==5)
            {
                printf("You have selected Chinese Cuisine. \nUnfortunately, the kitchen for this cuisine is closed now. Sorry for the inconvenience! \nDo you want to go back to the main menu(Y/N)?: ");
                ChineseTest:;
                char restart;
                scanf ("%s", &restart);
                {if(restart=='Y'||restart=='y')
                    {printf("\nSELECTED YES."); goto reorder;}
                else if(restart=='N'||restart=='n')
                    {printf("\nSELECTED NO."); goto billing;}
                else {printf("INVALID INPUT!");}}
                scanf("%s", &restart);
                if (restart==1){goto start;}
                else {printf("\nInvalid Input! Please try again: "); goto ChineseTest;}
            }
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
        else {printf("Invalid selection!"); goto start;}
        }
    goto reorder;
    billing:
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n~~~~~~~~~|             BILL             |~~~~~~~~~");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\nOrder Summary:");
    if (Dish1==1){printf("\nRamen           * %d servings = Rs 499 * %d = Rs %d", Quantity1, Quantity1, Amount1);}
    if (Dish1==2){printf("\nTakoyaki        * %d servings = Rs 399 * %d = Rs %d", Quantity1, Quantity1, Amount1);}
    if (Dish1==3){printf("\nOnigiri         * %d servings = Rs 199 * %d = Rs %d", Quantity1, Quantity1, Amount1);}
    if (Dish1==4){printf("\nDango           * %d servings = Rs 299 * %d = Rs %d", Quantity1, Quantity1, Amount1);}
    if (Dish2==1){printf("\nRamen           * %d servings = Rs 499 * %d = Rs %d", Quantity2, Quantity2, Amount2);}
    if (Dish2==2){printf("\nTakoyaki        * %d servings = Rs 399 * %d = Rs %d", Quantity2, Quantity2, Amount2);}
    if (Dish2==3){printf("\nOnigiri         * %d servings = Rs 199 * %d = Rs %d", Quantity2, Quantity2, Amount2);}
    if (Dish2==4){printf("\nDango           * %d servings = Rs 299 * %d = Rs %d", Quantity2, Quantity2, Amount2);}
    if (Dish3==1){printf("\nRamen           * %d servings = Rs 499 * %d = Rs %d", Quantity3, Quantity3, Amount3);}
    if (Dish3==2){printf("\nTakoyaki        * %d servings = Rs 399 * %d = Rs %d", Quantity3, Quantity3, Amount3);}
    if (Dish3==3){printf("\nOnigiri         * %d servings = Rs 199 * %d = Rs %d", Quantity3, Quantity3, Amount3);}
    if (Dish3==4){printf("\nDango           * %d servings = Rs 299 * %d = Rs %d", Quantity3, Quantity3, Amount3);}
    if (Dish4==1){printf("\nRamen           * %d servings = Rs 499 * %d = Rs %d", Quantity4, Quantity4, Amount4);}
    if (Dish4==2){printf("\nTakoyaki        * %d servings = Rs 399 * %d = Rs %d", Quantity4, Quantity4, Amount4);}
    if (Dish4==3){printf("\nOnigiri         * %d servings = Rs 199 * %d = Rs %d", Quantity4, Quantity4, Amount4);}
    if (Dish4==4){printf("\nDango           * %d servings = Rs 299 * %d = Rs %d", Quantity4, Quantity4, Amount4);}
    if (Dish5==1){printf("\nButter Chicken  * %d servings = Rs 299 * %d = Rs %d", Quantity5, Quantity5, Amount5);}
    if (Dish5==2){printf("\nKadhai Paneer   * %d servings = Rs 199 * %d = Rs %d", Quantity5, Quantity5, Amount5);}
    if (Dish5==3){printf("\nMasala Dosa     * %d servings = Rs 099 * %d = Rs %d", Quantity5, Quantity5, Amount5);}
    if (Dish5==4){printf("\nNaan            * %d servings = Rs 029 * %d = Rs %d", Quantity5, Quantity5, Amount5);}
    if (Dish6==1){printf("\nButter Chicken  * %d servings = Rs 299 * %d = Rs %d", Quantity6, Quantity6, Amount6);}
    if (Dish6==2){printf("\nKadhai Paneer   * %d servings = Rs 199 * %d = Rs %d", Quantity6, Quantity6, Amount6);}
    if (Dish6==3){printf("\nMasala Dosa     * %d servings = Rs 099 * %d = Rs %d", Quantity6, Quantity6, Amount6);}
    if (Dish6==4){printf("\nNaan            * %d servings = Rs 029 * %d = Rs %d", Quantity6, Quantity6, Amount6);}
    if (Dish7==1){printf("\nButter Chicken  * %d servings = Rs 299 * %d = Rs %d", Quantity7, Quantity7, Amount7);}
    if (Dish7==2){printf("\nKadhai Paneer   * %d servings = Rs 199 * %d = Rs %d", Quantity7, Quantity7, Amount7);}
    if (Dish7==3){printf("\nMasala Dosa     * %d servings = Rs 099 * %d = Rs %d", Quantity7, Quantity7, Amount7);}
    if (Dish7==4){printf("\nNaan            * %d servings = Rs 029 * %d = Rs %d", Quantity7, Quantity7, Amount7);}
    if (Dish8==1){printf("\nButter Chicken  * %d servings = Rs 299 * %d = Rs %d", Quantity8, Quantity8, Amount8);}
    if (Dish8==2){printf("\nKadhai Paneer   * %d servings = Rs 199 * %d = Rs %d", Quantity8, Quantity8, Amount8);}
    if (Dish8==3){printf("\nMasala Dosa     * %d servings = Rs 099 * %d = Rs %d", Quantity8, Quantity8, Amount8);}
    if (Dish8==4){printf("\nNaan            * %d servings = Rs 029 * %d = Rs %d", Quantity8, Quantity8, Amount8);}
    if (Dish9==1){printf("\nPizza           * %d servings = Rs 899 * %d = Rs %d", Quantity9, Quantity9, Amount9);}
    if (Dish9==2){printf("\nPasta           * %d servings = Rs 199 * %d = Rs %d", Quantity9, Quantity9, Amount9);}
    if (Dish9==3){printf("\nLasagne         * %d servings = Rs 499 * %d = Rs %d", Quantity9, Quantity9, Amount9);}
    if (Dish9==4){printf("\nRisotto         * %d servings = Rs 799 * %d = Rs %d", Quantity9, Quantity9, Amount9);}
    if (Dish10==1){printf("\nPizza           * %d servings = Rs 899 * %d = Rs %d", Quantity10, Quantity10, Amount10);}
    if (Dish10==2){printf("\nPasta           * %d servings = Rs 199 * %d = Rs %d", Quantity10, Quantity10, Amount10);}
    if (Dish10==3){printf("\nLasagne         * %d servings = Rs 499 * %d = Rs %d", Quantity10, Quantity10, Amount10);}
    if (Dish10==4){printf("\nRisotto         * %d servings = Rs 799 * %d = Rs %d", Quantity10, Quantity10, Amount10);}
    if (Dish11==1){printf("\nPizza           * %d servings = Rs 899 * %d = Rs %d", Quantity11, Quantity11, Amount11);}
    if (Dish11==2){printf("\nPasta           * %d servings = Rs 199 * %d = Rs %d", Quantity11, Quantity11, Amount11);}
    if (Dish11==3){printf("\nLasagne         * %d servings = Rs 499 * %d = Rs %d", Quantity11, Quantity11, Amount11);}
    if (Dish11==4){printf("\nRisotto         * %d servings = Rs 799 * %d = Rs %d", Quantity11, Quantity11, Amount11);}
    if (Dish12==1){printf("\nPizza           * %d servings = Rs 899 * %d = Rs %d", Quantity12, Quantity12, Amount12);}
    if (Dish12==2){printf("\nPasta           * %d servings = Rs 199 * %d = Rs %d", Quantity12, Quantity12, Amount12);}
    if (Dish12==3){printf("\nLasagne         * %d servings = Rs 499 * %d = Rs %d", Quantity12, Quantity12, Amount12);}
    if (Dish12==4){printf("\nRisotto         * %d servings = Rs 799 * %d = Rs %d", Quantity12, Quantity12, Amount12);}
    if (Dish13==1){printf("\nOnion Soup      * %d servings = Rs 129 * %d = Rs %d", Quantity13, Quantity13, Amount13);}
    if (Dish13==2){printf("\nApple Pie       * %d servings = Rs 199 * %d = Rs %d", Quantity13, Quantity13, Amount13);}
    if (Dish13==3){printf("\nSteak           * %d servings = Rs 349 * %d = Rs %d", Quantity13, Quantity13, Amount13);}
    if (Dish13==4){printf("\nCrepe           * %d servings = Rs 469 * %d = Rs %d", Quantity13, Quantity13, Amount13);}
    if (Dish14==1){printf("\nOnion Soup      * %d servings = Rs 129 * %d = Rs %d", Quantity14, Quantity14, Amount14);}
    if (Dish14==2){printf("\nApple Pie       * %d servings = Rs 199 * %d = Rs %d", Quantity14, Quantity14, Amount14);}
    if (Dish14==3){printf("\nSteak           * %d servings = Rs 349 * %d = Rs %d", Quantity14, Quantity14, Amount14);}
    if (Dish14==4){printf("\nCrepe           * %d servings = Rs 469 * %d = Rs %d", Quantity14, Quantity14, Amount14);}
    if (Dish15==1){printf("\nOnion Soup      * %d servings = Rs 129 * %d = Rs %d", Quantity15, Quantity15, Amount15);}
    if (Dish15==2){printf("\nApple Pie       * %d servings = Rs 199 * %d = Rs %d", Quantity15, Quantity15, Amount15);}
    if (Dish15==3){printf("\nSteak           * %d servings = Rs 349 * %d = Rs %d", Quantity15, Quantity15, Amount15);}
    if (Dish15==4){printf("\nCrepe           * %d servings = Rs 469 * %d = Rs %d", Quantity15, Quantity15, Amount15);}
    if (Dish16==1){printf("\nOnion Soup      * %d servings = Rs 129 * %d = Rs %d", Quantity16, Quantity16, Amount16);}
    if (Dish16==2){printf("\nApple Pie       * %d servings = Rs 199 * %d = Rs %d", Quantity16, Quantity16, Amount16);}
    if (Dish16==3){printf("\nSteak           * %d servings = Rs 349 * %d = Rs %d", Quantity16, Quantity16, Amount16);}
    if (Dish16==4){printf("\nCrepe           * %d servings = Rs 469 * %d = Rs %d", Quantity16, Quantity16, Amount16);}
    if (Dish17==1){printf("\nHot Pot         * %d servings = Rs 999 * %d = Rs %d", Quantity17, Quantity17, Amount17);}
    if (Dish17==2){printf("\nDimsum          * %d servings = Rs 199 * %d = Rs %d", Quantity17, Quantity17, Amount17);}
    if (Dish17==3){printf("\nDumplings       * %d servings = Rs 149 * %d = Rs %d", Quantity17, Quantity17, Amount17);}
    if (Dish17==4){printf("\nChow Mein       * %d servings = Rs 129 * %d = Rs %d", Quantity17, Quantity17, Amount17);}
    if (Dish18==1){printf("\nHot Pot         * %d servings = Rs 999 * %d = Rs %d", Quantity18, Quantity18, Amount18);}
    if (Dish18==2){printf("\nDimsum          * %d servings = Rs 199 * %d = Rs %d", Quantity18, Quantity18, Amount18);}
    if (Dish18==3){printf("\nDumplings       * %d servings = Rs 149 * %d = Rs %d", Quantity18, Quantity18, Amount18);}
    if (Dish18==4){printf("\nChow Mein       * %d servings = Rs 129 * %d = Rs %d", Quantity18, Quantity18, Amount18);}
    if (Dish19==1){printf("\nHot Pot         * %d servings = Rs 999 * %d = Rs %d", Quantity19, Quantity19, Amount19);}
    if (Dish19==2){printf("\nDimsum          * %d servings = Rs 199 * %d = Rs %d", Quantity19, Quantity19, Amount19);}
    if (Dish19==3){printf("\nDumplings       * %d servings = Rs 149 * %d = Rs %d", Quantity19, Quantity19, Amount19);}
    if (Dish19==4){printf("\nChow Mein       * %d servings = Rs 129 * %d = Rs %d", Quantity19, Quantity19, Amount19);}
    if (Dish20==1){printf("\nHot Pot         * %d servings = Rs 999 * %d = Rs %d", Quantity20, Quantity20, Amount20);}
    if (Dish20==2){printf("\nDimsum          * %d servings = Rs 199 * %d = Rs %d", Quantity20, Quantity20, Amount20);}
    if (Dish20==3){printf("\nDumplings       * %d servings = Rs 149 * %d = Rs %d", Quantity20, Quantity20, Amount20);}
    if (Dish20==4){printf("\nChow Mein       * %d servings = Rs 129 * %d = Rs %d", Quantity20, Quantity20, Amount20);}
    if (Dish21==1){printf("\nMineral Water   * %d servings = Rs 20 * %d = Rs %d", Quantity21, Quantity21, Amount21);}
    if (Dish21==2){printf("\nCoca Cola       * %d servings = Rs 60 * %d = Rs %d", Quantity21, Quantity21, Amount21);}
    if (Dish21==3){printf("\nMaaza           * %d servings = Rs 40 * %d = Rs %d", Quantity21, Quantity21, Amount21);}
    if (Dish21==4){printf("\nSprite          * %d servings = Rs 50 * %d = Rs %d", Quantity21, Quantity21, Amount21);}
    if (Dish22==1){printf("\nMineral Water   * %d servings = Rs 20 * %d = Rs %d", Quantity22, Quantity22, Amount22);}
    if (Dish22==2){printf("\nCoca Cola       * %d servings = Rs 60 * %d = Rs %d", Quantity22, Quantity22, Amount22);}
    if (Dish22==3){printf("\nMaaza           * %d servings = Rs 40 * %d = Rs %d", Quantity22, Quantity22, Amount22);}
    if (Dish22==4){printf("\nSprite          * %d servings = Rs 50 * %d = Rs %d", Quantity22, Quantity22, Amount22);}
    if (Dish23==1){printf("\nMineral Water   * %d servings = Rs 20 * %d = Rs %d", Quantity23, Quantity23, Amount23);}
    if (Dish23==2){printf("\nCoca Cola       * %d servings = Rs 60 * %d = Rs %d", Quantity23, Quantity23, Amount23);}
    if (Dish23==3){printf("\nMaaza           * %d servings = Rs 40 * %d = Rs %d", Quantity23, Quantity23, Amount23);}
    if (Dish23==4){printf("\nSprite          * %d servings = Rs 50 * %d = Rs %d", Quantity23, Quantity23, Amount23);}
    if (Dish24==1){printf("\nMineral Water   * %d servings = Rs 20 * %d = Rs %d", Quantity24, Quantity24, Amount24);}
    if (Dish24==2){printf("\nCoca Cola       * %d servings = Rs 60 * %d = Rs %d", Quantity24, Quantity24, Amount24);}
    if (Dish24==3){printf("\nMaaza           * %d servings = Rs 40 * %d = Rs %d", Quantity24, Quantity24, Amount24);}
    if (Dish24==4){printf("\nSprite          * %d servings = Rs 50 * %d = Rs %d", Quantity24, Quantity24, Amount24);}
                            


/*printf("\n\n");
                        printf("|=======================================================|\n");
                        printf("|                       DEBUG CODE                      |\n");
                        printf("|=======================================================|\n");
                        printf("|Dish01 Dish02 Dish03 Dish04 Dish05 Dish06 Dish07 Dish08|\n");
                        printf("|   %d      %d      %d      %d      %d      %d      %d      %d  |\n",Dish1,Dish2,Dish3,Dish4,Dish5,Dish6,Dish7,Dish8);
                        printf("|Dish09 Dish10 Dish11 Dish12 Dish13 Dish14 Dish15 Dish16|\n");
                        printf("|   %d      %d      %d      %d      %d      %d      %d      %d  |\n",Dish9,Dish10,Dish11,Dish12,Dish13,Dish14,Dish15,Dish16);
                        printf("|Dish17 Dish18 Dish19 Dish20 Dish21 Dish22 Dish23 Dish24|\n");
                        printf("|   %d      %d      %d      %d      %d      %d      %d      %d  |\n",Dish17,Dish18,Dish19,Dish20,Dish21,Dish22,Dish23,Dish24);
                        printf("|=======================================================|\n");
printf("\n\n");    */



    int grossamt=Amount1+Amount2+Amount3+Amount4+Amount5+Amount6+Amount7+Amount8+Amount9+Amount10+Amount11+Amount12+Amount13+Amount14+Amount15+Amount16+Amount17+Amount18+Amount19+Amount20;
    int tax=grossamt*0.18;
    int netamt=grossamt+tax;
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\nGross Amount                              = Rs %d",grossamt);
    printf("\nCGST @ 9 %c                                = Rs %d",'%',tax/2);
    printf("\nSGST @ 9 %c                                = Rs %d",'%',tax/2);
    printf("\nNet Amount                                = Rs %d",netamt);
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n~~~~~~~~~~~|  THANKS FOR VISITING!  |~~~~~~~~~~~~~");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    

    printf("\n\n\n\n\n\n------------------END OF PROGRAM------------------\n\n\n\n\nThe program will quit in 60 seconds. Alternatively, you can manually close the program.\n\n");
    sleep(60);
    return 0;
}

/*
    printf("\n\n");
                        printf("|=======================================================|\n");
                        printf("|                       DEBUG CODE                      |\n");
                        printf("|=======================================================|\n");
                        printf("|Dish01 Dish02 Dish03 Dish04 Dish05 Dish06 Dish07 Dish08|\n");
                        printf("|   %d      %d      %d      %d      %d      %d      %d      %d  |\n",Dish1,Dish2,Dish3,Dish4,Dish5,Dish6,Dish7,Dish8);
                        printf("|Dish09 Dish10 Dish11 Dish12 Dish13 Dish14 Dish15 Dish16|\n");
                        printf("|   %d      %d      %d      %d      %d      %d      %d      %d  |\n",Dish9,Dish10,Dish11,Dish12,Dish13,Dish14,Dish15,Dish16);
                        printf("|Dish17 Dish18 Dish19 Dish20 Dish21 Dish22 Dish23 Dish24|\n");
                        printf("|   %d      %d      %d      %d      %d      %d      %d      %d  |\n",Dish17,Dish18,Dish19,Dish20,Dish21,Dish22,Dish23,Dish24);
                        printf("|=======================================================|\n");
    printf("\n\n");    
*/