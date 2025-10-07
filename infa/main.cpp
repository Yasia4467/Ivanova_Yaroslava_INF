//Задача 2.1
/*#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Enter first number : ";
    cin >> a;
    cout << "Enter second number : ";
    cin >> b;
    int sum = a + b;
    cout << "Summ : " << sum << endl;

}*/

//Задача 2.2
/*#include <iostream>
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

}*/

//Задача 2.3
/*#include <iostream>
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
}*/

//Задача 2.4
/*#include <iostream>
using namespace std;
int main() {
    int v, t;
    cout << "Enter speed : ";
    cin >> v;
    cout << "Enter hours : ";
    cin >> t;
    int sum = (v * t) % 109;
    cout << "Kilometers : " << sum << endl;

}*/

//Задача 2.5
/*#include <iostream>
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

}*/

/*
//Задача 3.1

#include <iostream>
using namespace std;
int main() {
    int x, y;
    cout << "Scolko tuisach otmuil II v pervi day: ";
    cin >> x;
    cout << "V kakoi moment im zainteresuutca : ";
    cin >> y;
    int k = 1;
    while (x < y)
    {
        x = x + x*0.1;
        k++;
        }
        cout << k;
}*/


//Задача 4.1

/*#include <iostream>
using namespace std;

int main(){
    float a,b;
    string sign;
    cout<<"Введите число A, знак действия и число B через пробел:\n";
    cin>>a>>sign>>b;
    if (sign=="-"){
        cout<<"Ответ: "<<a-b;
    }
    if (sign=="+"){
        cout<<"Ответ: "<<a+b;
    }
    if (sign=="*"){
        cout<<"Ответ: "<<a*b;
    }
    if (sign=="/"){
        cout<<"Ответ: "<<a/b;
    }
}*/


//Задача 4.2

/*#include <iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Введите числа A и B через пробел:\n";
    cin>>a>>b;
    while (a!=b){
        if (a%2==0){
            a=a/2;
            cout<<":2\n";
        }
        else{
            --a;
            cout<<"-1\n";
        }    
    }
}*/


//Задача 5.1
/*
#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    int x;
    int sum = 0;
    cout << "Razmer massiva: ";
    cin >> x;
    int array1[x];
    for (int i = 0; i < x; i++)
    {
        array1[i] = rand() % 1000; 
        cout << array1[i] << endl;
        sum+=array1[i];
    }

    cout <<"Cred. znach.: "<<sum/x<< "\n";
}*/


// Задача 5.2

/*#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    int x;
    int chet=0;
    int nechet = 0;
    cout << "Razmer massiva: ";
    cin >> x;
    int array1[x];
    for (int i = 0; i < x; i++)
    {
        array1[i] = rand() % 1000; 
        cout << array1[i] << endl;
        if (array1[i] % 2 == 0)
        {
            chet+=1;
        }
        else
        {
            nechet+=1;
        }
    }
    cout << "Chetnyh chisel: " << chet << "\n";
    cout << "Nehetnyh chisel: " << nechet << "\n";
}  
*/

/*//Задача 5.3
#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    int x;
    int min = 1001;
    int max = -1;
    int length = sizeof(array1) / sizeof(array1[0]);
    cout << "Razmer massiva: ";
    cin >> x;
    int array1[x];
    for (int i = 0; i < x; i++)
    {
        array1[i] = rand() % 1000; 
        cout << array1[i] << endl;
        if(array1[i] < min)
        {
            min = array1[i];
        }
        if(array1[i] > max)
        {
            max = array1[i];
        }
        cout << "Min: " << min << "\nMax: " << max << "\n";
    }
    
}*/
