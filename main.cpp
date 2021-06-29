#include <iostream>
using namespace std;

void Two (double a1, double b1)
{
double a, b, result;
result = 2 / (1/a1+1/b1);
cout << "Среднее гармоническое чисел " << a1 << " и " << b1 << " = " << result << endl;
}

void Three (double &first, double &second, double &third)
{
   
  double *aa = &first; 
  double *bb = &second; 
  double *cc = &third; 
  double ii;
  double *O =  &ii; // доп. указатель 
  
  while (*aa > *bb || *aa > *cc || *bb > *cc) 
{ 
  
  
  if (*aa > *bb )
  {
    cout << first << " > " << second << endl;
    *O  = *aa; 
    *aa = *bb;
    *bb = *O;
   
  }

  if (*bb > *cc )
  {
    cout << *bb << " > " << *cc << endl;
    *O  = *bb; 
    *bb = *cc;
    *cc = *O;
    
  }
  if (*aa > *cc )
  {
    cout << *aa << " > " << *cc << endl;
    *O  = *aa; 
    *aa = *bb;
    *bb = *cc;
    *cc = *O;
  }
  }


  double result;
  result = 3 / (1/ *aa+1/ *bb+1/ *cc);
  
  cout << "Среднее гармоническое чисел " << first << " , " << second  << " и " << third  << " = " << result << endl;
}

int main() {
  double  a, b, c;
  cout << "Введите згачение для задания с тремя переменными" << endl;
  cout << "Введите число № 1: " << endl;
  cin >> a;
  cout << "Введите число № 2: " << endl;
  cin >> b;
  cout << "Введите число № 3: " << endl;
  cin >> c;
  cout << "Первая переменная = " << a << endl;
  cout << "Вторая переменная = " << b << endl;
  cout << "Третья переменная = " << c << endl;
  
  cout << "Задание №1 - функция с двумя переменными " << endl;
  Two(4.2,6.2);

 
  cout << "Задание № 2 - функция с тремя перенными " << endl;
  Three(a, b, c);
  cout << "Теперь первая переменная = " << a << endl << "Вторая переменная = " << b  << endl << "Третья переменная = " << c << endl << endl;
 
}