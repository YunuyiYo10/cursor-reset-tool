// main.cpp — entry point. Wires config and subsystems together.

#include "cursorresettool/settings.h"
#include "cursorresettool/resetter.h"
#include "cursorresettool/fingerprint.h"
#include "cursorresettool/backup.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    cursorresettool::Settings settings = cursorresettool::Settings::load_default();
    cursorresettool::Resetter resetter(settings.store_path);
    cursorresettool::Fingerprint fingerprint(settings.store_path);
    cursorresettool::Backup backup(settings.store_path);
    std::fprintf(stderr, "[cursor-reset-tool] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
