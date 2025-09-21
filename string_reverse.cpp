#include <iostream> 
using namespace std; 


void reverseString (string *ptr){
for (int i = ptr->length() - 1; i >=0; i--){
    cout << (*ptr)[i]; 
}
cout << "\n\n"; 
}

int main(){

string *userStr = new string; 

cout << "Enter a string: "; 
getline(cin, *userStr); 

reverseString(userStr);

system("pause"); 
return 0; 
}
