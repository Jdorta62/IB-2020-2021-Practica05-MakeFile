#include <iostream>
#include <string>
using namespace std;

  int main () {

    double Kpi;
    float pidecimals;
    string nombre_descubridor; 
    int year_of_discovery; 

    const double& Krefpi = Kpi;
    float& decimals = pidecimals;
    string& name = nombre_descubridor;
    int& year = year_of_discovery;

    cout << "El tipo de datos de la variable Kpi se representa utilizando " << sizeof (Kpi) << " bytes" << endl;
    cout << endl;  

    cout << "El tipo de datos de la variable pidecimals se representa utilizando " << sizeof (pidecimals) << " bytes" << endl;
    cout << endl;

    cout << "El tipo de datos de la variable nombre_descubridor se representa utilizando " << sizeof (nombre_descubridor) << " bytes" << endl;
    cout << endl;

    cout << "El tipo de datos de la variable year_of_discovery se representa utilizando " << sizeof (year_of_discovery) << " bytes" << endl;
    cout << endl;    

    cout << "El tipo de datos de la referencia Krefpi se representa utilizando " << sizeof (Krefpi) << " bytes" << endl;
    cout << endl;

    cout << "El tipo de datos de la referencia decimals se representa utilizando " << sizeof (decimals) << " bytes" << endl;
    cout << endl;   

    cout << "El tipo de datos de la referencia name se representa utilizando " << sizeof (name) << " bytes" << endl;
    cout << endl;

    cout << "El tipo de datos de la referencia year se representa utilizando " << sizeof (year) << " bytes" << endl;        
    cout << endl;

    cout << "Usando el operador de comparación == vemos que Krefpi == Kpi es: " << (Kpi == Krefpi) << endl;
    cout << endl;

    cout << "Usando el operador de comparación == vemos que decimals == pidecimals es: " << (decimals == pidecimals) << endl;
    cout << endl;

    cout << "Usando el operador de comparación == vemos que name == nombre_descubridor es: " << (name == nombre_descubridor) << endl;
    cout << endl;

    cout << "Usando el operador de comparación == vemos que year == year_of_discovery es: " << (year == year_of_discovery) << endl;
    cout << endl;


    
    return 0;










  }