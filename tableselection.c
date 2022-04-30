#include <stdio.h>
#include <string.h>

int main()
{   
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    int visitors;
    int emptyseats=50;
    int availableseats=50;
    int T0 =0; //2 seater
    int T1 =0; //2 seater
    int T2 =0; //2 seater
    int T3 =0; //4 seater
    int T4 =0; //4 seater
    int T5 =0; //4 seater
    int T6 =0; //6 seater
    int T7 =0; //6 seater
    int T8 =0; //6 seater
    int T9 =0; //6 seater
    int T10=0;//8 seater
    char assignedtable[] = "INVALIDTABLE";

    start:;

    printf("\n\n\n\nWelcome to Oishii Restaurant!");
// SECTION FOR VISITOR NUMBER SELECTION
    printf("\nPlease enter the number of visitors:");
    scanf("%d", &visitors);
        if (visitors<=50)
            {
                printf("The number of visitors is %d.", visitors);
                    if(visitors<=2 && visitors>0)
                    {
                        if      (T0==0 && T1==0 && T2==0)
                            {   
                                strcpy (assignedtable, "T0");
                                printf("\n\nYour Table Number is %s.", assignedtable);
                                goto t0valuechange;
                            }
                        else if (T0==1 && T1==0 && T2==0)
                            {   
                                strcpy (assignedtable, "T1");
                                printf("\n\nYour Table Number is %s.", assignedtable);
                                goto t1valuechange;
                            }
                        else if (T0==1 && T1==1 && T2==0)
                            {   
                                strcpy (assignedtable, "T2");
                                printf("\n\nYour Table Number is %s.", assignedtable);
                                goto t2valuechange;
                            }
                        else if (T0==1 && T1==1 && T2==1)
                            {   
                                strcpy (assignedtable, "INVALIDTABLE");
                                printf("\n\nNo more 2 seater tables available. Looking for 4 seater tables.");
                                goto override1;
                            }
                        else {printf("\n\n\n\nThe software has encountered an unexpected output. Please contact the manager.");}
                    }
            else if(visitors<=4 && visitors>2)
                    {override1:;
                        if      (T3==0 && T4==0 && T5==0)
                            {   
                                strcpy (assignedtable, "T3");
                                printf("\n\nYour Table Number is %s.", assignedtable);
                                goto t3valuechange;
                            }
                        else if (T3==1 && T4==0 && T5==0)
                            {   
                                strcpy (assignedtable, "T4");
                                printf("\n\nYour Table Number is %s.", assignedtable);
                                goto t4valuechange;
                            }
                        else if (T3==1 && T4==1 && T5==0)
                            {   
                                strcpy (assignedtable, "T5");
                                printf("\n\nYour Table Number is %s.", assignedtable);
                                goto t5valuechange;
                            }
                        else if (T3==1 && T4==1 && T5==1)
                            {   
                                strcpy (assignedtable, "INVALIDTABLE");
                                printf("\n\nNo more 4 seater tables available. Looking for 6 seater tables.");
                                goto override2;
                            }
                        else {printf("\n\n\n\nThe software has encountered an unexpected output. Please contact the manager.");}
                    }    
            else if(visitors<=6 && visitors>4)
                    {override2:;
                        if      (T6==0 && T7==0 && T8==0 && T9==0)
                            {   
                                strcpy (assignedtable, "T6");
                                printf("\n\nYour Table Number is %s.", assignedtable);
                                goto t6valuechange;
                            }
                        else if (T6==1 && T7==0 && T8==0 && T9==0)
                            {   
                                strcpy (assignedtable, "T7");
                                printf("\n\nYour Table Number is %s.", assignedtable);
                                goto t7valuechange;
                            }
                        else if (T6==1 && T7==1 && T8==0 && T9==0)
                            {   
                                strcpy (assignedtable, "T8");
                                printf("\n\nYour Table Number is %s.", assignedtable);
                                goto t8valuechange;
                            }
                        else if (T6==1 && T7==1 && T8==1 && T9==0)
                            {   
                                strcpy (assignedtable, "T9");
                                printf("\n\nYour Table Number is %s.", assignedtable);
                                goto t9valuechange;
                            }
                        else if (T6==1 && T7==1 && T8==1 && T9==1)
                            {   
                                strcpy (assignedtable, "INVALIDTABLE");
                                printf("\n\nNo more 6 seater tables available. Looking for 8 seater tables.");
                                goto override3;
                            }
                        else {printf("\n\n\n\nThe software has encountered an unexpected output. Please contact the manager.");}
                    }    
            else if(visitors<=8 && visitors>6)
                    {override3:;
                        if      (T10==0)
                            {   
                                strcpy (assignedtable, "T10");
                                printf("\n\nYour Table Number is %s.", assignedtable);
                                goto t10valuechange;
                            }
                        else {printf("\n\nUnfortunately no tables are available. Please contact the manager.");}
                    }    
            }
            else if(visitors>8)
                    {
                        
                    }
        else
            {
                printf("\n\nThe number of visitors is %d.\nUnfortunately, we would not be able to accomodate you, as we do not have enough seating capacity. \nPlease visit back later!", visitors);
            }
    goto start;
    
// SECTION FOR MENU SELECTION
    return 0;

t0valuechange:;
T0=1;
goto start;

t1valuechange:;
T1=1;
goto start;

t2valuechange:;
T2=1;
goto start;

t3valuechange:;
T3=1;
goto start;

t4valuechange:;
T4=1;
goto start;

t5valuechange:;
T5=1;
goto start;

t6valuechange:;
T6=1;
goto start;

t7valuechange:;
T7=1;
goto start;

t8valuechange:;
T8=1;
goto start;

t9valuechange:;
T9=1;
goto start;

t10valuechange:;
T10=1;
goto start;


}