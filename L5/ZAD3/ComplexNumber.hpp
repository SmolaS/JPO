#include <iostream>
#include <cmath>
#include <type_traits>

namespace ss
{
    namespace jpo
    {
        template <typename T>
            requires std::is_arithmetic_v<T>
        class ComplexNumber
        {
        private:
            T m_real;
            T m_imag;

        public:
            // Constructor
            ComplexNumber(T r = T{}, T i = T{}) : m_real(r), m_imag(i) {}

            // Setters and getters
            void setReal(T r)
            {
                m_real = r;
            }
            void setImag(T i)
            {
                m_imag = i;
            }
            T getReal() const
            {
                return m_real;
            }
            T getImag() const
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
            // Overload for double
            ComplexNumber operator+(T value) const
            {
                return ComplexNumber(m_real + value, m_imag);
            }

            ComplexNumber &operator+=(T value)
            {
                m_real += value;
                return *this;
            }

            ComplexNumber operator-(T value) const
            {
                return ComplexNumber(m_real - value, m_imag);
            }

            ComplexNumber &operator-=(T value)
            {
                m_real -= value;
                return *this;
            }
        };
        // <<
        template <typename T>
        std::ostream &operator<<(std::ostream &os, const ComplexNumber<T> &c)
        {
            os << c.getReal() << (c.getImag() >= 0 ? " + " : " - ") << std::abs(c.getImag()) << "i";
            return os;
        }
    }
}