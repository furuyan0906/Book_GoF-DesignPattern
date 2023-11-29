add_library(
    src
    SHARED
    Factory.cpp
    IDcard.cpp
    IDcardFactory.cpp
)

target_include_directories(
    src
    PUBLIC ${PROJECT_SOURCE_DIR}/inc
)
