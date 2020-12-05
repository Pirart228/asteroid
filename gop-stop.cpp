#include<iostream>


using namespace std;


class kalkulator
{
private:
  vector<string> number;
  static int n;
public:
   kalkulator()
   {

   }

   void operator=(string i)
   {
      number[n] = i;
      n++;
   }


};





int main()
{

kalkulator t;
t = "8347";


int x;
cin >> x;

   return 0;
}
