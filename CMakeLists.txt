cmake_minimum_required(VERSION 3.10)
project(KoreanStudy)

# Set the path to the installed wxWidgets library
# set(wxWidgets_ROOT_DIR ../wxWidgets/include)

# Find the wxWidgets package
# find_package(wxWidgets REQUIRED COMPONENTS core base)

add_executable(korean_study_app 
        main.cpp 
        dataset.h dataset.cpp 
        FunctionalController.h FunctionalController.cpp
        # ${wxWidgets_ROOT_DIR}
        )

add_compile_options(korean_study_app -std=C++11 -Wall)
# Link the wxWidgets libraries
# target_link_libraries(korean_study_app ${wxWidgets_LIBRARIES})