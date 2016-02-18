# include <stdio.h>

// define structure
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
int N (struct date d)
{
    int result;
    result = (1461 * f(d.year, d.month) / 4 + 153 * g(d.month) / 5 + d.day);
    
    if ( d.year >= 1900 && d.month >= 3 && d.day >= 1 )
        result += 0;
    else if ( d.year >= 1800 && d.month >= 3 && d.day >= 1 )
        result += 1;
    else if ( d.year >= 1700 && d.month >= 3 && d.day >= 1 )
        result += 2;
    else
        result = 0;
    return result;
}

// function to get the absolute value of a number
int abs(int x)
{
    if ( x < 0 )
        x = -x;
    return x;
}
// main function where the program starts
int main (void)
{
    struct date date1 = {5, 5, 2005};
    struct date date2 = {5, 7, 2015};
    
    printf ("The DateDiff between %.2i/%.2i/%.4i and %.2i/%.2i/%.4i is ",
            date1.month, date1.day, date1.year, date2.month, date2.day,
            date2.year);
    printf ("%i\n", abs(N(date1) - N(date2)));

    return 0;
}
