#include <string>

class Rectangle
{
  private:

    // Naming convention:private fields start with '_',
    // and have lowercase first letter; PUBLIC fields and functions
    // might have CamelCase and first capital letter
    int _width;
    int _height;

  public:

    // Parameterless constructor. This **must** always exist
    // (If we don't provide any constructor, it's automatically added)
    Rectangle()
    {
        this->_width = 0;
        this->_height = 0;
    }

    // Overloading of the ctor
    Rectangle(int width, int height)
    {
        this->_width = width;
        this->_height = height;
    }

    // In our case, empty because I didn't reserve any resource
    // (e.g., files, connections, etc...)
    // ~Rectangle()
    // {
    // }

    // Setter function
    void SetHeight(int h)
    {
        if(h >= 0)
            this->_height = h;
    }
    
    // Getter function
    int GetHeight()
    {
        return this->_height;
    }

    // "Business" function
    int Area()
    {
        return _width * _height;
    }
};