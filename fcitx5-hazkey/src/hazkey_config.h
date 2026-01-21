#ifndef _FCITX5_HAZKEY_HAZKEY_CONFIG_H_
#define _FCITX5_HAZKEY_HAZKEY_CONFIG_H_

#include <fcitx-config/configuration.h>
#include <fcitx-config/enum.h>
#include <fcitx-utils/i18n.h>
#include <fcitx-utils/library.h>
#include <fcitx-utils/keysym.h>
#include <fcitx/menu.h>

namespace fcitx {

/// Config

FCITX_CONFIGURATION(HazkeyEngineConfig,
                    Option<bool> showTabToSelect{
                        this, "showTabToSelect",
                        _("Show [Press Tab to Select] indicator"), true};
                    Option<bool> enableThumbShift{
                        this, "enableThumbShift", _("Enable thumb shift"),
                        false};
                    Option<int> thumbShiftLeftKeySym{
                        this, "thumbShiftLeftKeySym",
                        _("Left thumb key keysym"),
                        static_cast<int>(FcitxKey_Muhenkan)};
                    Option<int> thumbShiftRightKeySym{
                        this, "thumbShiftRightKeySym",
                        _("Right thumb key keysym"),
                        static_cast<int>(FcitxKey_Henkan)};
                    Option<int> thumbShiftTimeoutMs{
                        this, "thumbShiftTimeoutMs",
                        _("Thumb shift chord timeout (ms)"), 80};
                    Option<int> thumbShiftTapAction{
                        this, "thumbShiftTapAction",
                        _("Thumb tap action (0=none, 1=space, 2=passthrough)"),
                        1};
                    ExternalOption openHazkeySettings{
                        this, "openHazkeySettings", _("Open Hazkey Settings"),
                        stringutils::concat("hazkey-settings")};);
}  // namespace fcitx
#endif  // _FCITX5_HAZKEY_HAZKEY_CONFIG_H_
