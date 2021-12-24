#include "bar.h"

#include "spdlog/spdlog.h"


bar::bar() {
    spdlog::info("bar constructor !!!");
}

bar::~bar() {
    spdlog::info("bar desturctor !!!");
}

void bar::print(void) {
    spdlog::info("bar print !!!");
}