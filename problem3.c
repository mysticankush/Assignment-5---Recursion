 /*  Program for tower of hanoi
 * Compilation : gcc problem3.c
 * Execution : ./a.out
 *
 * Ankush Chhabra 1910990144 5-08-2021
 * Assignment_5 -> Recursion
*/
#include <stdio.h>

// total moves required to move n disk from source to destination
int required_moves=0;
void tower_of_hanoi(int n, char from, char to, char aux){
    
    if (n == 0)
        return;
    
    // move (n-1)th disks to aux from source
    tower_of_hanoi(n-1, from, aux, to);

    // move nth disk to destination from source
    printf("\n Move disk %d from rod %c to rod %c", n, from, to);

    required_moves++;

    // move (n-1)th disk to destination from aux
    tower_of_hanoi(n-1, aux, to, from);

}
int main() {

    tower_of_hanoi(3,'A','C','B');
    //print the required moves to move disk from source A to destination C 
    printf(" \nRequired number of moves are :- %d",required_moves);

    return 0;
}
