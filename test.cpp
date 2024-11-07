#include <iostream>
#include <cmath>

class Vector {
private:
    // 私有成员变量 x 和 y，表示向量的两个分量
    double x, y;

public:
    // 构造函数，初始化 x 和 y
    Vector(double x_val, double y_val) : x(x_val), y(y_val) {}

    // add 方法，接受一个 Vector 对象并返回相加结果的新的 Vector 对象
    Vector add(const Vector &other) const {
        return Vector(x + other.x, y + other.y);
    }

    // print 方法，打印向量的分量
    void print() const {
        std::cout << "Vector(" << x << ", " << y << ")" << std::endl;
    }

    // dir 方法，计算并打印向量的模长
    void dir() const {
        double magnitude = std::sqrt(x * x + y * y);
        std::cout << "Magnitude of Vector(" << x << ", " << y << "): " << magnitude << std::endl;
    }
};

int main() {
    // 创建两个向量并打印其分量和模长
    Vector v1(3.0, 4.0);
    Vector v2(1.0, 2.0);

    std::cout << "Vector 1:" << std::endl;
    v1.print();
    v1.dir();

    std::cout << "\nVector 2:" << std::endl;
    v2.print();
    v2.dir();

    // 计算并打印两个向量的和及其模长
    Vector result = v1.add(v2);
    std::cout << "\nResultant Vector (v1 + v2):" << std::endl;
    result.print();
    result.dir();

    return 0;
}
