cmake_minimum_required(VERSION 3.10)
project(SchoolApp)

# Встановлюємо стандарт C++
set(CMAKE_CXX_STANDARD 11)

# Додаємо вихідні файли
set(SOURCES
    main.cpp
    SchoolClass.cpp
    SchoolDatabase.cpp
)

# Додаємо заголовкові файли (не обов'язково, але корисно для IDE)
set(HEADERS
    SchoolClass.h
    SchoolDatabase.h
)

# Створюємо виконуваний файл
add_executable(app ${SOURCES} ${HEADERS})
