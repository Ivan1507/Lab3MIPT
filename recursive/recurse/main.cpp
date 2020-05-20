#include <iostream>

using namespace std;
 int main()
{
    bool a,c,d,e,f,g,h,i,j;
    float b;
    cin>>a>>b>>c>>d>>e>>f>>g>>h>>i>>j;
    int gr=0;
    if(a==1||b>=37.5){
        if(c==1){
            if(d==1){
                gr=1;
            }
            else {
                    gr=2;
            }
        }
        else if(e==1||f==1){
            gr=2;
        }
        else if(g==1){
            gr=2;
        }
        else gr=3;
    }
    else if(c==1){
        if(i==1||j==1){
            gr=2;
        }
        else if(e==1||f==1){
            gr=3;
        }
        else gr=4;
    }
    else if(g==1||h==1){
        gr=3;
    }
    else gr=4;
    cout<<gr;
    return 0;
}
