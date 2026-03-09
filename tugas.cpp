#include <iostream>
using namespace std;

float hitung_BMI(float a,float b){
    return a/(b*b);
}

string condition_BMI(float r){
    if (r >= 30)
    return "Obesitas";
else if (r >= 25)
    return "Berat Badan Berlebihan";
else if (r >= 18.5)
    return "Berat Badan Normal";
else
    return "Berat Badan Kurang";
}

int main (){
    float berat,tinggi,Hasil;
    string Status;

    
}

