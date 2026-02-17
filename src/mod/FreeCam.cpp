#include "mod/FreeCam.h"

#include "ll/api/mod/RegisterHelper.h"

namespace freecam {

FreeCam& FreeCam::getInstance() {
    static FreeCam instance;
    return instance;
}

bool FreeCam::load() {
    getSelf().getLogger().info("Loading...");
    // Code for loading the mod goes here.
    return true;
}

bool FreeCam::enable() {
    getSelf().getLogger().info("Enabling...");
    // Code for enabling the mod goes here.
    return true;
}

bool FreeCam::disable() {
    getSelf().getLogger().info("Disabling...");
    // Code for disabling the mod goes here.
    return true;
}

} // namespace freecam

LL_REGISTER_MOD(freecam::FreeCam, freecam::FreeCam::getInstance());
