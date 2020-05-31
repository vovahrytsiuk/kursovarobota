#include "polinom.h"
#include "mainwindow.h"


Polinom::Polinom()
{

}

Polinom Polinom::differential(){
    Polinom dp;
    dp.power = this->power-1;
    dp.koefficients.resize(this->power, 0);
    for(int i = 0; i < this->power; i++){
           dp.koefficients[i] = this->koefficients[i+1]*(i+1);
           cout << dp.koefficients[i] << endl;
       }
    return dp;
}


Polinom::Polinom(int newpower, string input_polinom){
    this->power = newpower;
        this->koefficients.resize(newpower+1, 0);
        int counter = 0;

        for(int j = power; j > 0; j--){
            string temp_pol = "x^";
            temp_pol += to_string(j);
            if(j == 1) temp_pol = "x";



                auto pointer = input_polinom.find(temp_pol, counter);
                if(pointer == -1){
                    koefficients[j] = 0;
                    continue;
                }
                if(input_polinom[pointer -1] == '*'){
                    pointer--;
                }
                string koef = "";
                for(; counter < pointer; counter++){

                    if(input_polinom[counter] != ' ') koef += input_polinom[counter];
                }
                if(koef == "") koef = "0";

                float k = stof(koef);


                if(k == 0){
                    k = 1;
                }
                koefficients[j] += k;

                while(input_polinom[counter] != '+' && input_polinom[counter] != '-' && input_polinom[counter] != '='){

                    counter ++;
                }
                if(input_polinom[counter] == '=') break;
                pointer = input_polinom.find(temp_pol, counter);
                if(pointer != -1){
                    j++;
                }

        }
        string temp = "";
        while(input_polinom[counter] != '='){
            temp += input_polinom[counter];
            counter ++;
        }
        if(temp == "") temp = "0";
        float k = stof(temp);
        koefficients[0] +=k;

}

float Polinom::caclc_function(float x){
    float value = 0;
    for(auto i = 0; i < this->power+1; i++){
        value += pow(x, i)*koefficients[i];
    }
    return value;
}



Solution::Solution(){}

vector<float> Solution::bisection(Polinom p, float maxx, float minx, double e){
    vector<float> intervals = interval(p, maxx, minx);
    vector<float> roots;
    for(int i = 0; i < intervals.size() -1; i++){
        float lowx, hightx;
        lowx = intervals[i];
        hightx = intervals[i+1];
        while(abs(p.caclc_function((lowx+hightx)/2)) > e){
            if(p.caclc_function(lowx) * p.caclc_function((lowx+hightx)/2) < 0){
                hightx = (lowx+hightx)/2;
            }
            else{
                lowx = (lowx+hightx)/2;
            }
        }
        roots.push_back((lowx+hightx)/2);
    }
    for(int i = 0; i < roots.size(); i++){
        cout << roots[i] << endl;
    }
    cout << roots.size() << endl;
    return roots;
}

vector<float> Solution::interval(Polinom p, float maxx, float minx){
    int counter = 0;//визначає першу межу інтервалу, що розглядається
    vector<float> intervals;
    intervals.push_back(minx);
    const float dx = 0.1;
    float currentx = intervals[counter];
    while(currentx < maxx){
        currentx += dx;

        if(p.caclc_function(currentx) * p.caclc_function(intervals[counter ]) < 0){
            intervals.push_back(currentx);

            counter ++;
        }
    }
    for(int i = 0; i < intervals.size(); i++){
        cout << intervals[i] << endl;
    }
    return intervals;
}


string res_to_string(vector<float> roots){
    string result = "x=";
    for(int i = 0; i < roots.size(); i++){
        result += to_string(roots[i]) + ";\t";
    }
    if(result == "x="){
        result = "No roots in input interval";
    }
    return result;
}

vector<float> Solution::methodNewton(Polinom p, float maxx, float minx, double e){
    vector<float> roots;
    vector<float> intervals = interval(p, maxx, minx);
    Polinom dp = p.differential();
    for(int i = 1; i < intervals.size(); i++){
        float x0 = intervals[i];

        float curx = x0-p.caclc_function(x0)/dp.caclc_function(x0);
        cout << curx << endl;
        while(abs(p.caclc_function(curx)) > e){
             curx = curx - p.caclc_function(curx)/dp.caclc_function(curx);
        }
        roots.push_back(curx);
    }
    return roots;
}

vector<float> Solution::secantMethod(Polinom p, float maxx, float minx, double e){

    vector<float> roots;
    vector<float> intervals = interval(p, maxx, minx);
    for(int i = 1; i < intervals.size(); i++){
        float x0 = intervals[i];
        float x1 = intervals[i-1];
        float curx = x0-p.caclc_function(x0)/(p.caclc_function(x0)-p.caclc_function(x1))*(x0-x1);
        while(abs(p.caclc_function(curx)) > e){
            x1 = x0;
            x0 = curx;
            curx = x0-p.caclc_function(x0)/(p.caclc_function(x0)-p.caclc_function(x1))*(x0-x1);
        }
        roots.push_back(curx);
    }
    return roots;
}
