//
// Created by julien boyer on 31/08/2021.
//

#ifndef ASEPRITE_ANIMATION_ANCHOR_H
#define ASEPRITE_ANIMATION_ANCHOR_H

#include "doc/object.h"

namespace doc {
    class AnimationAnchor : public Object {
    public:
        AnimationAnchor(int x, int y);

        AnimationAnchor(const AnimationAnchor &other);

        void setX(int x);

        void setY(int y);

        int getX() const;

        int getY() const;

        float getNormalizedX(int layerWidth) const;

        float getNormalizedY(int layerHeight) const;

    private:
        int m_x;
        int m_y;
    };

}

#endif //ASEPRITE_ANIMATION_ANCHOR_H
