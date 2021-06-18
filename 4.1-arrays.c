#include <stdio.h>

int main()
{
    //int //ages[5]; // statically sized; indexing at 0
    int ages[] = {1, 4, 60, 43, 54, 3, 90, 31};
    int size = 8;
    
    for(int i = 0; i < size; i++)
    {
        printf("%d ", ages[i]);
    }
    printf("\n");
    
    // Multidimension
    int rows = 3;
    int const columns = 4;

    int studentGrades[][4] = { //size for parent array must be known
        {1, 3, 4, 6},
        {3, 2, 4, 5},
        {32, 2, 4, 9}
    };

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            printf("%d ", studentGrades[i][j]);
        }
        printf("\n");
    }
    return 0;
}