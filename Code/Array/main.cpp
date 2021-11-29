#include <iostream>
using namespace std;

/* Number of columns: it's constant, hence global */
const int sizeX = 10;
/* Number of rows: it's constant, hence global */
const int sizeY = 4;

/* Global var, as it's too big */
int matrix[sizeX][sizeY];

int main()
{
    for(int i=0; i<sizeX; i++)
        for(int j=0; j<sizeY; j++)
        {
            matrix[i][j] = j + (i * 100);
        }

    for(int i=0; i<sizeX; i++)
        for(int j=0; j<sizeY; j++)
            cout << "matrix[" << i << "][" << j << "] is " << matrix[i][j] << endl;

    return 0;
}