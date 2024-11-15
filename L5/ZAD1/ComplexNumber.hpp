#include <iostream>
#include <cmath>

class ComplexNumber
{
private:
    double m_real;
    double m_imag;

public:
    // Constructor
    ComplexNumber(double r = 0.0, double i = 0.0) : m_real(r), m_imag(i) {}

    // Setters and getters
    void setReal(double r)
    {
        m_real = r;
    }
    void setImag(double i)
    {
        m_imag = i;
    }
    double getReal() const
    {
        return m_real;
    }
    double getImag() const
    {
        return m_imag;
    }

    // Overload
    ComplexNumber operator+(const ComplexNumber &other) const
    {
        return ComplexNumber(m_real + other.m_real, m_imag + other.m_imag);
    }

    ComplexNumber &operator+=(const ComplexNumber &other)
    {
        m_real += other.m_real;
        m_imag += other.m_imag;
        return *this;
    }

    ComplexNumber operator-(const ComplexNumber &other) const
    {
        return ComplexNumber(m_real - other.m_real, m_imag - other.m_imag);
    }

    ComplexNumber &operator-=(const ComplexNumber &other)
    {
        m_real -= other.m_real;
        m_imag -= other.m_imag;
        return *this;
    }

    ComplexNumber operator*(const ComplexNumber &other) const
    {
        return ComplexNumber(m_real * other.m_real, m_imag * other.m_imag);
    }

    ComplexNumber &operator*=(const ComplexNumber &other)
    {
        m_real *= other.m_real;
        m_imag *= other.m_imag;
        return *this;
    }

    ComplexNumber operator/(const ComplexNumber &other) const
    {
        return ComplexNumber(m_real / other.m_real, m_imag / other.m_imag);
    }

    ComplexNumber &operator/=(const ComplexNumber &other)
    {
        m_real /= other.m_real;
        m_imag /= other.m_imag;
        return *this;
    }

    bool operator==(const ComplexNumber &other) const
    {
        return m_real == other.m_real && m_imag == other.m_imag;
    }

    bool operator!=(const ComplexNumber &other) const
    {
        return !(*this == other);
    }

    // <<
    friend std::ostream &operator<<(std::ostream &os, const ComplexNumber &c)
    {
        os << c.m_real << (c.m_imag >= 0 ? " + " : " - ") << std::abs(c.m_imag) << "i";
        return os;
    }

    // Overload for double
    ComplexNumber operator+(double value) const
    {
        return ComplexNumber(m_real + value, m_imag);
    }

    ComplexNumber &operator+=(double value)
    {
        m_real += value;
        return *this;
    }

    ComplexNumber operator-(double value) const
    {
        return ComplexNumber(m_real - value, m_imag);
    }

    ComplexNumber &operator-=(double value)
    {
        m_real -= value;
        return *this;
    }
};
