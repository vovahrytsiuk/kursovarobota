#include "solution.h"


Solution::Solution(){}

vector<double> Solution::bisection(Polinom p, double maxx, double minx, double e, int& iteration_number){
    vector<double> intervals = interval(p, maxx, minx);
    vector<double> roots;
    for(int i = 0; i < intervals.size() -1; i++){
        double lowx, hightx;
        lowx = intervals[i];
        hightx = intervals[i+1];
        while(abs(p.caclc_function((lowx+hightx)/2)) > e){
            if(p.caclc_function(lowx) * p.caclc_function((lowx+hightx)/2) < 0){
                hightx = (lowx+hightx)/2;
            }
            else{
                lowx = (lowx+hightx)/2;
            }
            iteration_number++;                         //інкрумент під час кожної ітерації
        }
        iteration_number++;                             // ще одне наближення виконається
        roots.push_back((lowx+hightx)/2);
    }
    return roots;
}

vector<double> Solution::interval(Polinom p, double maxx, double minx){
    int counter = 0;//визначає першу межу інтервалу, що розглядається
    vector<double> intervals;
    intervals.push_back(minx);
    const double dx = 0.1;
    float currentx = intervals[counter];
    while(currentx < maxx){
        currentx += dx;
        cout << p.caclc_function(currentx) * p.caclc_function(intervals[counter ])  << endl;
        if(p.caclc_function(currentx) * p.caclc_function(intervals[counter ]) < 0){
            intervals.push_back(currentx);
            counter ++;
        }
    }
    return intervals;
}



vector<double> Solution::methodNewton(Polinom p, double maxx, double minx, double e, int& iteration_number){
    vector<double> roots;
    vector<double> intervals = interval(p, maxx, minx);
    Polinom dp = p.differential();
    for(int i = 1; i < intervals.size(); i++){
        double x0 = intervals[i];
        double curx = x0-p.caclc_function(x0)/dp.caclc_function(x0);
        iteration_number++;                                 //оскільки вже виконане одне наближення
        while(abs(p.caclc_function(curx)) > e){
             curx = curx - p.caclc_function(curx)/dp.caclc_function(curx);
             iteration_number++;                            //інкрементуємо при кожній ітерації

        }
        roots.push_back(curx);
    }
    return roots;
}

vector<double> Solution::secantMethod(Polinom p, double maxx, double minx, double e, int& iteration_number){

    vector<double> roots;
    vector<double> intervals = interval(p, maxx, minx);
    for(int i = 1; i < intervals.size(); i++){
        double x0 = intervals[i];
        double x1 = intervals[i-1];
        double curx = x0-p.caclc_function(x0)/(p.caclc_function(x0)-p.caclc_function(x1))*(x0-x1);

        iteration_number++;                                 //оскільки вже виконано одне наближення

        while(abs(p.caclc_function(curx)) > e){
            x1 = x0;
            x0 = curx;
            curx = x0-p.caclc_function(x0)/(p.caclc_function(x0)-p.caclc_function(x1))*(x0-x1);

            iteration_number++;                             //інкремент під час кожного наближення
        }
        roots.push_back(curx);
    }
    return roots;
}


string Solution::res_to_string(vector<double> roots){
    string result = "x={";
    for(int i = 0; i < roots.size(); i++){
        result += " " + to_string(roots[i]) + ";";
    }
    if(result == "x={"){
        result = "No roots in input interval";
        return result;
    }
    result+="}";
    return result;
}

