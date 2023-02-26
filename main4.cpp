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

    ~Point() {
        printf("~Point()\n");
        printf("\tx = %d\n", x);
        printf("\ty = %d\n", y);
    }
};

class Section {
private:
    Point *start;
    Point *end;
public:
    Section() {
        printf("Section()\n");
        start = new Point();
        end = new Point();
    }

    Section(int x1, int y1, int x2, int y2) {
        printf("Section(int x1, int y1, int x2, int y2)\n");
        start = new Point(x1, y1);
        end = new Point(x2, y2);
    }

    Section(const Point &start, const Point &end) {
        printf("Section(const Point& start, const Point& end)\n");
        this->start = new Point(start);
        this->end = new Point(end);
    }

    Section(const Section &section) {
        printf("Section(const Section& section)\n");
        start = new Point(*section.start);
        end = new Point(*section.end);
    }

    ~Section() {
        printf("~Section()\n");
        delete start;
        delete end;
    }
};

int main() {
    Point *start = new Point(1, 2);
    Point *end = new Point(3, 4);
    Section *section = new Section(*start, *end);
    delete section;
    printf("\n");
    //если не копировать объект start и end, то при уничтожении ниже у нас выбросится ошибка, так как мы пытаемся
    //освободить уже освобожденную память
    delete start;
    delete end;
}