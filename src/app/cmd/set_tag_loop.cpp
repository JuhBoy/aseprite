//
// Created by julien boyer on 29/08/2021.
//

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "set_tag_loop.h"

#include "doc/tag.h"

namespace app {
namespace cmd {

    SetTagLoop::SetTagLoop(Tag* tag, bool isLoop)
            : WithTag(tag)
            , m_oldLoop(tag->isLoop())
            , m_newLoop(isLoop)
    { }

    void SetTagLoop::onExecute()
    {
        tag()->setLoop(m_newLoop);
        tag()->incrementVersion();
    }

    void SetTagLoop::onUndo()
    {
        tag()->setLoop(m_oldLoop);
        tag()->incrementVersion();
    }

} // namespace cmd
} // namespace app