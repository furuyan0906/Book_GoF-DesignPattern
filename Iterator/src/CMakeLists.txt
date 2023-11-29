add_library(
    src
    SHARED
    Book.cpp
    Bookshelf.cpp
    BookshelfIterator.cpp
)

target_include_directories(
    src
    PUBLIC ${PROJECT_SOURCE_DIR}/inc
)
