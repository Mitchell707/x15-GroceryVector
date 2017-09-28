//Authors: Mitchell Beck, Garrett Welton, Ricardo Flores, Alex Leonard
#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
  //string list[5]; //array of 5 strings
  int numItems = 0;
  char input;
  bool active = true;
  vector <string> list;

  while(active)
  {
    cout<<"\n==GROCERY LIST MANAGER==";
    cout<<"\nEnter your choice: ";
    cout<<"\n (A)dd an item";
    cout<<"\n (S)how grocery list";
    cout<<"\n (Q)uit";
    cout<<"\nYour choice (A/S/Q): ";
    cin>>input;

    if(input == 'A' || input == 'a')
    {

           numItems++;
           list.resize(numItems);

           cout << "\nEnter an item\n";
           cin >> list[numItems - 1];
           
       
    }
    else if(input == 'S' || input == 's')
    {
        for(int i = 0; i < numItems; i++)
        {
            if(list[i].length() > 0)
            {
                cout << list[i] << endl;
            }

        }
    }
    else if(input == 'Q' || input == 'q')
    {
        active = false;
    }
   }
  

    for(int i = 0; i < numItems; i++)
    {
        if(list[i].length() > 0)
        {
            cout << list[i] << endl;
        }
    }

  return 0;
    

}
