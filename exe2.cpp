        #include <iostream>
        using namespace std;

        int main() {
            
            int valores[6];

            
            cout << "Digite 6 valores inteiros:" << endl;
            for (int i = 0; i < 6; ++i) {
                cout << "Valor " << i+1 << ": ";
                cin >> valores[i];
            }

            
            cout << "\nValores lidos:" << endl;
            for (int i = 0; i < 6; ++i) {
                cout << valores[i] << " ";
            }
            cout << endl;

            return 0;
        }