//
// Created by julien boyer on 31/08/2021.
//

#include "animation_anchor.h"

namespace doc {
    AnimationAnchor::AnimationAnchor(int x, int y) : Object(ObjectType::AnimationAnchor), m_x(x), m_y(y) {}

    AnimationAnchor::AnimationAnchor(const AnimationAnchor &other) : Object(ObjectType::AnimationAnchor),
                                                                     m_x(other.m_x),
                                                                     m_y(other.m_y) {}

    void AnimationAnchor::setX(int x) {
      m_x = x;
    }

    void AnimationAnchor::setY(int y) {
      m_y = y;
    }

    int AnimationAnchor::getX() const {
      return m_x;
    }

    int AnimationAnchor::getY() const {
      return m_y;
    }

    float AnimationAnchor::getNormalizedX(int layerWidth) const {
      return (float) m_x / (float) layerWidth;
    }

    float AnimationAnchor::getNormalizedY(int layerHeight) const {
      return (float) m_y / (float) layerHeight;
    }
}