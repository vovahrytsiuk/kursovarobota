#include "polinom.h"
#include "mainwindow.h"


Polinom::Polinom()
{

}

Polinom::Polinom(int power, vector<double> koefficients){
    this->power = power;
    this->koefficients = koefficients;
}

Polinom Polinom::differential(){
    Polinom dp;
    dp.power = this->power-1;
    dp.koefficients.resize(this->power, 0);
    for(int i = 0; i < this->power; i++){
           dp.koefficients[i] = this->koefficients[i+1]*(i+1);
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

                double k = stod(koef);


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
        double k = stod(temp);
        koefficients[0] +=k;

}

double Polinom::caclc_function(double x){
    double value = 0;
    for(auto i = 0; i < this->power+1; i++){
        value += pow(x, i)*koefficients[i];
    }
    return value;
}




string generate_equations(int power){
    string eq = "";
    for(int i = power; i > 1; i--){
        float koef = rand()%20000;
        koef /= 100;
        koef -=100;
        if(koef != 0){
            if(koef > 0) eq += "+";
            if(koef < 0) eq += "-";
            eq += to_string(abs(koef)) + "x^" + to_string(i);
        }
    }
    float koef = rand()%20000;
    koef /= 100;
    koef -=100;
    if(koef != 0){
        if(koef > 0) eq += "+";
        if(koef < 0) eq += "-";
    eq += to_string(abs(koef)) + "x";
    }
    koef = rand()%20000;
    koef /= 100;
    koef -=100;
    if(koef > 0) eq += "+";
    else eq += "-";
    eq += to_string(abs(koef)) + "=0";
    return eq;
}
