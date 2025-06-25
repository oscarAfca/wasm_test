project(cpp-wasm-webapp)

set(CMAKE_CXX_STANDARD 11)

# Specify the path to the Emscripten toolchain
set(CMAKE_TOOLCHAIN_FILE "${CMAKE_SOURCE_DIR}/emsdk/upstream/emscripten/cmake/Modules/Platform/Emscripten.cmake")

# Add the source files
add_executable(cpp-wasm-webapp src/main.cpp)

# Set the output format to WebAssembly
set_target_properties(cpp-wasm-webapp PROPERTIES
    OUTPUT_NAME "cpp-wasm-webapp"
    SUFFIX ".wasm"
)

# Specify the output directory for the compiled WebAssembly file
set_target_properties(cpp-wasm-webapp PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/public"
)