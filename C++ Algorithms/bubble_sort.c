#include<stdio.h>

int main(){
    //implementation of bubble sort algorithm
    int unSortedList[5];
    
    for (int i = 0; i < 5; i++)
    {
        /* code */
        printf("Enter a number: ");
        scanf("%d",&unSortedList[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        /* code */
       for (int j = 0; j <4-i ; j++)
       {
        /* code */
        int x;
    

        if(unSortedList[j] > unSortedList[j+1]){
            //swaping elements in the list
            x = unSortedList[j];
            unSortedList[j]= unSortedList[j+1];
            unSortedList[j + 1] =x ;
        }
       }
    }
    for (int i = 0; i < 5; i++)
    {
        /* code */
        printf("%d, ",unSortedList[i]);
    }
    
    
}