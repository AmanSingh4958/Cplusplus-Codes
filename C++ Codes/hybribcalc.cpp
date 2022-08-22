/*
Create 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility function and performs +, -, *, / and displays the results using another function.
    2. ScientificCalculator - Takes input of any number using a utility function and performs any four scientific operations of your choice and displays the results using another function.

    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of Inheritance are you using?
    Ans: Multiple Inheritance
    Q2. Which mode of Inheritance are you using?
    Ans: I'm Using Private Mode
    Q3. Create an object of HybridCalculator and display results of the simple and scientific calculator.
    Q4. How is code reusability implemented?
    Ans: We did not had to rewrite all functions over and over again for different classes because of the multiple inheritance, hence code was reused.
*/

#include <iostream>
#include <math.h>
using namespace std;

int result;
double Result;

class SimpleCalculator
{
protected:
    int Add();
    int Sub();
    int Multiply();
    float Divide();

public:
    void Show();
};

int SimpleCalculator ::Add()
{
    int a, b;
    cout << "Enter the value of 1st number = ";
    cin >> a;
    cout << "Enter the value of 2nd number = ";
    cin >> b;
    result = a + b;
    return result;
}

int SimpleCalculator ::Sub()
{
    int a, b;
    cout << "Enter the value of 1st number = ";
    cin >> a;
    cout << "Enter the value of 2nd number = ";
    cin >> b;
    result = a - b;
    return result;
}

int SimpleCalculator ::Multiply()
{
    int a, b;
    cout << "Enter the value of 1st number = ";
    cin >> a;
    cout << "Enter the value of 2nd number = ";
    cin >> b;
    result = a * b;
    return result;
}

float SimpleCalculator ::Divide()
{
    float a, b;
    cout << "Enter the value of 1st number = ";
    cin >> a;
    cout << "Enter the value of 2nd number = ";
    cin >> b;
    Result = a / b;
    return Result;
}

void SimpleCalculator ::Show()
{
    cout << "The result of the operation is " << result << endl;
    cout << endl
         << endl;
}

class ScientificCalculator
{
protected:
    double sine();
    double cosine();
    double tangent();

public:
    void show(void);
};

double ScientificCalculator ::sine()
{
    double a;
    cout << "Enter the value of number = ";
    cin >> a;
    Result = sin(a);
    return Result;
}

double ScientificCalculator ::cosine()
{
    double a;
    cout << "Enter the value of number = ";
    cin >> a;
    Result = cos(a);
    return Result;
}

double ScientificCalculator ::tangent()
{
    double a;
    cout << "Enter the value of number = ";
    cin >> a;
    Result = tan(a);
    return Result;
}

void ScientificCalculator ::show()
{
    cout << "The Result of the operation is " << Result << endl;
    cout << endl
         << endl;
}

class HybridCalculator : private SimpleCalculator, private ScientificCalculator
{
protected:
    double logrithm();

public:
    void menu(HybridCalculator);
};

double HybridCalculator ::logrithm()
{
    double a;
    cout << "Enter the value of number = ";
    cin >> a;
    Result = log(a);
    return Result;
}

void HybridCalculator ::menu(HybridCalculator hybridcalc)
{
    int x;
    do
    {
        cout << "     --->  Hybrid Calculator Using Inheritance & Code Reusalibity  <---" << endl;
        cout << endl
             << endl;
        cout << "Choose The Operation" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Sine of number in radian" << endl;
        cout << "6. Cosine of number in radian" << endl;
        cout << "7. Tangent of number in radian" << endl;
        cout << "8. Natural Logrithm of number" << endl;
        cout << "9. Exit" << endl;
        cout << "Enter Your Choice = ";
        cin >> x;
        cout << endl
             << endl;

        switch (x)
        {
        case 1:
            hybridcalc.Add();
            hybridcalc.Show();
            break;
        case 2:
            hybridcalc.Sub();
            hybridcalc.Show();
            break;
        case 3:
            hybridcalc.Multiply();
            hybridcalc.Show();
            break;
        case 4:
            hybridcalc.Divide();
            hybridcalc.show();
            break;
        case 5:
            hybridcalc.sine();
            hybridcalc.show();
            break;
        case 6:
            hybridcalc.cosine();
            hybridcalc.show();
            break;
        case 7:
            hybridcalc.tangent();
            hybridcalc.show();
            break;
        case 8:
            hybridcalc.logrithm();
            hybridcalc.show();
            break;
        case 9:
            cout << "Exited (- _ -)" << endl;
            exit(0);

        default:
            cout << "Enter the Correct Choice Idiot !" << endl;
            break;
        }
    } while (x != 9);
}

int main()
{
    HybridCalculator hybridcalc;
    hybridcalc.menu(hybridcalc);
    return 0;
}