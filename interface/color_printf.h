#ifndef COLOR_PRINTF_H
#define COLOR_PRINTF_H

#include <cstdarg>

namespace Color {
    // Text colors
    constexpr const char* RESET   = "\033[0m";
    constexpr const char* BLACK   = "\033[30m";
    constexpr const char* RED     = "\033[31m";
    constexpr const char* GREEN   = "\033[32m";
    constexpr const char* YELLOW  = "\033[33m";
    constexpr const char* BLUE    = "\033[34m";
    constexpr const char* MAGENTA = "\033[35m";
    constexpr const char* CYAN    = "\033[36m";
    constexpr const char* WHITE   = "\033[37m";
    
    // Bright/Bold colors
    constexpr const char* BRIGHT_BLACK   = "\033[90m";
    constexpr const char* BRIGHT_RED     = "\033[91m";
    constexpr const char* BRIGHT_GREEN   = "\033[92m";
    constexpr const char* BRIGHT_YELLOW  = "\033[93m";
    constexpr const char* BRIGHT_BLUE    = "\033[94m";
    constexpr const char* BRIGHT_MAGENTA = "\033[95m";
    constexpr const char* BRIGHT_CYAN    = "\033[96m";
    constexpr const char* BRIGHT_WHITE   = "\033[97m";
    
    // Background colors
    constexpr const char* BG_RESET   = "\033[49m";
    constexpr const char* BG_BLACK   = "\033[40m";
    constexpr const char* BG_RED     = "\033[41m";
    constexpr const char* BG_GREEN   = "\033[42m";
    constexpr const char* BG_YELLOW  = "\033[43m";
    constexpr const char* BG_BLUE    = "\033[44m";
    constexpr const char* BG_MAGENTA = "\033[45m";
    constexpr const char* BG_CYAN    = "\033[46m";
    constexpr const char* BG_WHITE   = "\033[47m";
    
    // Text styles
    constexpr const char* BOLD       = "\033[1m";
    constexpr const char* DIM        = "\033[2m";
    constexpr const char* ITALIC     = "\033[3m";
    constexpr const char* UNDERLINE  = "\033[4m";
    constexpr const char* BLINK      = "\033[5m";
    constexpr const char* REVERSE    = "\033[7m";
    constexpr const char* HIDDEN     = "\033[8m";
    constexpr const char* STRIKETHROUGH = "\033[9m";
}

// Non-template versions with va_list
void printf_color(const char* color, const char* format, ...);
void printf_info(const char* format, ...);
void printf_success(const char* format, ...);
void printf_warning(const char* format, ...);
void printf_error(const char* format, ...);
void printf_debug(const char* format, ...);
void printf_header(const char* format, ...);
void printf_styled(const char* style, const char* color, const char* format, ...);

#endif