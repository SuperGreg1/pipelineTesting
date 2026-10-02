#include <iostream>

class Tomato
{
public:
    void sayMyName()
    {
        std::cout << "Я томат";
    }
};
Tomato tomato;

int main()
{
    tomato.sayMyName();
}
