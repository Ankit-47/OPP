#include<iostream>
#include<string.h>

using namespace std;

class mystring{
    private:
    char *str;
    public:
    mystring(const char *s){
        str= new char [strlen(s)+1];
        strcpy(str,s);
    }
 ~mystring(){
    delete[] str;
 }
   bool operator==(const mystring& other) const {
        return strcmp(str, other.str) == 0;
    }

    
    bool operator!=(const mystring& other) const {
        return str != other.str;
    }

};

int main() {
   mystring str1("Hello");
   mystring str2("Hello");
   mystring str3("World");

    if (str1 == str2) {
        cout << "str1 and str2 are  identical.\n";
    } else {
       cout << "str1 and str2 are not identical.\n";
    }

    if (str1 == str3) {
        cout << "str1 and str3 are identical.\n";
    } else {
       cout << "str1 and str3 are not identical.\n";
    }

    return 0;
}