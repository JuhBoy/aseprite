//
// Created by julien boyer on 29/08/2021.
//

#ifndef ASEPRITE_SET_TAG_LOOP_H
#define ASEPRITE_SET_TAG_LOOP_H
#pragma once

#include "app/cmd.h"
#include "app/cmd/with_tag.h"

namespace app {
namespace cmd {
class SetTagLoop : public Cmd
                 , public WithTag {
public:
    SetTagLoop(Tag* tag, bool isLoop);

protected:
    void onExecute() override;
    void onUndo() override;
    size_t onMemSize() const override {
        return sizeof(*this);
    }

private:
    bool m_oldLoop;
    bool m_newLoop;
};
} // namespace cmd
} // namespace app


#endif //ASEPRITE_SET_TAG_LOOP_H
