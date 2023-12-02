#include <iostream>
using namespace std;

int main() {
    int D,d,e,v;
    cin>>D;
    while(D--){
        cin>>d>>e>>v;
        d=d*10;
        switch(e<=d?1:0){
            case 1:
                cout<<e*v<<"\n";
                break;
            case 0:
                cout<<d*v<<"\n";
        }
    }
	return 0;
}
