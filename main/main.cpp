/*
 Вариант 3. Декартов лист

Разработать класс, определяющий кривую – Декартов лист.

Декартов лист – плоская кривая третьего порядка, удовлетворяющая уравнению в прямоугольной системе

x^3 + y^3 = nxy.

1) Определить состояние класса.

2) Разработать необходимые конструкторы и методы получения и изменения параметров, определяющих кривую.

3) Вернуть сторону квадрата, которая равна наибольшей хорде листа.

4) Вернуть расстояние до центра в полярной системе координат в зависимости от угла.

5) Вернуть радиус кривизны в вершине листа.

6) Вернуть радиус кривизны в узловой точке.

7) Вернуть площадь петли листа.

8) Вернуть длину наибольшего поперечника петли.

9) Вернуть расстояния от узла до наибольшего поперечника.

Разработать диалоговую программу для тестирования класса.
 */


#include <iostream>
#include <Dlist.h>

template <typename T>
bool corgetInt(T &a){
    std::cin >> a;
    if (std::cin.good()){
        return true;
    }else{
        std::cin.clear();
        std::cin.ignore();
        return false;
    }
}

template <typename T>
T getNum(){
    T a;
    while (!corgetInt(a) || a < 0){
        std::cout << "Wrong number! Enter again!" << std::endl;
    }
    return a;
}

int main() {
    int t, c = 1;
    double f, a;
    Dlist l;
    std::cout << "1)Set parameter" << std::endl<< "2)Side of square" << std::endl<< "3)Distance to the centre" << std::endl<< "4)Radius of curvature at the top" << std::endl<< "5)Radius of curvature at the anchor point" << std::endl<< "6)Area of the loop" << std::endl<< "7)Length of the largest diameter" << std::endl<< "8)Distance from the node to the largest diameter" << std::endl<< "0)Exit"<< std::endl << "::";
    while(c != 0){
        t = getNum<int>();
        switch(t){
            case 1:{
                std::cout << "A: ";
                a = getNum<double>();
                l = Dlist(a);
                break;
            }
            case 2:{
                std::cout << "Side: "<< l.sideSq() << std::endl;
                break;
            }
            case 3:{
                std::cout << "Angle: ";
                f = getNum<double>();
                std::cout << "Distance: "<< l.radiuc(f) << std::endl;
                break;
            }
            case 4:{
                std::cout << "Radius: "<< l.radKrivVer() << std::endl;
                break;
            }
            case 5:{
                std::cout << "Radius: "<< l.radKrivYz() << std::endl;
                break;
            }
            case 6:{
                std::cout << "Area: "<< l.area() << std::endl;
                break;
            }
            case 7:{
                std::cout << "Lenght: " << l.biggestPoper() << std::endl;
                break;
            }
            case 8:{
                std::cout << "Distance: " << l.lenghtToPoper() << std::endl;
                break;
            }
            case 0:{
                c = 0;
                break;
            }
            default:{
                std::cout << "Function not found" << std::endl;
            }
        }
        std::cout << "1)Set parameter" << std::endl<< "2)Side of square" << std::endl<< "3)Distance to the centre" << std::endl<< "4)Radius of curvature at the top" << std::endl<< "5)Radius of curvature at the anchor point" << std::endl<< "6)Area of the loop" << std::endl<< "7)Length of the largest diameter" << std::endl<< "8)Distance from the node to the largest diameter" << std::endl<< "0)Exit"<< std::endl<< "::";
    }
    return 0;
}
