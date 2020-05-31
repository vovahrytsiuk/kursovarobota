#ifndef POLINOM_H
#define POLINOM_H

#include <vector>
#include <string>
#include <iostream>
#include <cmath>


using namespace std;

string generate_equations(int power);


class Polinom
{
    int power;//Степінь полінома
    vector<double> koefficients;//Коефіцієнти нелінійного алгебраїчного рівняння
public:
    Polinom();
    Polinom(int power, vector<double> koefficients);
    Polinom(int newpower, string input_polinom);
    friend class Solution;
    double caclc_function(double x);
    Polinom differential();
};






#endif // POLINOM_H
