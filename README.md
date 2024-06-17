# SHA-256 Hash Generator 🔒

Welcome to the SHA-256 Hash Generator project! This simple application allows you to input any string and get its SHA-256 hash value. It's implemented in C++ and demonstrates the SHA-256 hashing algorithm.

## Features ✨

- **Simple to Use**: Just enter a string and get the SHA-256 hash.
- **C++ Implementation**: Pure C++ implementation without any external dependencies.
- **Educational**: Great for learning about hashing and C++ classes.

## Getting Started 🚀

Follow these instructions to build and run the project on your local machine.

### Prerequisites 📋

Make sure you have the following installed:

- A C++ compiler (e.g., g++)
- CMake

### Building the Project 🔨

1. **Clone the Repository**:

    ```bash
    git clone https://github.com/akhilparakka/sha256-cpp.git
    cd sha256-cpp
    ```

2. **Create a Build Directory**:

    ```bash
    mkdir build
    cd build
    ```

3. **Run CMake and Build**:

    ```bash
    cmake ..
    cmake --build .
    ```

### Running the Application ▶️

After building the project, you can run the executable:

```bash
./sha256
```
You will be prompted to enter a string. The application will then output the SHA-256 hash of the input string.

### Example 💡

```bash
$ ./sha256
Enter input for hashing: 
Hello, World!
SHA-256("Hello, World!") = a591a6d40bf420404a011733cfb7b190d62c65bf0bcda32b1ee42b7d8ddda8e2
```
