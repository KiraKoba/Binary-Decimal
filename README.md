# 🧮 Binary-Decimal Converter Utility

![GitHub repo size](https://img.shields.io/github/repo-size/KiraKoba/Binary-Decimal?style=flat-square)
![GitHub language count](https://img.shields.io/github/languages/count/KiraKoba/Binary-Decimal?style=flat-square)
![GitHub open issues](https://img.shields.io/github/issues/KiraKoba/Binary-Decimal?style=flat-square)
![GitHub open pull requests](https://img.shields.io/github/issues-pr/KiraKoba/Binary-Decimal?style=flat-square)

This repository provides an implementation of a robust converter between binary and decimal number 
systems in both Java and C/C++. The program supports bidirectional conversion—binary to decimal and 
decimal to binary—allowing users to easily convert between these two widely used numeral systems.

## ✨ Features

- **Java Implementation**: 
  - A user-friendly, menu-driven application for performing bidirectional conversions between binary and decimal.
  - The program includes robust input validation to ensure only valid binary or decimal numbers are processed, providing 
clear feedback for invalid entries.

- **C/C++ Implementation**: 
  - A simple yet efficient menu-based program for converting between binary and decimal number systems.
  - Input validation is in place to ensure the integrity of the user's input, with immediate feedback for incorrect
formats or invalid characters.

- **User Guidance**: 
  - The program lets users convert from __binary to decimal__ or __from decimal to binary__ easily with just a few inputs.
  - After each conversion, users are prompted to either continue converting or return to the main menu, offering
flexibility in usage.

- **Output**: 
  - Both implementations guide the user through the conversion process with clear and informative prompts.
  - The system ensures that the user always knows what to input next, and gracefully handles errors.

## 🛠️ Prerequisites

### For Java ☕:
- __JDK 8__ or higher is required to compile and execute the Java application. Ensure that the Java Development Kit 
(JDK) is correctly installed and properly configured in your system’s environment variables. You can obtain the JDK from
[Oracle's official download page](https://www.oracle.com/java/technologies/downloads/?er=221886).

### For C/C++ 🖥️:
- __C/C++ Compiler__: A compliant C/C++ compiler, such as GCC, is necessary for compiling the C implementation. 
It is available on most platforms:
  - __Linux__: Typically installed via package managers (e.g., ```sudo apt install build-essential``` on Ubuntu).
  - __macOS__: Install via __Homebrew__ with the command ```brew install gcc```.
  - __Windows__: You may use MinGW or another GCC-based compiler (e.g., via [MSYS2](https://www.msys2.org/)).
- __Conio.h__: The C implementation utilizes the ```conio.h``` library, which is primarily available on Windows environments. 
This library is used for handling console input directly. If you are compiling on a non-Windows platform, you may need
to replace or modify the input-handling portions of the code (for example, using standard input functions such as ```scanf```).


### Additional Considerations
- __Operating System__: \
While the Java program is cross-platform, the C program includes Windows-specific dependencies due 
to the usage of ```conio.h```. For Unix-based systems (Linux, macOS), you will need to adjust the input functions 
(removing ```conio.h``` and using standard console I/O methods instead).

- __Text Editor / IDE__: \
Any code editor or IDE suitable for Java or C/C++ development will suffice. However, 
to ensure efficient debugging and project management, we recommend using an IDE such as [IntelliJ IDEA](https://www.jetbrains.com/idea/) 
or [Eclipse](https://www.eclipse.org/downloads/) for Java development, and [Visual Studio Code](https://code.visualstudio.com/) 
or [CLion](https://www.jetbrains.com/clion/) for C/C++.

### Verifying Your Environment
- __For Java__: To ensure proper installation, execute the following in your terminal or command prompt:
  ```bash
  java -version
This command should display the installed Java version.

- __For C/C++__: Verify that GCC is properly installed by running:
  ```bash
  gcc --version
The output should indicate the version of GCC installed on your system.

## 📚 Documentation
- __JDK Documentation__: \
  For comprehensive information regarding the Java Development Kit (JDK), including installation guides, 
API references, and best practices, refer to the official [JDK Documentation](https://docs.oracle.com/en/java/javase/). 
This resource is essential for understanding the core libraries and tools available in Java development.
- __GCC Compiler Documentation__: \
  The GNU Compiler Collection (GCC) is a widely-used compiler for C and C++ development. For detailed installation 
instructions, configuration options, and usage guidelines, consult the official [GCC Documentation](https://gcc.gnu.org/install/). 
This documentation provides in-depth information on compiling, optimizing, and debugging C/C++ code using GCC.

## 🚀 Usage Instructions

### Executing the Java Application

1. __Clone the repository__: \
   Begin by cloning the project repository to your local machine using the following command:
   ```bash
   git clone https://github.com/KiraKoba/Binary-Decimal.git

2. __Navigate to the project directory__: \
   After cloning the repository, navigate to the project directory:
   ```bash
   cd Binary-Decimal
3. __Compile and run the Java program__: \
   Ensure that you have the JDK 8 or higher installed. Compile the Java program using the ```javac``` command and 
execute it with ```java```:
   ```bash
   javac BinaryAndDecimal.java
   java BinaryAndDecimal
4. __Interaction__: \
   Upon execution, the program will present a menu in the terminal. You can select from the following options:
   - __Option 1__: Convert a binary number to its decimal equivalent.
   - __Option 2__: Convert a decimal number to its binary equivalent.
   - __Option 3__: Exit the program. 
   
   The program will continue to prompt for user input until you select the option to exit. Additionally, 
it will ask if you wish to perform another conversion or return to the main menu.

### Executing the C/C++ Application

1. __Clone the repository__: \
   Begin by cloning the project repository to your local machine:
   ```bash
   git clone https://github.com/KiraKoba/Binary-Decimal.git
2. __Navigate to the project directory__: \
   Once the repository is cloned, navigate to the C/C++ source directory:
   ```bash
   cd Binary-Decimal
3. __Compile the C program__: \
   Ensure that a __C/C++ compiler__ (e.g., GCC) is installed on your system. You can compile the C program with the following command:
   ```bash
   gcc -o BinaryDecimalConverter BinaryDecimalConverter.c
4. __Run the C program__: \
   Once compiled, run the program:
   ```bash
   ./BinaryDecimalConverter
5. __Interaction__: \
   Similar to the Java application, the program will prompt the user with a menu to choose between converting binary to 
decimal, decimal to binary, or exiting the program.

### General Notes
- __Operating System Compatibility__: \
The Java application is cross-platform and should work on any system with JDK 8 or higher. However, 
the C application uses Windows-specific libraries (i.e., conio.h). For Unix-based systems, modifications to the 
input handling will be necessary.
- __Error Handling__: \
Both implementations handle invalid inputs gracefully, prompting the user to re-enter valid data when necessary.

## 📝 Acknowledgments
We would like to acknowledge the following resources and tools used in this project:
- __Java Documentation__: For the core Java libraries and language features.
- __GCC Documentation__: For detailed instructions on compiling and using C/C++ with GCC.
- __Open Source Contributions__: Thanks to the open-source community for their invaluable tools and libraries.

## 📞 Contact
For further inquiries or support, feel free to reach out:
- GitHub: https://github.com/KiraKoba

## 📜 License
This project is licensed under the __MIT License__ - see the [LICENSE](LICENSE) file for details.
