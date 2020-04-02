#include <stdio.h>
#include <math.h>

float Line(float a)
{
    return a;
}
float Sin(float a)
{
    return sin(a);
}
float Cos(float a)
{
    return cos(a);
}
float Exp(float a)
{
    return exp(a);
}
float Pow_a_3(float a)
{
    return pow(a, 3);
}
float Log(float a)
{
    return log(a);
}
float Sqrt(float a)
{
    return sqrt(a);
}
float Pow_3_a(float a)
{
    return pow(3, a);
}



float (*fun(int fun_item))(float)
{
    switch (fun_item)
    {
    case 1:
        return Line;//y = x
        break;
    case 2:
        return Sin;//y = sin(a);
        break;
    case 3:
        return Cos;//y = cos(a);
        break;
    case 4:
        return Exp;//y = exp(a);
        break;
    case 5:
        return Pow_a_3;//y = x^3
        break;
    case 6:
        return Log;//y = ln(x)
        break;
    case 7:
        return Sqrt;//y = x^1/2
        break;
    case 8:
        return Pow_3_a;//y = 3^x
        break;
    default:
        return Pow_3_a;
    }
}

float Integ(float a, float b, float e, int fun_item)
{
    float sum = 0;
    float x1 = 0, x2 = 0;
    float (*function)(float) = fun(fun_item);
    for (int i = 0; i < (int)((b-a)/e); ++i)
    {
        x1 = function(a+(e*i));        
        x2 = function(a+(e*(i+1)));        
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
