//Задача 1
#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Enter first number : ";
    cin >> a;
    cout << "Enter second number : ";
    cin >> b;
    int sum = a + b;
    cout << "Summ : " << sum << endl;

}

//Задача 2
#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Enter first number : ";
    cin >> a;
    cout << "Enter second number : ";
    cin >> b;
    int sum = a + b;
    cout << "Summ : " << sum << endl;
    int rasn = a - b;
    cout << "Difference :" << rasn << endl;
    int prois = a * b;
    cout << "Proisvedenie :" << prois << endl;
    int del = a / b;
    cout << "Delenie : " << del << endl;

}

//Задача 3
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int a, b;
    cout << "Enter first katet : ";
    cin >> a;
    cout << "Enter second katet : ";
    cin >> b;
    double gup = sqrt(a * a + b * b);
    cout << "Guppotenusa : " << gup << endl;
}

//Задача 4
#include <iostream>
using namespace std;
int main() {
    int v, t;
    cout << "Enter speed : ";
    cin >> v;
    cout << "Enter hours : ";
    cin >> t;
    int sum = (v * t) % 109;
    cout << "Kilometers : " << sum << endl;

}

//Задача 5
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter seconds : ";
    cin >> n;
    int h = n / 3600;
    int m = (n % 3600) / 60;
    int s = n % 60;
    cout << "Time : " << h << ":";
    if (m < 10) cout << "0";
    cout << m << ":";
    if (s < 10) cout << "0";
    cout << s;

}