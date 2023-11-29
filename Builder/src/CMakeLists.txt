add_library(
    src
    SHARED
	Director.cpp
	TextBuilder.cpp
	HTMLBuilder.cpp
)

target_include_directories(
    src
    PUBLIC ${PROJECT_SOURCE_DIR}/inc
)
