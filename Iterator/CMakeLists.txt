# CMakeのバージョンを指定 (3.15.2)
cmake_minimum_required(VERSION 3.15.2)

# プロジェクト名 & 使用言語
project(iterator CXX)

# サブディレクトリを登録
add_subdirectory(./src)
# add_subdirectory(config)

add_executable(sys.out ./tb/main.cpp)
target_link_libraries(sys.out src)
