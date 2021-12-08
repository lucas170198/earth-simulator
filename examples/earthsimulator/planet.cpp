#include "planet.hpp"

#include <glm/gtc/epsilon.hpp>
#include <limits>


void Planet::resizeViewport(int width, int height) {
  m_viewportWidth = static_cast<float>(width);
  m_viewportHeight = static_cast<float>(height);
}

glm::mat4 Planet::getRotation() {

  // If not tracking, rotate by velocity. This will simulate
  // an inertia-free rotation.
  const auto angle{m_velocity * static_cast<float>(m_lastTime.elapsed()) *
                   1000.0f};

  return glm::rotate(glm::mat4(1.0f), angle, m_axis) * m_rotation;
}