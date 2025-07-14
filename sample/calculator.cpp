#include <bits/stdc++.h>
using namespace std;

int main(){

    int a , b ;
    cout << "Enter two number to perform operation " << endl;
    cin >> a >> b;
    
    cout << "Enter the operator to perform the operation ( % , * , - , + )" << endl;
    char ch;
    cin >> ch;
    
    if(ch == '%'){
        cout << " After operation " << a % b << endl;
    }else if (ch == '*'){
        cout << " After operation " << a * b << endl;
    }else if(ch == '-'){
        cout << " After operation " << a - b << endl;
    }else if(ch == '+'){
        cout << " After operation " << a + b << endl;
    }else{
        cout << "You have entered wrong key : " << endl;
    }
    return 0;
}