#include <iostream>
#include <queue>
#include <algorithm>

int main(){

    int n;
    double nr;
    char comanda;
    std::queue<double>s;
    std::queue<double>r;
    std::queue<double>p;
    std::queue<double>l;

    std::cin>>n;
    for( int i=0 ;i<n ;i++)
    {
        std::cin>>nr;
        s.push( nr );

    }
    while(std::cin>>comanda){

        switch(comanda){

            case 'r' : {

                r.push(s.front());
                s.pop();
                break;

            }
            case 'p' : {

                p.push(r.front());
                r.pop();
                break;

            }
            case 'l' : {

                l.push(p.front());
                p.pop();
                break;

            }

        }


    }
    while( !s.empty() ){

        std::cout<<s.front()<<" ";
        s.pop();
    }
    std::cout<<std::endl;
    while( !r.empty() ){

        std::cout<<r.front()<<" ";
        r.pop();
    }while( !p.empty() ){

        std::cout<<p.front()<<" ";
        p.pop();
    }while( !l.empty() ){

        std::cout<<l.front()<<" ";
        l.pop();
    }
    return 0;
}