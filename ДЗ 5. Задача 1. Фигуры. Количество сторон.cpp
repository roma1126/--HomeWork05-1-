#include <iostream>

class Figure
{
protected:
    int sides_count = 0;
    std::string figuresName;

public:
    Figure() : Figure(0, "Фигура") {};
    Figure(int Sides_count, std::string FiguresName)
    {
        sides_count = Sides_count;
        figuresName = FiguresName;
    };
    
    int get_sides_count() 
    {
        return sides_count;   
    }

    std::string get_figures_name() 
    {
        return figuresName;
    }
};

class Triangle : public Figure
{
public:
    Triangle() : Figure(3, "Треугольник") {};
};

class Quadrangle : public Figure
{
public:
    Quadrangle() : Figure(4, "Четырехугольник") {};

};

void print(Figure& figure)
{
    std::cout << figure.get_figures_name() << ": " << figure.get_sides_count() << std::endl;
}


int main()
{
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");

    std::cout << std::endl << "Количество сторон: " << std::endl;

    Figure figure1;
    print(figure1);

    Triangle triangle1;
    print(triangle1);

    Quadrangle quadrangle1;
    print(quadrangle1);

}

