/******************************
Pāvels Petrovs, pp23055
A8. Dots naturāls skaitlis n. Izdrukāt tos skaitļa n reizinātājus, kuri ir kāda naturāla skaitļa kvadrāti.
Programma izveidota: 30.09.2023
******************************/

#include <iostream>
using namespace std;

int main(){
    int ok, n;
    do {
        do {
            cout << "Ievadiet naturālu skaitļu n: ";
            cin >> n;
            if (n <= 0) { //Pārbaude, vai 'n' ir naturāls skaitlis
                cout << "N nav naturals skaitlis\n" << endl;
            }
        } while (n <= 0);// Pārbauda, ​​vai nosacījums 'n <= 0' joprojām ir patiess.
                         // Ja tas ir patiess, iekšējā cilpa atkārtosies, aicinot lietotāju vēlreiz ievadīt skaitli, līdz tiek ievadīts naturāls skaitlis.
        cout << "Natural skaitlis: ";
        for(int i = 1; i * i <= n; i++) { //Sāk 'for' cilpu, kas atkārtojas no 'i = 1' līdz 'i * i', kas ir mazāks vai vienāds ar 'n'. To izmanto, lai atrastu ideālus kvadrātus.
            if (n % (i * i) == 0) { //Pārbauda, vai 'i * i' ir ideāls kvadrāts, kas sadala 'n' bez atlikuma.
                cout << i * i << " ";
            }
        }
        cout << endl;
        cout << "Vai turpināt (1) vai beigt (0)?\n";
        cin >> ok;
        cout << endl;
    } while (ok == 1); //Pārbauda, ​​vai vērtība 'ok' ir vienāda ar 1. 
                       //Ja tā, programma atkārtojas no sākuma, liekot lietotājam ievadīt jaunu vērtību 'n'. Ja 'ok' nav vienāds ar 1, programma beidzas.
    return 0;
}
