#include <iostream>
#include <iomanip>
using namespace std;

const int W15 = 15;

//color object
class Color {
    private:
        int red;
        int green;
        int blue;

//creating print function
public:
    Color() : red(r), green(g), blue(b) {}
    Color(int r, int g, int b) : red(r), green(g), blue(b) {}
    void setRed(int r)              {red = r; }
    void setGreen (int g)           {green = g;}
    void setBlue (int b)            {blue = b;}
    int getRed()                    {return red;}
    int getGreen()                  {return green;}
    int getBlue()                   {return blue;}
    void print() {
        cout << setw(W15) << "Red: " << red << endl;
        cout << setw(W15) << "Green: " << green << endl;
        cout << setw(W15) << "Blue: " << blue << endl;
        cout << setw(W15) << "Color(" << red << ", " << green << ", " << blue << ")\n";
    }
};

//displaying print function
int main(){
    Color color1(255, 0, 0);
    Color color2(0,255,0);
    Color color3(0,0,255);
    color1.print();
    color2.print();
    color3.print();
    return 0;
}