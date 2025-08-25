#include <iostream>
using namespace std;

    struct Horario {
        
        int hora, minuto, segundo;

        Horario(int h, int m, int s)    {
            hora = h;
            minuto = m;
            segundo = s;
        }
    };

void somaHoras(Horario valor1, Horario valor2) {

    int days = 0;

    cout << "Horario 1: ";
    cin >> valor1.hora; cin >> valor1.minuto; cin >> valor1.segundo;
    cout << "Horario 2: ";
    cin >> valor2.hora; cin >> valor2.minuto; cin >> valor2.segundo;

    int sumSeconds = valor1.segundo + valor2.segundo;
    int sumMinute = valor1.minuto + valor2.minuto;
    int sumHours = valor1.segundo + valor2.segundo;

    if(sumSeconds >= 60)    {
        sumMinute += 1;
        sumSeconds -= 60;
    }
    if(sumMinute >= 60)    {
        sumHours += 1;
        sumMinute -= 60;
    }
    if(sumHours >= 24)    {
        days += 1;
        sumHours -= 60;
    }

        if(sumSeconds < 10) {
               cout << days << " : " << sumHours << " : " << sumMinute << " : 0" << sumSeconds;
        }
        if(sumMinute < 10)  {
               cout << days << " : " << sumHours << " : 0" << sumMinute << " : " << sumSeconds;
        }
        if(sumHours < 10)   {
               cout << "0" << days << " : " << sumHours << " : " << sumMinute << " : " << sumSeconds;
        }
        if(sumSeconds < 10 && sumMinute < 10)   {
               cout << days << " : " << sumHours << " : 0" << sumMinute << " : 0" << sumSeconds;
        }
        if(sumMinute < 10 && sumHours < 10)   {
               cout << days << " : 0" << sumHours << " : 0" << sumMinute << " : " << sumSeconds;
        }
        if(sumSeconds < 10 && sumMinute < 10 && sumHours < 10)   {
               cout << days << " : 0" << sumHours << " : 0" << sumMinute << " : 0" << sumSeconds;
        }
    

}


int main(){

    Horario valor1(12,44,56);
    Horario valor2(12,44,56);

    somaHoras(valor1, valor2);
}
