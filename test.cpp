#include <bits/stdc++.h>
using namespace std;

#define SIZE 255
class Strtype{
    char *p ;
    int len;
    public:
        Strtype();
        ~Strtype();
        void set(char *ptr);
        void show();
};

Strtype :: Strtype()
{
    p = (char *) malloc (SIZE);
    if (!p){
        cout << "Allocation failed\n";
        exit (1);
    } 
    *p = '\0';
    len = 0;
}

Strtype :: ~Strtype()
{
    cout << "Freeing p\n";
    free(p);
}

void Strtype :: set (char *ptr)
{
    if (!strlen(p) >= SIZE){
        cout << "String too big";
        return ;
    }
    strcpy(p,ptr);
    len = strlen (p);
}

void Strtype :: show (){
    cout << p << "-length: " << len;
    cout << '\n'; 
} 

int main()
{
    Strtype t,tt;
    t.set("This is a test");
    tt.set("I like c++");
    t.show();
    tt.show();


}