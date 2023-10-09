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

    for (int i = 0; i < 4; i++)
    {
        /* code */
       
        int x;
        int y;
        x = unSortedList[i];
        y = unSortedList[i+1];

        if(x > y){
            //swaping elements in the list
            unSortedList[i]= y;
            unSortedList[i+1]= x;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        /* code */
        printf("%d, ",unSortedList[i]);
    }
    
    
}