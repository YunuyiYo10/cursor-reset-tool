// fingerprint.cpp — part of cursor-reset-tool.

#include "cursorresettool/fingerprint.h"

#include <cstdio>

namespace cursorresettool {

Fingerprint::Fingerprint(const std::string& config_path)
    : config_path_(config_path) {}

void Fingerprint::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Fingerprint::run() {
    if (verbose_) std::fprintf(stderr, "[cursor-reset-tool] fingerprint: run\n");
    // core logic lives here
    return true;
}

}  // namespace cursorresettool
