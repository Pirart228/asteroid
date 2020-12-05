#include<iostream>
#include<vector>
using namespace std;


class kalkulator
{
private:
  string number;
  vector<char> simvol = {0};
public:
  void operator=(string a)
  {
        number = a;
  }


 void sim(kalkulator &a)


  void operator+(kalkulator &a)
  {
      for(int i = 0; i < a.number.size(); i++)
      {
         a.simvol[i] = a.number[i];
      }

      for(int i = 0; i < (*this).number.size(); i++)
      {
         (*this).simvol[i] = (*this).number[i];
      }

  }


  kalkulator(kalkulator &other)
  {
    cout << "iam happy" << endl;
  }
  kalkulator(){};


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
