#ifndef PLANET_HPP_
#define PLANET_HPP_

#include "abcg.hpp"

class Planet {
 public:
  void resizeViewport(int width, int height);

  [[nodiscard]] glm::mat4 getRotation();

  void setAxis(glm::vec3 axis) { m_axis = axis; }
  void setVelocity(float velocity) { m_velocity = velocity; }

 private:
  const float m_maxVelocity{glm::radians(720.0f / 1000.0f)};

  glm::vec3 m_axis{1.0f};
  float m_velocity{};
  glm::mat4 m_rotation{1.0f};
  
  abcg::ElapsedTimer m_lastTime{};

  float m_viewportWidth{};
  float m_viewportHeight{};
};

#endif