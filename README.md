# VEngine

VEngine is a modern cross-platform C++ game engine built on top of Raylib.

The project is a long-term learning journey to understand game engine architecture, modern C++, mathematics, physics, and computer graphics by building every system step by step.

---

## Vision

Build a clean, modular game engine from first principles while keeping the codebase approachable for beginners.

Rather than replacing Raylib, VEngine uses it as a rendering backend while implementing its own engine architecture, rendering API, mathematics library, physics systems, and editor.

---

## Goals

- Learn Modern C++
- Learn CMake
- Design a clean engine architecture
- Build my own mathematics library
- Learn computer graphics
- Learn game physics
- Build an editor using Dear ImGui
- Support Windows, Linux and macOS

---

## Current Features

### Core

- ✅ Multi-target CMake project
- ✅ Engine library
- ✅ Sandbox application
- ✅ Window abstraction
- ✅ Application framework

### Graphics

- ✅ Raylib backend
- ✅ Renderer abstraction
- ✅ Color system
- ✅ Drawing primitives
  - Circle
  - Line
  - Rectangle
  - Text

---

## Roadmap

- [x] Initial project setup
- [x] Engine architecture
- [x] Raylib integration
- [x] Renderer API
- [ ] Dear ImGui integration
- [ ] Mathematics library
- [ ] Camera
- [ ] Scene system
- [ ] Physics
- [ ] Editor
- [ ] AI

---

## Project Structure

```text
VEngine/
├── engine/
│   ├── include/
│   └── src/
│
├── sandbox/
│   ├── include/
│   └── src/
│
├── docs/
│
├── CMakeLists.txt
└── README.md
```

---

## Getting Started

### Requirements

- CMake 3.28+
- A C++17 compatible compiler
- Git

Clone the repository

```bash
git clone https://github.com/<your-username>/VEngine.git
cd VEngine
```

Configure the project

```bash
cmake -B build
```

Build

```bash
cmake --build build
```

---

### Visual Studio

Visual Studio 2022 has native CMake support.

Simply open the project folder:

```text
File
└── Open
    └── Folder...
```

Visual Studio will automatically detect the `CMakeLists.txt`, configure the project, and allow you to build and run directly from the IDE.

---

## Philosophy

VEngine is not trying to replace mature game engines.

It is built as a learning engine that focuses on:

- software architecture
- mathematics
- physics
- rendering
- modern C++

Every system is implemented gradually with clarity and education as the primary goal.

---

## License

MIT