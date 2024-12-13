# File Structure Interpretation System

## Introduction
This system interprets a given list of file and folder representations and generates the corresponding directory structure. The input follows a specific format where directory names and file names are provided along with their respective index and extension. This README explains the syntax and provides examples for proper usage.

---

## Syntax Explanation

### Input Format

Each entry in the input represents either a **folder** or a **file** in the directory structure. The general syntax is:


- **filename**: Represents the folder or file name.
- **index**: Represents the directory level or the position of the folder/file in the structure. The index is **zero-based**, meaning the index `0` is considered the root or top-level directory.
- **extension**: Indicates whether the entry is a **file** or **folder**.
  - `f` (or no extension) signifies a **folder**.
  - Any other string (such as `py`, `txt`, `png`, etc.) represents a **file extension**.

---

## Rules for Structure Creation

1. **Folder Structure**: If an entry has the extension `'f'` or has no extension, it is treated as a **folder**.
   - **Folder**: Will be placed under its respective parent directory based on the **index** provided.
   - **File**: Will be placed in the directory specified by the **index** and will have its extension appended.

2. **Index**: 
   - The **index** determines the depth of the directory structure.
   - The **parent directory** for each entry is based on its **index** relative to other entries.

3. **Root Directory**: The first folder (or file) with index `0` represents the **root directory**.

4. **File Extensions**: Files will have their extension added after the directory name, while folders will have no extension.

---

## Example

### Given the input:
```
+ Python(0, 'f') 
+ asset(1, 'f') 
+ images(2, 'f') 
+ image(3, 'png') 
+ inputs(1, 'f') 
+ input(2, 'txt') 
+ main(1, 'py') 
+ test(1, 'py')
```
### Interpreted Directory Structure:
```
Parent/
├── asset/
│   └── images/
│       └── image.png
├── inputs/
│   └── input.txt
└── main.py
```
---

## Conclusion

This system provides an easy way to create hierarchical folder structures and files based on the given input format. By specifying directories with their indices and extensions, users can dynamically generate complex directory structures with nested folders and files.

---

### End of Readme.
