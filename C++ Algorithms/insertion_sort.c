#include<stdio.h>

//implementing insertion sort
/*
Algorithm InsertionSort(A)
  for j = 2 to A.length
    key = A[j]
    // Insert A[j] into the sorted sequence A[1..j-1]
    i = j - 1
    while i > 0 and A[i] > key
      A[i + 1] = A[i]
      i = i - 1
    end while
    A[i + 1] = key
  end for
end InsertionSort
*/

//declariing variables
int main(){
int i,j,key;
int List[] = {45,67,23,12,332,44,1,1,2,12,12,12};
int size = sizeof(List)/sizeof(List[0]);

for( j = 2; j < size; j++){
    key = List[j];
    i = j - 1;
    while (i > 0 && List[i] >key)
    {
        /* code */
        List[i + 1] = List[i];
        i = i - 1;
    };
    List[i + 1 ] = key;
}
//printing List array
printf("Sorted list is : ");
for(i=0 ; i<=size-1 ; ++i){
    printf("%d ",List[i]);

}

return 0;
}