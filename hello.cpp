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

int main()
{
    Point P;
    P.x = 5;
    P.y = 6;
    P.getX();
    P.getY();
    P.setX(P.x);
    P.setY(P.y);
    return 0;
}
