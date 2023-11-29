add_library(
    src
    SHARED
	Factory.cpp
	FactoryUtil.cpp
	Item.cpp
	Link.cpp
	Tray.cpp
	Page.cpp
	ListFactory.cpp
	ListLink.cpp
	ListTray.cpp
	ListPage.cpp
)

target_include_directories(
    src
    PUBLIC ${PROJECT_SOURCE_DIR}/inc
)
