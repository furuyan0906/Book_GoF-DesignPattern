add_library(
    src
    SHARED
	Manager.cpp
	MessageBox.cpp
	UnderlinePen.cpp
)

target_include_directories(
    src
    PUBLIC ${PROJECT_SOURCE_DIR}/inc
)
