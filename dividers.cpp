#include <list>
#include <iostream>


using namespace std;

class Dividers{
  public:
    bool checkIfDiv(long number,long divider){
        if (number % divider == 0)
        {
            return true;
        }
        return false;
    }  
};

int main(){

    long number;
    list<int> lista;
    Dividers divides;

    cin>>number;

    for (long i = number; i>0;i--){
        if (divides.checkIfDiv(number,i)){
            lista.push_front(i);
        }   
    }
    for (list<int>::iterator it = lista.begin(); it != lista.end(); it++)
    {
        cout << *it<<" ";
    }

    cout<<endl;
    return 0;
}