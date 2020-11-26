#include <iostream>
using namespace std;

    int main () {

        bool t{true};
        bool f{false};

            cout << "a " << " b " << " a and b " << " a or b " << " not a " << " not b" << endl;

            cout << "----------------------------------" << endl;

            cout << f << "  " << t << "     " << (f&&t) <<  "       " << (f||t) <<  "       " <<  !f <<  "       " << !t << endl;

            cout << f << "  " << f << "     " << (f&&f) <<  "       " << (f||f) <<  "       " << !f <<  "       " << !f << endl;    

            cout << t << "  " << t << "     " << (t&&t) <<  "       " << (t||t) <<  "       " << !t <<  "       " << !t << endl;

            cout << t << "  " << f << "     " << (t&&f) <<  "       " << (t||f) <<  "       " << !t <<  "       " << !f << endl;   
   
        return 0;

}           