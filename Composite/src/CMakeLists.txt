add_library(
    src
    SHARED
	Entry.cpp
	File.cpp
	Directory.cpp
)

target_include_directories(
    src
    PUBLIC ${PROJECT_SOURCE_DIR}/inc
)
