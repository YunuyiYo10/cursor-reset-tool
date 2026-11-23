// fingerprint — part of cursor-reset-tool.

#pragma once

#include <string>
#include <vector>

namespace cursorresettool {

class Fingerprint {
public:
    explicit Fingerprint(const std::string& config_path);

    void configure(const std::string& key, const std::string& value);
    bool run();
    bool verbose() const { return verbose_; }

private:
    std::string config_path_;
    bool verbose_ = false;
};

}  // namespace cursorresettool
