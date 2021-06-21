#include <iostream>

using namespace std;

class Shape
{
public:
    void set_width(int w)
    {
        width = w ;
    }
    void set_height(int h)
    {
        height = h ;
    }

protected:
    int width ;
    int height ;

};
class Rectungular : public Shape
{
public:
    int get_Area()
    {
        return(width*height) ;
    }
}MUMU;

int main()
{
    MUMU.set_height(3);
    MUMU.set_width(2);
    cout << "AREA OF RECTABGULAR IS: " << MUMU.get_Area() << endl;
    return 0;
}
