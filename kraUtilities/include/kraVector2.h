#pragma once
#include "kraPrerequisitesUtil.h"
#include "kraMath.h"

namespace kraEngineSDK {
  class KRA_UTILITY_EXPORT Vector2
  {
   public:

    // Constructors
    Vector2() = default;

    Vector2(float _x, float _y) 
    : x(_x), y(_y) {}

    Vector2(const Vector2& other) 
    : x(other.x), y(other.y) {}

    // Methods
    
    /*
    ** @brief: Gets the magnitude/length of this vector  
    ** @return a float representing the length of this vector
    */
    float
    length() const;

    /*
    ** @brief: Gets the magnitude/length of this vector squared
    ** @return a float representing the length of this vector squared
    */
    float
    lenghtSqrd() const;

    /*
    ** @brief: Returns this vector normalized, without affecting the actual values
    ** @return: This vector with a magnitude of 1 as a new Vector2
    */
    Vector2
    normalized();

    /*
    ** @brief: Normalizes this vector
    */
    void 
    normalize();

    float
    projectionLngth(const Vector2& other);
    
    String
    toString();

    /*
    ** @brief: Gets the cross product of two vectors
    ** @param: 2 vectors
    ** @return: A new Vector2 perpendicular to both vectors).
    */
    static float
    cross(Vector2 a, Vector2 b);

    /*
    ** @brief: Returns the distance between two vectors.
    ** @param: The 2 vectors 
    ** @return: A float value representing the distance between the 2 Vector2s 
    */
    static float
    distance(Vector2 a, Vector2 b);

    /*
    ** @brief: Gets the dot product of two vectors
    ** @param: 2 vectors
    ** @return: A scalar representing the dot product 
    **(the difference between the directions in which the two vectors point).
    */
    static float
    dot(Vector2 a, Vector2 b);

    /*
    ** @brief: Returns a vector made with the largest components of 2 other vectors
    ** @param: The 2 vectors 
    ** @return: A new Vector2 with the largest values of the other 2 vector
    */
    static Vector2
    max(Vector2 a, Vector2 b);
    
    /*
    ** @brief: Returns a vector made with the smallest components of 2 other vectors
    ** @param: The 2 vectors
    ** @return: A new Vector2 with the smallest values of the other 2 vector
    */
    static Vector2
    min(Vector2 a, Vector2 b);
    
    static Vector2
    reflect(Vector2 direction, Vector2 normal);

    // Operator overloads

    /*
    ** @brief: Operator to access components by index
    ** @param: The index/position of the component
    ** @return one of the components based on the index
    */
    float&
    operator[](uint32 index);

    /*
    ** @brief: Operator to access components by index
    ** @param: The index/position of the component
    ** @return one of the components based on the index
    */
    float
    operator[](uint32 index) const;

    /*
    ** @brief: Operator to get the dot product of two 2D vectors
    ** @param: A constant reference of the other vector
    ** @return The dot product of the two vectors
    */
    float
      operator|(const Vector2& other) const;

    /*
    ** @brief: Operator to get the cross product of two 2D vectors
    ** @param: A constant reference of the other vector
    ** @return A scalar
    */
    float
    operator^(const Vector2& other) const;

    void 
    operator*= (const float& scalar);

    void
    operator*= (const Vector2& other);

    void
    operator/= (const Vector2& other);

    void
    operator+= (const Vector2& other);

    void
    operator-=(const Vector2& other);

    Vector2
    operator*(const float scalar) const;

    Vector2
    operator*(const Vector2& other) const;
    
    Vector2
    operator/(const Vector2& other) const;

    Vector2
    operator+(const Vector2& other) const;

    Vector2
    operator-(const Vector2& other) const;

    bool
    operator== (const Vector2 other) const;

    bool
    operator!= (const Vector2 other) const;

    bool
    operator>= (const Vector2 other) const;

    bool
    operator<= (const Vector2 other) const;

    bool
    operator> (const Vector2 other) const;

    bool
    operator< (const Vector2 other) const;

    Vector2
    operator-() const;
    
    // Shorthand constants 
    static Vector2 ZERO;
                 
    static Vector2 ONE;
                 
    static Vector2 UP;

    static Vector2 DOWN;
                 
    static Vector2 RIGHT;

    static Vector2 LEFT;
    
    // Member Components

    float x = 0.0f;
    float y = 0.0f;

  };
}
