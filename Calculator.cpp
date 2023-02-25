// Calculator.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

class Calculator
{
public:    
    double add()
    {
        return num1_ + num2_;
    }
    double multiply()
    {
        return num1_ * num2_;
    }
    double subtract_1_2()
    {
        return num2_ - num1_;
    }
    double subtract_2_1()
    {
        return num1_ - num2_;
    }
    double divide_1_2()
    {
        return num2_ / num1_;
    }
    double divide_2_1()
    {
        return num1_ / num2_;
    }
    bool set_num1(double num1)
    {
        if (num1 != 0)
        {
            num1_ = num1;
            return true;
        }
        return false;
    }
    bool set_num2(double num2)
    {
        if (num2 != 0)
        {
            num2_ = num2;
            return true;
        }
        return false;
    }
    Calculator(double num1, double num2)
    {
        num1_ = num1;
        num2_ = num2;
    }
private:
    double num1_;
    double num2_;
};




int main()
{
    setlocale(LC_ALL, "Rus");
    system("chcp 1251");
    double num1 = 0.0, num2 = 0.0;
    do
    {
        Calculator test(num1, num2);
        std::cout << "Введите num1: ";
        std::cin >> num1;
        if (test.set_num1(num1))
        {
            do
            {
                std::cout << "Введите num2: ";
                std::cin >> num2;
                if (test.set_num2(num2))
                {
                    std::cout << "num1 + num2 = " << test.add() << std::endl;
                    std::cout << "num1 - num2 = " << test.subtract_2_1() << std::endl;
                    std::cout << "num2 - num1 = " << test.subtract_1_2() << std::endl;
                    std::cout << "num1 * num2 = " << test.multiply() << std::endl;
                    std::cout << "num1 / num2 = " << test.divide_2_1() << std::endl;
                    std::cout << "num2 / num1 = " << test.divide_1_2() << std::endl;
                }
                else (std::cout << "Неверный ввод!" << std::endl);
            } while (!test.set_num2(num2));        
        } else (std::cout << "Неверный ввод!" << std::endl);
    } while (true);

   
    

   
    

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
