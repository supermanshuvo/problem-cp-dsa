/**
 * @file lightOj-1216.cpp
 * @author supermanshuvo (shuvothesuperman@gmail.com)
 * @brief LOJ 1216 - Juice in the Glass
 * @version 0.1
 * @date 2022-02-04
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
#include <math.h>

int main()
{
    double pi, r3;
    pi = 2.0*acos(0.0);
    int t, r1, r2, h, p;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        scanf("%d %d %d %d", &r1, &r2, &h, &p);
        r3 = p/(h * 1.0) * (r1 - r2)  + r2;
        printf("Case %d: %.10lf\n", i, (pi / 3.0) * p * (r3 * r3 + r2 * r2 + (r3 * r2)));
    }
    return 0;
}