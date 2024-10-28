class Wektor2D
{
private:
    double x;
    double y;

public:
    // Konstruktor domyœlny (wektor o wspó³rzêdnych [0, 0])
    Wektor2D() : x(0), y(0) {}

    // Konstruktor przyjmuj¹cy wspó³rzêdne
    Wektor2D(double x, double y) : x(x), y(y) {}

    // Settery
    void setX(double x) { this->x = x; }
    void setY(double y) { this->y = y; }

    // Gettery
    double getX() const { return x; }
    double getY() const { return y; }

    // Operator dodawania wektorów
    Wektor2D operator+(const Wektor2D& other) const {
        return Wektor2D(x + other.x, y + other.y);
    }

    // Operator mno¿enia skalarnego
    double operator*(const Wektor2D& other) const {
        return x * other.x + y * other.y;
    }
};

