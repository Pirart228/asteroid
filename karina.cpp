
#include<iostream>
#include<vector>

using namespace std;





int main()
{

 const vector<int> obj = {1,2,3,4,5,6,7,8};



///////////////////////////////////////////




for(int i = 0; i < obj.size(); i++)
{
  for(int j = i; j < obj.size()-i; j++)
  {
      cout << obj[j];
  }
  cout << endl;
}



//////////////////////////////////////



for(int i = 0; i < obj.size(); i++)
{
  for(int j = 0; j < obj.size()-i; j++)
  {
      cout << obj[j];
  }
  cout << endl;
}


////////////////////////////////

for(int i = 0; i < obj.size(); i++)
{
  for(int j = i; j < obj.size(); j++)
  {
      cout << obj[j];
  }
  cout << endl;
}


//////////////////////////////////




///////////////////////////////////////




int x; cin >> x;
  return 0;
}
