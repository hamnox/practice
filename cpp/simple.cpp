#include <iostream>
using namespace std;

// declarations
void static_arrays();

int main()
{
    static_arrays();
}

void static_arrays()
{
    int my_array [5] = { 0, 1, 3, 2, 4 };
    // apparently 
    //      int my_array [5];
    //      my_array = { 0, 1, 3, 2, 4 };
    // is not an option I can use.

    char easy_assign[] = { 'a','b','c' };

    cout << "the second letter is: " << easy_assign[1];
    cout << "\n";

    int const X_DIM = 5;
    int const Y_DIM = 4;

    int xy_array[X_DIM][Y_DIM];
    xy_array[0][0] = 1;
    xy_array[0][1] = 1;

    // for loops, the only way to really access all o' an array
    int temp = 0;
    for ( int y=0 ; y<Y_DIM ; y++ )
    {
        for ( int x=0 ; x<X_DIM ; x++ )
        {
            if ( x==0 || x==1 )
            {
                if ( y==0 )
                {
                    xy_array[x][y] = 1;
                    cout << "[" << x <<"]";
                    cout << "[" << y <<"]";
                    cout << " = " << xy_array[x][y] << "\n";
                    continue;
                }
                if ( x==0 )
                {
                    xy_array[x][y] = xy_array[X_DIM-1][y-1]
                            + xy_array[X_DIM-2][y-1];
                    cout << "[" << x <<"]";
                    cout << "[" << y <<"]";
                    cout << " = " << xy_array[x][y] << "\n";
                }
                else
                {
                    xy_array[x][y] = xy_array[X_DIM-1][y-1]
                            + xy_array[x-1][y];
                    cout << "[" << x <<"]";
                    cout << "[" << y <<"]";
                    cout << " = " << xy_array[x][y] << "\n";

                }

            } else
            {
                xy_array[x][y] = xy_array[x-2][y] + xy_array[x-1][y];
                cout << "[" << x <<"]";
                cout << "[" << y <<"]";
                cout << " = " << xy_array[x][y] << "\n";
            }
        }

    }

    // arrays done like this are static, so don't need freeing
}

//TODO: Do a dynamic memory array.

