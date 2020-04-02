
#include <iostream>
#include <stdio.h>
#include <time.h>

void Delete(int *arr, int &len)
{
    for (int i = 0; i < len; ++i)
    {
        
        for (int j = 0; j < i; ++j)
        {
            if (arr[j] == arr[i])
            {
                arr[i] = arr[len - 1];
                --len;
                break;
            } 
        }
    }
}

void Sort(int *arr, int &len)
{
    int x, lok_i;
    for (int i = 1; i < len; ++i)
    {
        x = arr[i];
        lok_i = i - 1;
        
        //------
        while (lok_i >= 0 && arr[lok_i] > x)
        {
            arr[lok_i + 1] = arr[lok_i];
            lok_i--;
        }
        arr[lok_i + 1] = x;
    }
}

int main()
{
    int len;
    std::cout << "Input len array\n";
    std::cin  >> len;
    int *arr = new int[len];
    srand(time(NULL));

    for (int i = 0; i < len; ++i)
    {
        arr[i] = rand()%50;
        std::cout << arr[i] << " ";
    }

    Delete(arr, len);

    Sort(arr, len);
    
    std::cout << "\n";
    for (int i = 0; i < len; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
    return 0;
}

