#ifndef POLINOM_H
#define POLINOM_H

#include <vector>
#include <string>
#include <iostream>
#include <cmath>


using namespace std;


class Polinom
{
    int power;//Степінь полінома
    vector<float> koefficients;//Коефіцієнти нелінійного алгебраїчного рівняння
public:
    Polinom();
    Polinom(int newpower, string input_polinom);
    friend class Solution;
    float caclc_function(float x);
    Polinom differential();
};


class Solution
{
    vector<float> interval(Polinom p, float maxx, float minx);
public:
    Solution();
    vector<float> bisection(Polinom p, float maxx, float minx, double e);
    vector<float> methodNewton(Polinom p, float maxx, float minx, double e);
    vector<float> secantMethod(Polinom p, float maxx, float minx, double e);
};

string res_to_string(vector<float> roots);


#endif // POLINOM_H
