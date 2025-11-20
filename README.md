# IMAGE PROCESSING ALGORITHMS

A performance comparison project benchmarking image processing filters in Python and C++.

## 📋 OVERVIEW

Comparing execution speed of 5 common filters implemented in both languages:

- **Gaussian Blur** - Smoothing and noise reduction
- **Sobel Operator** - Edge detection
- **Median Filter** - Noise reduction
- **Canny Edge Detector** - Multi-stage edge detection
- **Histogram Equalization** - Contrast enhancement

**Status:** 🚧 In Development

## 🛠️ TECH STACK

**Python:** OpenCV 4.x, NumPy, venv

**C++:** OpenCV 4.12.0 (MSYS2), Qt6, CMake & Ninja, MinGW-w64 UCRT

## 📦 INSTALLATION

### PYTHON SETUP

```powershell
# Create and activate venv
python -m venv venv
.\venv\Scripts\Activate.ps1

# Install dependencies
pip install opencv-python numpy
```

### C++ SETUP

**Install via MSYS2 UCRT64:**

```bash
pacman -S mingw-w64-ucrt-x86_64-opencv
pacman -S mingw-w64-ucrt-x86_64-qt6-base
pacman -S mingw-w64-ucrt-x86_64-qt6-svg
pacman -S mingw-w64-ucrt-x86_64-cmake
pacman -S mingw-w64-ucrt-x86_64-ninja
```

**Build:**

```powershell
mkdir build && cd build
cmake -G Ninja ..
ninja
```

**Copy Qt6 DLLs (REQUIRED for imshow):**

```powershell
Copy-Item C:\msys64\ucrt64\bin\Qt6*.dll -Destination .
mkdir platforms
Copy-Item C:\msys64\ucrt64\share\qt6\plugins\platforms\qwindows.dll -Destination platforms\
```

## HOW TO USE

1. **Clone and setup** - Follow installation steps above

2. **Choose a filter** - Pick either `.py` (Python) or `.cpp` (C++) version

3. **Run the program:**
   
   **Python:**
   ```powershell
   .\venv\Scripts\Activate.ps1
   python src_filters/python/gaussian.py  # or any filter
   ```
   
   **C++:**
   ```powershell
   cd build
   .\gaussian.exe  # or any filter
   ```

4. **Interactive workflow:**
   - An interactive window will pop up
   - Choose the image you want to apply the filter to
   - The GUI will show the results and runtime

5. **Compare** - Try the same filter in the other language to see the performance difference

