#pragma once

#include <array>
#include <vector>

#include <3ds.h>

namespace Music {
    const u32 BGM_BASE  = 0x1000585;
    const int SEQ_COUNT = 85;

    enum SeqType {
        SEQ_NOSHUFFLE = 0,
        SEQ_BGM       = 1 << 0,
        SEQ_OCARINA   = 1 << 1,
        SEQ_FANFARE   = 1 << 2,
    };

    extern const std::array<SeqType, SEQ_COUNT> seqTypesMusic;
    extern std::array<u32, SEQ_COUNT> seqOverridesMusic;

    void InitMusicRandomizer();
    void ShuffleSequences(int type);
} // namespace Music
