// Copyright 2022 Citra Emulator Project
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#pragma once

#include <string>
#include <sstream>
#include <type_traits>

// Simple formatter for libretro core - replaces fmt library
template <typename T>
struct SimpleFormatter {
    static std::string format(const T& value) {
        std::ostringstream oss;
        oss << value;
        return oss.str();
    }
};

// For enum types
template <typename T>
struct SimpleFormatter<T, std::enable_if_t<std::is_enum_v<T>>> {
    static std::string format(const T& value) {
        return std::to_string(static_cast<std::underlying_type_t<T>>(value));
    }
};

// Macro to replace fmt::format
#define FORMAT_SIMPLE(value) SimpleFormatter<decltype(value)>::format(value)
