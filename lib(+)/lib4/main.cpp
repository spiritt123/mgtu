
#include <iostream>
#include <time.h>



int main(){
	
	int arr[3][4];
	srand(time(NULL));

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            arr[i][j] = rand()%50 - 20;
            std::cout << arr[i][j] << '\t';
        }
        std::cout << '\n';
    }

    int count = 0;
    int min_pos = 5;
    for (int i = 0; i < 3; ++i)
    {
        int i_pos = 0;
        for (int j = 0; j < 4; ++j)
        {
            if (arr[i][j] > 0)
            {
                i_pos++;
            }
        }
        if ((min_pos > i_pos))
        {
            count = i;
            min_pos = i_pos;
        }
    }

    std::cout << '\n';

    for (int i = 0; i < 4; ++i)
    {
        std::cout << &(arr[count][i]) << '\n';
    }

    std::cout << '\n';

    for (int i = 0; i < 3; ++i)
    {
        if (i > count)
        {
            for (int j = 0; j < 4; ++j)
            {
                arr[i - 1][j] = arr[i][j];
            }
        }
    }

    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            std::cout << arr[i][j] << '\t';
        }
        std::cout << '\n';
    }

	return 0;
}