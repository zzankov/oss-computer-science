# include <stdio.h>

// declare structure
struct date
{
    int   month;
    int   day;
    int   year;
};

// function f to return x1 in the equation for N
int f ( int year, int month)
{
    return (month <= 2 ? year - 1 : year);
}

// function g to return x2 in the equation for N
int g ( int month )
{
    return (month <= 2 ? month + 13 : month + 1);
}

// function N which takes a year and returns an integer based on an equation
// this formula will be used to calculate the difference between 2 dates
long int N (struct date d)
{
    long int result, check0, check1, check2;
    result = (1461 * f(d.year, d.month) / 4 + 153 * g(d.month) / 5 + d.day);
    check0 = (1461 * f(1700, 3) / 4 + 153 * g(3) / 5 + 1);
    check1 = (1461 * f(1800, 3) / 4 + 153 * g(3) / 5 + 1);
    check2 = (1461 * f(1900, 3) / 4 + 153 * g(3) / 5 + 1);

    if (result < check0)
        result = 0;
    else if (result < check1)
        result += 2;
    else if (result < check2)
        result += 1;

    return result;
}

// function to display the day of the week
void weekday (struct date d)
{
    switch ((N(d) - 621049) % 7)
    {
        case 0:
            printf ("Sunday");
            break;
        
        case 1:
            printf ("Monday");
            break;
        
        case 2:
            printf ("Tuesday");
            break;
   
        case 3:
            printf ("Wednesday");
            break;
    
        case 4:
            printf ("Thursday");
            break;
  
        case 5:
            printf ("Friday");
            break;
   
        case 6:
            printf ("Saturday");
            break;
    
        default: 
            printf ("Invalid day");
            break;
    };
}

int main(void)
{
    struct date dates[5] = 
    { 
        {  2, 21, 2016 }, {  9, 20, 1986 }, { 10,  3, 1988 },
        {  5, 25, 1957 }, {  1,  7, 1961 }
    };

    for ( int i = 0; i < 5; i++ )
    {
        printf ("dates[%i] = ", i);
        weekday(dates[i]);
        printf ("\t%li", N(dates[i]));
        printf ("\n");
    }

    return 0;
}
