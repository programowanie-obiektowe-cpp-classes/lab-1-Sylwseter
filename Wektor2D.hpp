class Wektor2D
{
private:
    double x;
    double y;

public:
    // Konstruktor domy�lny (wektor o wsp�rz�dnych [0, 0])
    Wektor2D() : x(0), y(0) {}

    // Konstruktor przyjmuj�cy wsp�rz�dne
    Wektor2D(double x, double y) : x(x), y(y) {}

    // Settery
    void setX(double x) { this->x = x; }
    void setY(double y) { this->y = y; }

    // Gettery
    double getX() const { return x; }
    double getY() const { return y; }

    // Operator dodawania wektor�w
    Wektor2D operator+(const Wektor2D& other) const {
        return Wektor2D(x + other.x, y + other.y);
    }

    // Operator mno�enia skalarnego
    double operator*(const Wektor2D& other) const {
        return x * other.x + y * other.y;
    }
};

