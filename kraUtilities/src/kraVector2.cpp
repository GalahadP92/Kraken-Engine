#include "kraVector2.h"

namespace kraEngineSDK {
  
  float 
  Vector2::length() const
  {
    return Math::sqrt(x * x + y * y);
  }

  float 
  Vector2::lenghtSqrd() const
  {
    return x * x + y * y;
  }

  Vector2
  Vector2::normalized()
  {
    float m = length();
    KRA_ASSERT(m > 0);
    return Vector2(x /= m, y /= m);
  }

  void 
  Vector2::normalize()
  {
    float m = length();
    KRA_ASSERT(m > 0);
    x /= m;
    y /= m;
  }

  float
  Vector2::cross(Vector2 a, Vector2 b)
  {
    return a ^ b;
  }

  float 
  Vector2::distance(Vector2 a, Vector2 b)
  {
    return (a - b).length();
  }

  float 
  Vector2::dot(Vector2 a, Vector2 b)
  {
    return a | b;
  }
  
  Vector2 
  Vector2::max(Vector2 a, Vector2 b)
  {
    Vector2 newVec = a;
    if (newVec.x < b.x) {
      newVec.x = b.x;
    }
    if (newVec.y < b.y) {
      newVec.y = b.y;
    }
    return newVec;
  }

  Vector2 
  Vector2::min(Vector2 a, Vector2 b)
  {
    Vector2 newVec = a;
    if (newVec.x > b.x) {
      newVec.x = b.x;
    }
    if (newVec.y > b.y) {
      newVec.y = b.y;
    }
    return newVec;
  }

  Vector2 
  Vector2::reflect(Vector2 direction, Vector2 normal)
  {
    normal.normalize();
    direction.normalize();

    Vector2 reflected = normal * 2*(normal | direction)  - direction;
    return reflected;
  }

  String Vector2::toString()
  {
    String output;

    output += "( ";
    output += std::to_string(x);
    output += ", ";
    output += std::to_string(y);
    output += " )";

    return output;
  }

  float&
  Vector2::operator[](uint32 index) {
    KRA_ASSERT(index <= 1);
    return (&x)[index];
  }

  float 
  Vector2::operator[](uint32 index) const
  {
    KRA_ASSERT(index <= 1);
    return (&x)[index];
  }

  void 
  Vector2::operator+=(const Vector2& other)
  {
    x += other.x;
    y += other.y;
  }

  void 
  Vector2::operator-=(const Vector2& other)
  {
    x -= other.x;
    y -= other.y;
  }


  Vector2
  Vector2::operator-() const
  {
    return Vector2(-x, -y);
  }

  bool Vector2::operator<=(const Vector2 other) const
  {
    return x <= other.x && y <= other.y;
  }

  bool Vector2::operator<(const Vector2 other) const
  {
    return x < other.x && y < other.y;
  }

  bool
  Vector2::operator>=(const Vector2 other) const
  {
    return x >= other.x && y >= other.y;
  }

  bool Vector2::operator>(const Vector2 other) const
  {
    return x > other.x && y > other.y;
  }

  bool
  Vector2::operator==(const Vector2 other) const
  {
    return x == other.x && y == other.y;
  }

  bool 
  Vector2::operator!=(const Vector2 other) const
  {
    return x != other.x && y != other.y;
  }

  Vector2
  Vector2::operator*(float scalar) const {
    return Vector2(x * scalar, y * scalar);
  }

  Vector2 
  Vector2::operator*(const Vector2& other) const
  {
    return Vector2(x * other.x, y * other.y);
  }

  Vector2 
  Vector2::operator/(const Vector2& other) const
  {
    KRA_ASSERT(other.x > 0 && other.y > 0);
    return Vector2(x / other.x, y / other.y);
  }

  Vector2
  Vector2::operator+(const Vector2& other) const
  {
    return Vector2(x + other.x, y + other.y);
  }

  Vector2 
  Vector2::operator-(const Vector2& other) const
  {
    return Vector2(x - other.x, y - other.y);
  }

  float 
  Vector2::operator|(const Vector2& other) const
  {
    return (x * other.x + y * other.y);
  }

  float 
  Vector2::operator^(const Vector2& other) const
  {
    return (x * other.y - other.x * y);
  }

  void 
  Vector2::operator/=(const Vector2& other)
  {
    KRA_ASSERT(other.x > 0 && other.y > 0);
    x /= other.x;
    y /= other.y;
  }

  void
  Vector2::operator*=(const Vector2& other)
  {
    x *= other.x;
    y *= other.y;
  }

  void
  Vector2::operator*=(const float& scalar)
  {
    x *= scalar;
    y *= scalar;
  }

  Vector2 Vector2::ZERO = Vector2(0.0f, 0.0f);

  Vector2 Vector2::ONE = Vector2(1.0f, 1.0f);

  Vector2 Vector2::UP = Vector2(0.0f, 1.0f);

  Vector2 Vector2::DOWN = Vector2(0.0f, -1.0f);

  Vector2 Vector2::RIGHT = Vector2(1.0f, 0.0f);

  Vector2 Vector2::LEFT = Vector2(-1.0f, 0.0f);

}