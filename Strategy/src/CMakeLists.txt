add_library(
    src
    SHARED
	Hand.cpp
	Player.cpp
	ProbStrategy.cpp
	WinningStrategy.cpp
)

target_include_directories(
    src
    PUBLIC ${PROJECT_SOURCE_DIR}/inc
)
