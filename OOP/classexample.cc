#include<iostream>

//function inside classes are called methods
class Player{
    public:
        int x, y;
        int speed;

        void Move(int xa, int ya){
        x += xa * speed;
        y += ya * speed;
}

};


// by default it is declare as private
int main(){
    Player player;
    player.Move(1, -1);
}