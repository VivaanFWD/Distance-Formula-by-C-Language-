#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
int main()
{
/*
    float x,y;

    printf("Enter Value of X: ");
    scanf("%f",&x);

    printf("Enter Value of Y: ");
    scanf("%f",&y);

    if(x>0 && y>0){
        printf("\n\nGiven Co-ordinate (%f,%f) is lies in First Quadrant... \n",x,y);
    }
    else if(x<0 && y>0){
        printf("\n\nGiven Co-ordinate (%f,%f) is lies in Second Quadrant... \n",x,y);
    }
    else if(x<0 && y<0){
        printf("\n\nGiven Co-ordinate (%f,%f) is lies in Third Quadrant... \n",x,y);
    }
    else if (x>0 && y<0){
        printf("\n\nGiven Co-ordinate (%f,%f) is lies in Forth Quadrant... \n",x,y);
    }
    else{
        printf("\n\nGiven Co-ordinate (%f,%f) lies on Center (0,0)... \n",x,y);
    }
*/
//Distance Formula...
//d=sqrt((X2-X1)^2 + (Y2-Y1)^2)

    float x1,y1,x2,y2,d;
    printf("//Credit:\n//--Developed By Vivaan\n//--Contact @VivaanFWD\n//--SourceCode Avail on Github @VivaanFWD\n//--Program Type: Console\n//--Language_Used:C_Language");
//Credit:
//--Developed By Vivaan
//--Contact @VivaanFWD
//--SourceCode Avail on Github @VivaanFWD
//--Program Type: Console
    //Taking First Point Value... (X1,Y1)
    printf("\n\nEnter value of X1:\n");
    scanf("%f",&x1);
    printf("Enter Value of Y1:\n");
    scanf("%f",&y1);

    //Show Initial Point to User
    printf("\n>>Initial Point is (%.2f,%.2f)\n",x1,y1);
//-------------------------------------------------------------------------------------------------------------------------------
    if(x1>0 && y1>0){
            printf("\n\nGiven Co-ordinate (%.2f,%.2f) is lies in First Quadrant... \n",x1,y1);
        }
        else if(x1<0 && y1>0){
            printf("\n\nGiven Co-ordinate (%.2f,%.2f) is lies in Second Quadrant... \n",x1,y1);
        }
        else if(x1<0 && y1<0){
            printf("\n\nGiven Co-ordinate (%.2f,%.2f) is lies in Third Quadrant... \n",x1,y1);
        }
        else if (x1>0 && y1<0){
            printf("\n\nGiven Co-ordinate (%.2f,%.2f) is lies in Forth Quadrant... \n",x1,y1);
        }
        else{
            printf("\n\nGiven Co-ordinate (%.2f,%.2f) lies on Center (0,0)... \n",x1,y1);
        }
//-------------------------------------------------------------------------------------------------------------------------------

    printf("\n________________________________________________________________\n");

    //Taking Second Point Value... (X2,Y2)
    printf("Enter Value of X2:\n");
    scanf("%f",&x2);
    printf("Enter Value of Y2:\n");
    scanf("%f",&y2);

    //Show Final Point to User
    printf("\n>>Final Point is (%.2f,%.2f)",x2,y2);
//-------------------------------------------------------------------------------------------------------------------------------
    if(x2>0 && y2>0){
            printf("\n\nGiven Co-ordinate (%.2f,%.2f) is lies in First Quadrant... \n",x2,y2);
        }
        else if(x2<0 && y2>0){
            printf("\n\nGiven Co-ordinate (%.2f,%.2f) is lies in Second Quadrant... \n",x2,y2);
        }
        else if(x2<0 && y2<0){
            printf("\n\nGiven Co-ordinate (%.2f,%.2f) is lies in Third Quadrant... \n",x2,y2);
        }
        else if (x2>0 && y2<0){
            printf("\n\nGiven Co-ordinate (%.2f,%.2f) is lies in Forth Quadrant... \n",x2,y2);
        }
        else{
            printf("\n\nGiven Co-ordinate (%.2f,%.2f) lies on Center (0,0)... \n",x2,y2);
        }
//-------------------------------------------------------------------------------------------------------------------------------


    printf("\n________________________________________________________________\n");
    //Distance Formulae --> d=sqrt((X2-X1)^2 + (Y2-Y1)^2)...

    d=sqrt(pow(x2-x1,2) + pow(y2-y1,2));

    printf("\n\nDistance between Initial Point (%.2f,%.2f) and Terminal Point (%.2f,%.2f) is %.2f\n",x1,y1,x2,y2,d);

    printf("\nExit WithOut Any Error 0x003f3(0)\nHave a Good Day!");



}
