#include <iostream>

//color object
class Color {
    private:
        int red;
        int green;
        int blue;

//creating print function
public:
    Color(int r, int g, int b) : red(r), green(g), blue(b) {}
    void setRed(int r)              {red = r; }
    void setGreen (int g)           {green = g;}
    void setBlue (int b)            {blue = b;}
    int getRed()                    {return red;}
    int getGreen()                  {return green;}
    int getBlue()                   {return blue;}
    void print() {
        std::cout << "Color(" << red << ", " << green << ", " << blue << ")\n";
    }
};

//displaying print function
int main(){
    Color color1(255, 0, 0);
    color1.print();
    return 0;
}