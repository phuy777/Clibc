# Clibc

**Clibc** is an independent C standard library implementation written in C and Assembly, aiming to provide a portable, self-contained alternative to existing libc implementations.

The project is currently in its early development stage, starting with basic string manipulation functions and gradually expanding toward a more complete C standard library implementation.

> **Status:** Early Development · Experimental · Work in Progress  
> **Version:** 0.0.1

## Project Goals

Clibc aims to:

- Implement the C Standard Library from the ground up.
- Follow the ISO C standard, with C23 as the primary target.
- Provide familiar standard headers and APIs such as `string.h`, `stdlib.h`, and `stdio.h`.
- Minimize dependencies on external libc implementations.
- Maintain portability across different architectures and platforms.
- Eventually provide the functionality needed to replace existing libc implementations.
- Develop low-level components, including memory management and system interfaces, when necessary.
- Expand toward freestanding and bare-metal environments for future OS development.

Clibc is intended for both educational purposes and long-term practical development.

## Planned Features

The project will gradually expand its implementation to cover the major components of the C Standard Library.

Planned components include:

- **String Manipulation:** String operations and processing functions.
- **Memory Management:** Memory allocation and manipulation functions.
- **Standard I/O:** Formatted input/output and file operations.
- **General Utilities:** Sorting, searching, conversions, and other utility functions.
- **Character Handling:** Character classification and conversion.
- **Mathematical Functions:** Common mathematical operations.
- **Time and Date:** Time-related functions.
- **System Interfaces:** Process termination and low-level system interaction.
- **C23 Support:** Implementation of modern C23 standard library functionality.

These components are planned for gradual development. Their availability and implementation status may change over time.

## Dependencies

Current development and testing environment:

- **Operating System:** Linux
- **Compiler:** GCC
- **External C Library:** glibc

glibc is currently used by the development and testing environment to support the test program (`main.c`).

Clibc is not yet fully independent and still relies on the host system's libc for parts of its current testing workflow.

The long-term goal is to reduce and eventually eliminate this dependency where appropriate.

## Contributing

Contributions are welcome!

You can contribute by:

- Reporting bugs through GitHub Issues.
- Suggesting improvements or new features.
- Submitting Pull Requests.
- Improving implementations and compatibility.
- Helping expand Clibc across different architectures and platforms.

As the project is still in early development, APIs and internal implementations may change.

## License

Clibc is licensed under the **MIT License**.

See the [LICENSE](LICENSE) file for details.
