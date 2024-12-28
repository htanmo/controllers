# Controllers

This repository hosts a C++ System Controller Library designed for versatile use across various robotics projects. The library provides a robust framework for implementing advanced control algorithms, making it an ideal choice for autonomous drones, mobile robots, and other robotic systems requiring precision and adaptability.

## Installation and Usage

1. Clone the repository:
```bash
git clone https://github.com/htanmo/controllers.git
```

2. Build the library
```bash 
mkdir build && cd build
cmake ..
make
```

3. Link it to your project
```cmake
target_link_libraries(your_project_name PRIVATE controllers)
```
