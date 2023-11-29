add_library(
    src
    SHARED
	Singleton.cpp
)

target_include_directories(
    src
    PUBLIC ${PROJECT_SOURCE_DIR}/inc
)
