#include <stdio.h>
#include <math.h>

float fun(int fun_item, float a)
{
    switch (fun_item)
    {
    case 1:
        return a;//y = x
        break;
    case 2:
        return sin(a);//y = sin(a);
        break;
    case 3:
        return cos(a);//y = cos(a);
        break;
    case 4:
        return exp(a);//y = exp(a);
        break;
    case 5:
        return pow(a, 3);//y = x^3
        break;
    case 6:
        return log(a);//y = ln(x)
        break;
    case 7:
        return sqrt(a);//y = x^1/2
        break;
    case 8:
        return pow(3, a);//y = 3^x
        break;
    default:
        return 0;
    }
}

float Integ(float a, float b, float e, int fun_item)
{
    float sum = 0;
    float x1 = 0, x2 = 0;

    for (int i = 0; i < (int)((b-a)/e); ++i)
    {
        x1 = fun(fun_item, a+(e*i));        
        x2 = fun(fun_item, a+(e*(i+1)));        
        sum += e*(x1 + x2)/2;
    }
    return sum;
}

int main()
{
    float a,b,e;
    int x;
    char m_print[8][10] = {{"x"},  {"sin"},
                           {"cos"},{"exp"},
                           {"x^3"},{"ln(x)"},
                           {"x^0.5"},{"3^x"}};

    puts("Input a and b: ");
    scanf("%f%f", &a, &b);

    puts("Input e: ");
    scanf("%f", &e);


    puts("Input 1-8 for use function: ");
    for (int i = 0; i < 8; ++i)
    {
        printf("%d : %s \n",(i+1),m_print[i]);
    }
    scanf("%d", &x);

    a = Integ(a, b, e, x);

    printf("%f \n",a);
}
