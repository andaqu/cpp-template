# cpp-template

This is a `C++` template for `VSCode`. After several attempts, this is what I came up with. It does not make use of any CMake files, which you could argue, is quite bad practice. It makes use of the `vcpkg` package manager, which is where the example `asio` external library is coming from. Other 'internal' libraries are coming from the `headers` folder. Putting this on here just in case I need it later.

* `c_cpp_properties.json`: Used stricly for IntelliSense, not for compilation (like I thought).
* `tasks.json`: Compiles and includes the necessary libraries using `cl.exe` from the given `Visual Studio 2017` path. 
* `launch.json`: Used to launch the `*.exe` file in the `build` folder.