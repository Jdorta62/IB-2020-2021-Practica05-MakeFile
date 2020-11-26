#include <iostream>
#include <string>
using namespace std;

  int main () {

    const double Kpi(3.14159265);
    float pidecimals{31.4};
    string nombre_descubridor = "Emma Haruka Iwao";
    int year_of_discovery = (2019);

    const double& Krefpi = Kpi;
    float& decimals = pidecimals;
    string& name = nombre_descubridor;
    int& year = year_of_discovery;



    cout << "El valor más preciso conocido de pi (" << Kpi 
    << ") tiene más de " << pidecimals << " billones de decimales y fue descubierto en " 
    << year_of_discovery << " por " << nombre_descubridor << endl;

    cout << endl;

    cout << "El valor más preciso conocido de pi (" << Krefpi
    << ") tiene más de " << decimals << " billones de decimales y fue descubierto en " 
    << year << " por " << name << endl;

    return 0;

}