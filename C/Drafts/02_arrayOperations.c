#include <stdio.h>
#include <stdlib.h>
int main()
{
    /** // normal declaration and intilisation
    int markofclass[3];
    markofclass[0] = 1;
    printf("marks of student with roll no: %d\n\n", markofclass[0]);
    **/
    /** // loop declaration and intilisation and printing/traversal
    for(int i=0; i<3; i++)
    {
        printf("Enter the %d element of the array: ", i);
        scanf("%d", &markofclass[i]);
    }
    for(int j=0; j<3; j++)
    {
        printf("The %d element of the array is: %d\n", j, markofclass[j]);
    }
    **/
    /** // direct intialisation and printing
    int markofclass[3]={1,2,3};
    printf("%d %d %d", markofclass[0], markofclass[1], markofclass[2]);
    **/

    /** // direct intialisation and printing without declaring array's size
    int markofclass[] = {1, 69, 696};
    printf("%d %d %d", markofclass[0], markofclass[1], markofclass[2]);
    **/

    
    int matrix[2][3][4] = {{{ 10, 20, 30,55 }, {40, 50, 60,55 }, {23, 23,4,5}}, 
    {{13, 523,14,15}, {13, 523,14,15}, {13, 523,14,15}}};
    printf("printing the 3x4 matrix below:\n");
    for(int k=0; k<2;k++)
    {
        for(int l=0;l<3; l++)
        {
            for(int m=0;m<4; m++)
            {
                printf("%d ", matrix[k][l][m]);
            }
            printf("\n");
        }
        printf("\n");
    }
 


    
    return 0;
}