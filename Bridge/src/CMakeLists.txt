add_library(
    src
    SHARED
	Display.cpp
	CountDisplay.cpp
	StringDisplayImpl.cpp
)

target_include_directories(
    src
    PUBLIC ${PROJECT_SOURCE_DIR}/inc
)
