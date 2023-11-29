add_library(
    src
    SHARED
    Barner.cpp
    PrintBarner.cpp
)

target_include_directories(
    src
    PUBLIC ${PROJECT_SOURCE_DIR}/inc
)
