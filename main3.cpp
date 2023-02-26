
#include "iostream"

class Point {
private:
    int x;
    int y;
public:
    Point() {
        printf("Point()\n");
        x = 0;
        y = 0;
    }

    Point(int x, int y) {
        printf("Point(int x, int y)\n");
        this->x = x;
        this->y = y;
    }

    Point(const Point &point) {
        printf("Point(const Point &point)\n");
        x = point.x;
        y = point.y;
    }
    ~Point(){
        printf("~Point()\n");
        printf("\tx = %d\n", x);
        printf("\ty = %d\n", y);
    }
};

class Section{
private:
    //при такой инициализации первым делом вызываются конструкторы для свойств, потом основной конструктор
    //+ сам вызывается диструктор
    Point start;
    Point end;
public:
    Section() : start(), end(){
        printf("Section()\n");
    }
    Section(int x1, int y1, int x2, int y2) : start(x1, y1), end(x2, y2){
        printf("Section(int x1, int y1, int x2, int y2)\n");
    }
    Section(const Point& start, const Point& end): start(start), end(end){
        printf("Section(const Point& start, const Point& end)\n");
    }
    Section(const Section& section): start(section.start), end(section.end){
        printf("Section(const Section& section)\n");
    }
    ~Section(){
        printf("~Section()\n");
    }
};

int main() {
    Section* section = new Section(1,2,3,4);
    Section* section1 = new Section(*section);
    delete section1;
    delete section;
}