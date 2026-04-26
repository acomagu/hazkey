#ifndef _FCITX5_HAZKEY_THUMB_SHIFT_H_
#define _FCITX5_HAZKEY_THUMB_SHIFT_H_

#include <string>

namespace fcitx {

enum class ThumbShiftState {
    None,
    Left,
    Right,
    Both,
};

std::string thumbShiftToken(ThumbShiftState state,
                            const std::string& keyText);

}  // namespace fcitx

#endif  // _FCITX5_HAZKEY_THUMB_SHIFT_H_
