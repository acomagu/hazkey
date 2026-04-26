#include "thumb_shift.h"

namespace fcitx {

std::string thumbShiftToken(ThumbShiftState state,
                            const std::string& keyText) {
    switch (state) {
        case ThumbShiftState::Left:
            return "L:" + keyText;
        case ThumbShiftState::Right:
            return "R:" + keyText;
        case ThumbShiftState::Both:
            return "LR:" + keyText;
        case ThumbShiftState::None:
            return "none:" + keyText;
    }
    return "none:" + keyText;
}

}  // namespace fcitx
