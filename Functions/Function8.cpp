//Convert the temperature 

#include<iostream>
using namespace std;

double convertTemperature(double celsius) {
    double k = celsius + 273.15;
    double f = celsius * 1.80 + 32.00;

    double temp;
    cout<<k <<"," <<f;
}

int main(){
    double celsius;
    double ans;

    cout<< "Enter temperature in Celsius:";
    cin>> celsius;

    convertTemperature(celsius);
}