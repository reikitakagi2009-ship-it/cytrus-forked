// Copyright 2020 Citra Emulator Project
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#pragma once

#include <atomic>

namespace std { // Simplified for libretro core

template <class Archive, class T>
void serialize(Archive& ar, std::atomic<T>& value, const unsigned int file_version) {
    // Serialization removed for libretro core
}

template <class Archive, class T>
void save(Archive& ar, const std::atomic<T>& value, const unsigned int file_version) {
    // Serialization removed for libretro core
}

template <class Archive, class T>
void load(Archive& ar, std::atomic<T>& value, const unsigned int file_version) {
    // Serialization removed for libretro core
}

} // namespace std
