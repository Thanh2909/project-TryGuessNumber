#!/bin/bash
# Exit if there are any errors
set -e

# Function to build each project
build_project() {
    project_dir=$1
    echo "Building project: $project_dir"
    cd $1
    # Run make command in the project directory
    cd build
    make clean && make
    
    if [ $? -ne 0 ]; then
        echo "Failed to build $project_dir"
        exit 1
    fi
    
    cd ../../
}

# Function to build and test each project
build_test_project() {
    project_dir=$1
    echo "Building project: $project_dir"
    cd $1
    # Run make command in the project directory
    cd build
    make clean && cmake .. && make && ctest
    
    if [ $? -ne 0 ]; then
        echo "Failed to build $project_dir"
        exit 1
    fi
    
    cd ../../
}

cd test
# Build each project
build_project "test_game_library"
build_project "test_data_fetching"
build_project "test_data_processing"
# Build and run unit test
build_test_project "test_game_library"
build_test_project "test_data_fetching"
build_test_project "test_data_processing"
echo "Successfully built all projects and ran tests!"

# Ask the user if they want to build and run the project
while true; do
    read -p "Do you want to build and run the project? (yes/y/no/n): " answer
    case $answer in
        [Yy]* ) 
            pwd
            cd ..
            echo "Building and running the project..."
            # Variables
            CXX=g++
            # Output target
            TARGET=MyGame
            # Source files
            projrctMain=main.cpp
            link_library=data_library/src/game_library.cpp
            link_fetching=data_fetching/src/player_data.cpp
            link_processing=data_processing/src/game.cpp
            # Compile and run command
            $CXX -o $TARGET $projrctMain $link_library $link_fetching $link_processing
            ./$TARGET
            break;;
        [Nn]* ) 
            echo "Successfully built all projects and ran tests!"
            break;;
        * ) 
            echo "Please answer yes, y, no, or n.";;
    esac
done