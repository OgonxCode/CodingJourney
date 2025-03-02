#include <iostream>
#include <cmath>  


class BasicShape {
private:
    double area;  
public:
    double getArea() const {  
        return area;
    }

    virtual void calcArea() = 0; 

protected:
    
    void setArea(double a) {
        area = a;
    }
};


class Circle : public BasicShape {
private:
    long centerX, centerY;  
    double radius;          

public:
    
    Circle(long x, long y, double r) : centerX(x), centerY(y), radius(r) {
        calcArea();
    }

    long getCenterX() const { return centerX; }
    long getCenterY() const { return centerY; }

    void calcArea() override {
        double area = 3.14159 * radius * radius; 
        setArea(area);  
    }
};


class Rectangle : public BasicShape {
private:
    long width, length;  

public:
    
    Rectangle(long w, long l) : width(w), length(l) {
        calcArea();
    }

    long getWidth() const { return width; }
    long getLength() const { return length; }

    void calcArea() override {
        double area = static_cast<double>(width) * length; 
        setArea(area); 
    }
};


int main() {
  
    Circle circle(5, 10, 7.5); 
    std::cout << "Circle Details:\n";
    std::cout << "Center: (" << circle.getCenterX() << ", " << circle.getCenterY() << ")\n";
    std::cout << "Area: " << circle.getArea() << "\n\n";

  
    Rectangle rectangle(8, 12); 
    std::cout << "Rectangle Details:\n";
    std::cout << "Width: " << rectangle.getWidth() << "\n";
    std::cout << "Length: " << rectangle.getLength() << "\n";
    std::cout << "Area: " << rectangle.getArea() << "\n";

    return 0;
}
