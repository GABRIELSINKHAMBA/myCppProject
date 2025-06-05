
class Rectangle{
public:
void setValues( float newLength, float newFloat);
float getLength()const;
float getWidth()const;
float calculateArea();
//constructor 
Rectangle();
Rectangle(float length, float width);
//destructor that does nothing 
~Rectangle();
private:
float length;
float width;
};