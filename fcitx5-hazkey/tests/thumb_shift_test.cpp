#include "thumb_shift.h"

#include <cassert>

int main() {
    using fcitx::ThumbShiftState;
    using fcitx::thumbShiftToken;

    assert(thumbShiftToken(ThumbShiftState::None, "a") == "none:a");
    assert(thumbShiftToken(ThumbShiftState::Left, "a") == "L:a");
    assert(thumbShiftToken(ThumbShiftState::Right, "a") == "R:a");
    assert(thumbShiftToken(ThumbShiftState::Both, "a") == "LR:a");
    return 0;
}
