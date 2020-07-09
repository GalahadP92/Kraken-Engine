/*(V)(°,,,°)(V)/(V)(°,,,°)(V)/(V)(°,,,°)(V)/(V)(°,,,°)(V)*/
/*
** @brief: A vertex class to 
**
**
*/
/*(V)(°,,,°)(V)/(V)(°,,,°)(V)/(V)(°,,,°)(V)/(V)(°,,,°)(V)/*/
#pragma once
#include "kraPrerequisitesUtil.h"

#include "kraVector2.h"
#include "kraVector3.h"
#include "kraColor.h"

namespace kraEngineSDK {


  struct KRA_UTILITY_EXPORT Vertex
  {
  public:

#pragma region Cosntructors
    Vertex() = default;

    Vertex(const Vertex& copyVert) {
      m_position = copyVert.m_position;
      //m_color = copyVert.m_color;
      m_normal = copyVert.m_normal;
      m_texCoords = copyVert.m_texCoords;
      m_tangent = copyVert.m_tangent;
      m_biNormal = copyVert.m_biNormal;
    }

    Vertex(const Vector3 _position) {
      m_position = _position;
    }
#pragma endregion

    Vector3 m_position = Vector3(0.0f, 0.0f, 0.0f);
    //Color m_color = Color::Clear;
    Vector3 m_normal = Vector3(0.0f, 0.0f, 0.0f);
    Vector2 m_texCoords = Vector2(0.0f, 0.0f);
    Vector3 m_tangent = Vector3(0.0f, 0.0f, 0.0f);
    Vector3 m_biNormal = Vector3(0.0f, 0.0f, 0.0f);

  };
}
