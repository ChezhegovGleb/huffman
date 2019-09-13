#include <cstring>
#include "FrequencyCounter.h"

FrequencyCounter::FrequencyCounter() : isEmpty(true) {
    std::memset(cnt, 0, sizeof(size_t) * SIZE_ALPHABET);
}

void FrequencyCounter::calc_freq(vector<byte> const &block) {
    for (size_t i = 0; i < block.size(); ++i) {
        isEmpty &= false;
        cnt[block[i]]++;
    }
}

bool FrequencyCounter::empty() {
    return isEmpty;
}
