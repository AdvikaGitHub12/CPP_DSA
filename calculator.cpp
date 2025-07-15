#include <iostream>
using namespace std;

// Name - Advika Bhosle
// PRN - 24070123007
// Batch - EnTC - A1

#include <iostream>
using namespace std;

int main() {
    float n1 , n2 , add , sub , multi , divi ;
    cout <<"Enter First number: ";
    cin >> n1;
    cout << "Enter Second Number: ";
    cin >> n2;
    add = n1 + n2;
    cout << "The addition is : " << add<<endl;  
    sub = n1 - n2;
    cout << "The substraction is : " << sub<<endl;  
    multi = n1 * n2;
    cout << "The multiplication is : " << multi<<endl;  
    if(n2 == 0){
        cout << "Division by 0 is not possible "<<endl;
    }else{
        divi = n1/n2;
        cout << "The division is : " << divi<<endl; 
    }

    return 0;
}

//output
/*
