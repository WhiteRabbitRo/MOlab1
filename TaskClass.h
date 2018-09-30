#ifndef MO1_TASKCLASS_H
#define MO1_TASKCLASS_H
#include <iostream>
#include <vector>

class DataTask {
protected:
    double* objectiveFunction; //коэффициенты ЦФ
    double* rightPart; //правая часть системы ограничений
    double** constraintSystem; //коэффициенты системы ограничений
    int* constraintSign; //знаки системы ограничений (1 - =, 2 - <=, 3 - >=)
    bool functionWay; //направление функции (0 - min, 1 - max)
    int numberOfVariables; //число переменных
    int numberOfConstraints; //число ограничений
public:
    bool getDataFromFile(std::string); //метод получения данных задачи из файла
    bool fillVariables(std::vector<std::string>); //метод заполнения данных в поля класса
};

#endif //MO1_TASKCLASS_H
