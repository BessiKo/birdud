#include <iostream>
#include <cstdlib>
#include <cmath>

int main(){
using namespace std;
int a = 0, b = 0, c = 0;
cout << "введите первую сторону ";
cin >> a;
if (a <= 0) {
cout << "сторона должна быть потожительной ";
cin >> a;

}
cout << "введите вторую сторону ";
cin >> b;
if (b <= 0) {
cout << "сторона должна быть потожительной ";
cin >> b;

}

cout << "введите третью сторону ";
cin >> c;
if (c <= 0) {
cout << "сторона должна быть потожительной ";
cin >> c;

}

if (((a + b) >= c) && ((b + c) >= a) && ((a + c) >= b) && (a > 0) && (b > 0) && (c >0) ){
cout <<"периметр = " <<  a+b+c << endl;
int p = (a + b + c)/2;
cout <<"площадь = " << sqrt(p*(p-a)*(p-b)*(p-c)) << endl;
if ((a == b) || (b == c) || (a == c)){
cout <<"треугольник равнобедренный " << endl;
} else cout << "треугольник неравнобедренный" << endl;
}
else cout << "error";
}
