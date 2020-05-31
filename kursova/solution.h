#ifndef SOLUTION_H
#define SOLUTION_H

#include "polinom.h"


class Solution
{
    vector<double> interval(Polinom p, double maxx, double minx);
public:
    Solution();
    vector<double> bisection(Polinom p, double maxx, double minx, double e, int& iteration_nember);
    vector<double> methodNewton(Polinom p, double maxx, double minx, double e, int& iteration_number);
    vector<double> secantMethod(Polinom p, double maxx, double minx, double e, int& iteration_number);
    string res_to_string(vector<double> roots);
};


#endif // SOLUTION_H
