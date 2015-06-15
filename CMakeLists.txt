cmake_minimum_required(VERSION 3.2) # Проверка версии CMake.
                                    # Если версия установленой программы
                                    # старее указаной, произайдёт аварийный выход.

project(thermech-fem)				# Название проекта

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES src/main.cpp src/main.h)			# Установка переменной со списком исходников

include_directories(src)			# Расположение заголовочных файлов

add_executable(thermech-fem ${SOURCE_FILES})

add_subdirectory(src/material)				# Добавление подпроекта, указывается имя дирректории

#target_link_libraries(main foo)		# Линковка программы с библиотекой