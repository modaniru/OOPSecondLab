//#include "iostream"
//#include "math.h"
//
//class Point2D {
//protected:
//    int x;
//    int y;
//public:
//    Point2D() {
//        printf("Point2D()\n");
//        x = 0;
//        y = 0;
//    }
//
//    Point2D(int x, int y) : x(x), y(y) {
//        printf("Point2D(int x, int y) : x(x), y(y)\n");
//    }
//
//    Point2D(const Point2D &point2D) {
//        printf("Point2D(const Point2D& point2D)\n");
//        x = point2D.x;
//        y = point2D.y;
//    }
//
//    //виртуальный, чтобы переопределять в классах наследниках
//    virtual ~Point2D() {
//        printf("virtual ~Point2D()\n");
//        printf("\tx = %d\n", x);
//        printf("\ty = %d\n", y);
//
//    }
//
//    virtual int distance() {
//        printf("virtual int distance()\n");
//        return sqrt(x * x + y * y);
//    }
//};
//
//class Point3D : public Point2D {
//protected:
//    int z;
//public:
//    Point3D() : Point2D() {
//        printf("Point3D() : Point2D()\n");
//        z = 0;
//    }
//
//    Point3D(int x, int y, int z) : Point2D(x, y) {
//        printf("Point3D(int x, int y, int z) : Point2D(x, y)\n");
//        this->z = z;
//    }
//
//    Point3D(const Point3D &point3D) : Point2D(point3D) {
//        printf("Point3D(const Point3D & point3D) : Point2D(point3D)\n");
//        z = point3D.z;
//    }
//
//    virtual ~Point3D() {
//        printf("virtual ~Point3D()\n");
//        printf("\tz = %d\n", z);
//    }
//
//    virtual int distance() override {
//        printf("virtual int distance() override\n");
//        return sqrt(x * x + y * y + z * z);
//    }
//    void moveToZero(){
//        x = 0;
//        y = 0;
//        z = 0;
//    }
//};
//
//int main() {
//    Point2D *point2D = new Point2D(2,3);
//    Point3D *point3D = new Point3D(1, 2, 3);
//    Point2D *point2D1 = new Point3D(*point3D);
//
//    printf("\n");
//
//    point2D->distance();
//    point3D->distance();
//    point3D->moveToZero();
//    point2D1->distance();
//    //point2D1->moveToZero(); //не могу, потому-что такого метода нет в классе А, хоть он и есть в наследнике Б
//
//    printf("\n");
//
//    delete point2D1;
//    delete point3D;
//    delete point2D;
//}