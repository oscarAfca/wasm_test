# C++ WebAssembly Web Application

This project demonstrates how to create a simple web application using C++ compiled to WebAssembly (WASM). The application allows interaction between JavaScript and C++ functions, showcasing the capabilities of WebAssembly in web development.

## Project Structure

```
cpp-wasm-webapp
├── src
│   └── main.cpp        # C++ source code
├── public
│   ├── index.html      # Main HTML file
│   └── main.js         # JavaScript file to interact with WASM
├── CMakeLists.txt      # Build configuration file
└── README.md           # Project documentation
```

## Getting Started

### Prerequisites

- CMake
- Emscripten (for compiling C++ to WebAssembly)
- A web browser

### Building the Project

1. **Install Emscripten**: Follow the instructions on the [Emscripten website](https://emscripten.org/docs/getting_started/downloads.html) to install the SDK.

2. **Clone the Repository**: If you haven't already, clone the repository to your local machine.

3. **Navigate to the Project Directory**:
   ```bash
   cd cpp-wasm-webapp
   ```

4. **Build the Project**:
   ```bash
   mkdir build
   cd build
   emcmake cmake ..
   emmake make
   ```

### Running the Application

1. **Serve the Application**: You can use a simple HTTP server to serve the files. For example, you can use Python's built-in HTTP server:
   ```bash
   python -m http.server
   ```

2. **Open the Application**: Open your web browser and navigate to `http://localhost:8000/public/index.html`.

### Hosting on GitHub Pages

1. **Push to GitHub**: Make sure your project is pushed to a GitHub repository.

2. **Enable GitHub Pages**: Go to your repository settings, scroll down to the "GitHub Pages" section, and select the branch you want to use (usually `main` or `gh-pages`).

3. **Access Your Site**: After a few minutes, your site will be available at `https://<username>.github.io/<repository-name>/`.

## License

This project is licensed under the MIT License. See the LICENSE file for details.