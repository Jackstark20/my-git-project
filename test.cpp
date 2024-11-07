#include <iostream>
#include <cmath>

class Vector {
private:
    // ˽�г�Ա���� x �� y����ʾ��������������
    double x, y;

public:
    // ���캯������ʼ�� x �� y
    Vector(double x_val, double y_val) : x(x_val), y(y_val) {}

    // add ����������һ�� Vector ���󲢷�����ӽ�����µ� Vector ����
    Vector add(const Vector &other) const {
        return Vector(x + other.x, y + other.y);
    }

    // print ��������ӡ�����ķ���
    void print() const {
        std::cout << "Vector(" << x << ", " << y << ")" << std::endl;
    }

    // dir ���������㲢��ӡ������ģ��
    void dir() const {
        double magnitude = std::sqrt(x * x + y * y);
        std::cout << "Magnitude of Vector(" << x << ", " << y << "): " << magnitude << std::endl;
    }
};

int main() {
    // ����������������ӡ�������ģ��
    Vector v1(3.0, 4.0);
    Vector v2(1.0, 2.0);

    std::cout << "Vector 1:" << std::endl;
    v1.print();
    v1.dir();

    std::cout << "\nVector 2:" << std::endl;
    v2.print();
    v2.dir();

    // ���㲢��ӡ���������ĺͼ���ģ��
    Vector result = v1.add(v2);
    std::cout << "\nResultant Vector (v1 + v2):" << std::endl;
    result.print();
    result.dir();

    return 0;
}
