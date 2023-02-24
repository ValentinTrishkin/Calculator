// Calculator.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

class Calculator
{
public:
    double num1;
    double num2;
    double add()
    {
        return num1 + num2;
    }
    double multiply()
    {
        return num1 * num2;
    }
    double subtract_1_2()
    {
        return num2 - num1;
    }
    double subtract_2_1()
    {
        return num1 - num2;
    }
    double divide_1_2()
    {
        return num2 / num1;
    }
    double divide_2_1()
    {
        return num1 / num2;
    }
    bool set_num1(double num1)
    {
        if (this->num1 != 0)
        {
            return true;
        }
        return false;
    }
    bool set_num2(double num2)
    {
        if (this->num2 != 0)
        {
            return true;
        }
        return false;
    }
    Calculator(double num1, double num2)
    {
        this->num1 = num1;
        this->num2 = num2;
    }
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
        std::cout << "Введите num2: ";
        std::cin >> num2;
        test.num1 = num1;
        test.num2 = num2;
       /* do
        {

        } while (true);*/
        if (test.set_num1(num1)&&test.set_num2(num2))
        {
            std::cout << "num1 + num2 = " << test.add() << std::endl;
            std::cout << "num1 - num2 = " << test.subtract_2_1() << std::endl;
            std::cout << "num2 - num1 = " << test.subtract_1_2() << std::endl;
            std::cout << "num1 * num2 = " << test.multiply() << std::endl;
            std::cout << "num1 / num2 = " << test.divide_2_1() << std::endl;
            std::cout << "num2 / num1 = " << test.divide_1_2() << std::endl;
        }
        else
        {
            std::cout << "Неверный ввод!" << std::endl;
            if (!test.set_num1(num1))
            {
                std::cout << "Введите num1: ";
                std::cin >> num1;
                test.num1 = num1;
                std::cout << "num1 + num2 = " << test.add() << std::endl;
                std::cout << "num1 - num2 = " << test.subtract_2_1() << std::endl;
                std::cout << "num2 - num1 = " << test.subtract_1_2() << std::endl;
                std::cout << "num1 * num2 = " << test.multiply() << std::endl;
                std::cout << "num1 / num2 = " << test.divide_2_1() << std::endl;
                std::cout << "num2 / num1 = " << test.divide_1_2() << std::endl;
            }
            if (!test.set_num2(num2))
            {
                std::cout << "Введите num2: ";
                std::cin >> num2;
                test.num2 = num2;
                std::cout << "num1 + num2 = " << test.add() << std::endl;
                std::cout << "num1 - num2 = " << test.subtract_2_1() << std::endl;
                std::cout << "num2 - num1 = " << test.subtract_1_2() << std::endl;
                std::cout << "num1 * num2 = " << test.multiply() << std::endl;
                std::cout << "num1 / num2 = " << test.divide_2_1() << std::endl;
                std::cout << "num2 / num1 = " << test.divide_1_2() << std::endl;
               
            }
        }
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
