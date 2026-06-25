#include "Analysis/Ntuplizer/interface/color_printf.h"
#include <cstdio>

void printf_color(const char* color, const char* format, ...) {
    va_list args;
    va_start(args, format);
    printf("%s", color);
    vprintf(format, args);
    printf("%s", Color::RESET);
    va_end(args);
}

void printf_info(const char* format, ...) {
    va_list args;
    va_start(args, format);
    printf("%s", Color::CYAN);
    vprintf(format, args);
    printf("%s", Color::RESET);
    va_end(args);
}

void printf_success(const char* format, ...) {
    va_list args;
    va_start(args, format);
    printf("%s", Color::GREEN);
    vprintf(format, args);
    printf("%s", Color::RESET);
    va_end(args);
}

void printf_warning(const char* format, ...) {
    va_list args;
    va_start(args, format);
    printf("%s", Color::YELLOW);
    vprintf(format, args);
    printf("%s", Color::RESET);
    va_end(args);
}

void printf_error(const char* format, ...) {
    va_list args;
    va_start(args, format);
    printf("%s", Color::RED);
    vprintf(format, args);
    printf("%s", Color::RESET);
    va_end(args);
}

void printf_debug(const char* format, ...) {
    va_list args;
    va_start(args, format);
    printf("%s", Color::MAGENTA);
    vprintf(format, args);
    printf("%s", Color::RESET);
    va_end(args);
}

void printf_header(const char* format, ...) {
    va_list args;
    va_start(args, format);
    printf("%s", Color::BOLD);
    vprintf(format, args);
    printf("%s", Color::RESET);
    va_end(args);
}

void printf_styled(const char* style, const char* color, const char* format, ...) {
    va_list args;
    va_start(args, format);
    printf("%s%s", style, color);
    vprintf(format, args);
    printf("%s", Color::RESET);
    va_end(args);
}