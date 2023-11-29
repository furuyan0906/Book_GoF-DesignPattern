add_library(
    src
    SHARED
    AbstractDisplay.cpp
    CharDisplay.cpp
    StringDisplay.cpp
)

target_include_directories(
    src
    PUBLIC ${PROJECT_SOURCE_DIR}/inc
)
