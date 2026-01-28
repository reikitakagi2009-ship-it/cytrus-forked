// Copyright 2020 Citra Emulator Project
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#pragma once

#include <set>
#include "common/common_types.h"

namespace std { // Simplified for libretro core

template <class Archive, class T>
void save(Archive& ar, const std::set<T>& set, const unsigned int file_version) {
    // Serialization removed for libretro core
}

template <class Archive, class T>
void load(Archive& ar, std::set<T>& set, const unsigned int file_version) {
    // Serialization removed for libretro core
}

} // namespace std
