#include<iostream>
#include<vector>
#include<utility>

using namespace std;


class kalkulator
{
private:
  string number;
 vector<pair<char,int>> f = {{'0',0}};
  vector<char> simvol = {0};
public:
  void operator=(string a){  number = a; }


 void razbienie_na_char(kalkulator &p)
 {
    for(int i = 0; i < p.number.size(); i++)
    {
      p.simvol[i] = p.number[i];
    }
 }


 void razbienie_na_char()
 {
    for(int i = 0; i < this->number.size(); i++)
    {
      this->simvol[i] = this->number[i];
    }
 }


  void operator+(kalkulator &a)
  {
       razbienie_na_char(a);
       razbienie_na_char(); // argument this

  }


  kalkulator(kalkulator &other)
  {
    cout << "iam happy" << endl;
  }

  kalkulator()
  {
/////// ошибка на make pair
    f[0] = make_pair('0',0);
    f[1] = make_pair('1',1);
    f[2] = make_pair('2',2);
    f[3] = make_pair('3',3);
    f[4] = make_pair('4',4);
    f[5] = make_pair('5',5);
    f[6] = make_pair('6',6);
    f[7] = make_pair('7',7);
    f[8] = make_pair('8',8);
    f[9] = make_pair('9',9);

  };

};

int main()
{

kalkulator a,b,c;
a = "9741";
b = "6831";
b.operator+(a);




int x;
cin >> x;


   return 0;
}
