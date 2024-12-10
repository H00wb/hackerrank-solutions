#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Rectangle
{
  private:
  int width,height;  
  public:
  void display(int w,int h)
  {
    this->width = w;
    this->height = h;
    
    cout << width << " " << height;
  }
   int getHeight() const { return height; }
    int getWidth() const { return width; }
    
     void setHeight(int hei) { height = hei; }
    void setWidth(int wid) { width = wid; }
};



class RectangleArea : public Rectangle
{
    public:
    Rectangle r;
    int read_input(int w,int h)
    {
    int a,b;
    
    r.setHeight(h);
    r.setWidth(w);
    
    a = r.getHeight();
    b = r.getWidth();
    
    return a*b;
    }
};

int main() {
     Rectangle r1;
     RectangleArea r2;
     
     int width,height;
     
     cin>> width >> height;
     
     r1.display(width, height);
     
     cout <<endl <<r2.read_input(width,height);
     
    return 0;
}
