# Shadow Mode ASCII Art Generator

Convert text to gradient-colored ASCII art in terminal.

![Demo](demo.png)

## Quick Start

### Build
```bash
# Using CMake
mkdir build && cd build && cmake .. && make

# Or compile directly
g++ -std=c++17 -o shadow_mode shadow_mode.cpp
```

### Usage
```bash
# Plain text
./shadow_mode "hello"

# With colors
./shadow_mode -c "colored"

# Custom gradient (green to blue)
./shadow_mode -c --start '#00FF00' --end '#0000FF' "gradient"

# Background color mode
./shadow_mode -b --start '#FF6600' --end '#000000' "fire"
```

## Options

| Option | Description |
|--------|-------------|
| `-c`, `--color` | Enable text gradient colors |
| `-b`, `--bg` | Enable background gradient |
| `--start <hex>` | Start color (default: `#E62525`) |
| `--end <hex>` | End color (default: `#000000`) |
| `-h`, `--help` | Show help |


## Supported Characters

- Letters: `a-z`
- Numbers: `0-9`
- Symbols: `!_+-=[]|':"./\|` 

## Examples

```bash
./shadow_mode "hello world"
./shadow_mode -c "error: file not found!"
./shadow_mode -b --start '#FFD700' --end '#FF4500' "warning"
```
