// classes overview //

#include<iostream>
using namespace std;
 
template <typename t1 , typename t2>
class Pair{
     t1 x; 
     t2 y;
     public:
     void setX(t1 x){
          this->x = x;
     }
     t1 getX(){
          return x;
     }
     void setY(t2 y){
          this->y = y;
     }
     t2 getY(){
          return y;
     }
};

int main(){
     Pair<Pair<int,int>,int> p2;
     p2.setY(67);
     Pair<int,int> p4;
     p4.setX(10);
     p4.setY(60);
     p2.setX(p4);
    cout<<p2.getX().getX()<<endl;
    cout<<p2.getY()<<endl;

return 0;
}