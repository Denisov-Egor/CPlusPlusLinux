#include <iostream>

using namespace std;

void Menu()
{
  cout << R"(
  ========== RECTANGLE MANAGER ==========

  1. Изменить ширину
  2. Изменить высоту
  3. Показать информацию
  4. Рассчитать площадь
  5. Рассчитать периметр
  6. Проверить, является ли квадратом
  0. Выход

  )";
}

bool checkingValues(double value)
{
  if (value <= 0)
  {
    cout << "Значение должно быть больше нуля.\n";
    return false;
  }
  
  return true;
}

class Rectangle
{
private:
  double width = 1.0;
  double height = 1.0;
public:
  double getWidth() const
  {
    return width;
  }

  double getHeight() const
  {
    return height;
  }

  void setWidth(double newWidth)
  {
    if (!checkingValues(newWidth))
    {
      return;
    }
    
    width = newWidth;
    cout << "Ширина успешно изменена.";
  }

  void setHeight(double newHeight)
  {
    if (!checkingValues(newHeight))
    {
      return;
    }

    height = newHeight;
    cout << "Высота успешно изменена.";    
  }

  double getArea() const
  {
    return width * height;
  }
  
  double getPerimeter() const
  {
    return 2 * (width + height);
  }

  bool isSquare() const
  {
    return width == height;
  }

};

int main()
{
  Rectangle rectangle;
  double newWidth;
  double newHeight;
  int choice = -1;

  while (choice != 0)
  {
    Menu();
    cin >> choice;

    switch (choice)
    {
    case 1:
      cout << "Введите новую ширину: ";
      cin >> newWidth;

      rectangle.setWidth(newWidth);
      break;

    case 2:
      cout << "Введите новую высоту: ";
      cin >> newHeight;

      rectangle.setHeight(newHeight);     
      break;

    case 3:
      cout << "Ширина: " << rectangle.getWidth() << '\n'
          << "Высота: " << rectangle.getHeight() << '\n'
          << "Площадь: " << rectangle.getArea() << '\n'
          << "Периметр: " << rectangle.getPerimeter() << '\n'
          << '\n';
      break;

    case 4:
      cout << "Площадь: " << rectangle.getArea();
      break;

    case 5:
      cout << "Периметр: " << rectangle.getPerimeter();
      break;

    case 6:
      if (rectangle.isSquare())
      {
        cout << "Это квадрат.";
      }else
      {
        cout << "Это прямоугольник.";
      }
      break;
    
    default:
      break;
    }
  }
  

}