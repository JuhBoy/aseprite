//
// Created by julien boyer on 31/08/2021.
//

#ifndef ASEPRITE_SET_TAG_ANIMATION_ANCHOR_H
#define ASEPRITE_SET_TAG_ANIMATION_ANCHOR_H

#include "app/cmd.h"
#include "app/cmd/with_tag.h"
#include "../doc/animation_anchor.h"
#include "doc/tag.h"

namespace app{
namespace cmd {
  class SetTagAnimationAnchor :
          public Cmd,
          public WithTag {

  public:
      SetTagAnimationAnchor(Tag* tag, int newAnchorX, int newAnchorY);
      SetTagAnimationAnchor(Tag* tag, const doc::AnimationAnchor& anchor);

      void onExecute() override;
      void onUndo() override;

  private:
      AnimationAnchor oldAnchor;
      AnimationAnchor newAnchor;
      bool m_done;
  };
}
}



#endif //ASEPRITE_SET_TAG_ANIMATION_ANCHOR_H
