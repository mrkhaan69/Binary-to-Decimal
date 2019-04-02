#include <iostream> 
#include <string> 

using namespace std; 

// Function to convert binary to decimal 

int bin2Dec(string g) 
{ 

    string num = g; 

    int dec_value = 0; 
    
    int base = 1; 

    int len = num.length(); 

    for (int i = len - 1; i >= 0; i--) { 

        if (num[i] == '1') 

            dec_value += base; 

        base = base * 2; 

    } 

    return dec_value; 
} 

  
// Driver

int main() 
{ 
    string k;
    cout << "Enter a Binary Number\n";
    cin >> k;
    string num = k;
    cout << bin2Dec(num) << endl; 

return 0;

}
