cmake_minimum_required(VERSION 3.10)
project(KoreanStudy)

find_package(wxWidgets REQUIRED COMPONENTS core base)

include(${wxWidgets_USE_FILE})

add_executable(korean_study_app 
        # main.cpp 
        dataset.h dataset.cpp 
        UIApplication.h UIApplication.cpp
        Frame.h Frame.cpp
        FunctionalController.h FunctionalController.cpp
        )

add_compile_options(korean_study_app -std=C++11 -Wall)
# Link the wxWidgets libraries
target_link_libraries(korean_study_app ${wxWidgets_LIBRARIES})
