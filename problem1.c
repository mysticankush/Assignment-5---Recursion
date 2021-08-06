/*  Program for selection sort using recursion
 * Compilation : gcc problem1.c
 * Execution : ./a.out
 *
 * Ankush Chhabra 1910990144 5-08-2021
 * Assignment_5 -> Recursion
*/
#include<stdio.h>

int findmin(int a[], int i, int j)
{
    if (i == j)
        return i;
 
    int k = findmin(a, i + 1, j);
 
    if(a[i] < a[k])
        return i;
    else
        return k;
}

//functio to swap two elements
void customswap(int *a,int i,int j){
    
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
    
}
// function to sort the array
void selection_sort(int *a,int n,int curidx){
    if(curidx == n)
        return;
    //function to find minimum element from curidx to n-1 using recursion
    int k = findmin(a,curidx,n-1);
    
    // if minIndex is not equal to current index then swap minIndex with current index
    if(k!=curidx){
        customswap(a,k,curidx);
    }
    
    selection_sort(a,n,curidx+1);
}

int main()
{
    int n;

    printf("Enter the size of array : ");    
    scanf("%d",&n);

    int a[n+2];
    
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    //function to sort the array using selection sort
    selection_sort(a,n,0);
    printf("Elements of array are : - \n");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    
    return 0;
}
