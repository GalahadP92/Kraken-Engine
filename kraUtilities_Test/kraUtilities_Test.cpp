#include <iostream>
#include <kraVector2.h>

using namespace kraEngineSDK;

int main()
{
  Vector2 newVec(1.0f, 6.0f);
  Vector2 otherVec(2.0, 3.0);

  newVec *= otherVec;
  std::cout << "The multiplication of newVec times otherVec is: " << newVec.toString() << std::endl;

  std::cout << "New Vector: " << newVec.toString() << std::endl;
  std::cout << "Other Vector: " << otherVec.toString() << std::endl;

  Vector2 sumVec = newVec + otherVec;

  std::cout << "Sum of vectors: " << sumVec.toString() << std::endl;

  sumVec.normalized();
  std::cout << "Normalized sumVec: " << sumVec.toString() << std::endl;

  std::cout << "The cross product of both is: " << Vector2::cross(newVec, otherVec) << std::endl;
  std::cout << "The dot product of both is: " << Vector2::dot(newVec, otherVec) << std::endl;

  sumVec *= 2;
  std::cout << "The multiplication of sumVec times 2 is: " << sumVec.toString() << std::endl;

  Vector2 Vec3(1.0f, 6.0f);
  Vector2 Vec4(2.0, 3.0);
  Vector2 Vec5(2.0, 3.0);
  Vector2 Vec6(2.0, 3.0);

  Vec3 -= Vec4;
  Vec6 -= Vec5;
  std::cout << "The sum of vec3 & vec4 is: " << Vec3.toString() << std::endl;
  std::cout << "vec3: " << Vec3.toString() << "Vec4: " << Vec4.toString() << std::endl;
  Vec3 -= Vector2(6.0, 10.0);
  std::cout << "The sub of vec3 & vec4 is: " << Vec3.toString() << std::endl;
  std::cout << "The sub of vec6 & vec5 is: " << Vec6.toString() << std::endl;

  bool isequal = Vec3 == Vec4;
  bool isnotequal = Vec3 != Vec4;
  std::cout << isequal << std::endl;
  std::cout << isnotequal << std::endl;

  Vector2 a(5.0f, 10.0f);
  Vector2 b(9.0f, 7.0f);



  std::cout << "the distance between a and b is: " << Vector2::min(a, b).toString() << std::endl;



}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
