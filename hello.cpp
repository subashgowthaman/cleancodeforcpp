class Point {
private:
    int x;
    int y;
public:
    Point() { this->x = 0; this->y=0; }
    const inline int getX() { return this->x; }
    const inline int getY() { return this->y; }
    inline void setX(int x) { this->x = x; }
    inline void setY(int y) { this->y = y; }
};

void Getandset()
{
    Point P;
    int a =5;
    int b = 6;
    P::getX();
    P::getY();
    P::setX(a);
    P::setY(b);
}
