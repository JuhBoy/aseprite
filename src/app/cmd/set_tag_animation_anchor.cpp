//
// Created by julien boyer on 31/08/2021.
//

#include "set_tag_animation_anchor.h"

app::cmd::SetTagAnimationAnchor::SetTagAnimationAnchor(doc::Tag *tag, int newAnchorX, int newAnchorY) :
        WithTag(tag),
        newAnchor(newAnchorX, newAnchorY),
        oldAnchor(tag->anchor().getX(), tag->anchor().getY()),
        m_done(false) { }

app::cmd::SetTagAnimationAnchor::SetTagAnimationAnchor(Tag* tag, const doc::AnimationAnchor& anchor) :
    WithTag(tag),
    newAnchor(anchor.getX(), anchor.getY()),
    oldAnchor(tag->anchor().getX(), tag->anchor().getY()),
    m_done(false)
{ }

void app::cmd::SetTagAnimationAnchor::onExecute() {
  tag()->setAnchor(newAnchor);
  tag()->incrementVersion();
  m_done = true;
}

void app::cmd::SetTagAnimationAnchor::onUndo() {
  tag()->setAnchor(oldAnchor);
  tag()->incrementVersion();
  m_done = false;
}
