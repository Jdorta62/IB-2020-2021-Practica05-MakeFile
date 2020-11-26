#include <iostream>
using namespace std;

int main () {

  int knumber1{46};
  int knumber2{12};

    cout << "El resultado de operar -46 es: " << -knumber1 << endl;
    cout << "El resultado de operar +12 es: " << -knumber2 << endl;
    cout << "El resultado de operar 46 + 12 es: " << knumber1 + knumber2  << endl;
    cout << "El resultado de operar 46 - 12 es: " << knumber1 - knumber2 << endl;
    cout << "El resultado de operar 46 * 12 es: " << knumber1 * knumber2 << endl;
    cout << "El resultado de operar 46 / 12 es: " << knumber1 / knumber2 << endl;
    cout << "El resultado de operar 46 % 12 es: " << knumber1 % knumber2 << endl;
    cout << "El resultado de operar 46 ~ 12 es: " << (~knumber2) << endl;
    cout << "El resultado de operar 46 & 12 es: " << (knumber1 & knumber2) << endl;
    cout << "El resultado de operar 46 | 12 es: " << (knumber1 | knumber2) << endl;
    cout << "El resultado de operar 46 ^ 12 es: " << (knumber1 ^ knumber2) << endl;
    cout << "El resultado de operar 46 << 12 es: " << (knumber1 << knumber2) << endl;
    cout << "El resultado de operar 46 >> 12 es: " << (knumber1 >> knumber2) << endl;

    cout << endl;

    cout << "El resultado de comparar 46 == 12 es:" << (knumber1 == knumber2)  << endl;
    cout << "El resultado de comparar 46 != 12 es:" << (knumber1 != knumber2)  << endl;
    cout << "El resultado de comparar 46 < 12 es:" << (knumber1 < knumber2)  << endl;
    cout << "El resultado de comparar 46 > 12 es:" << (knumber1 > knumber2)  << endl;
    cout << "El resultado de comparar 46 <= 12 es:" << (knumber1 <= knumber2)  << endl;
    cout << "El resultado de comparar 46 >= 12 es:" << (knumber1 >= knumber2)  << endl;

    return 0;

}
