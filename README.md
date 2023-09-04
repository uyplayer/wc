# wc-tool

---

## Table of Contents

- [About the Project](#about-the-project)
    - [Project Description](#project-description)
    - [File List](#file-list)
- [Getting Started](#getting-started)
    - [Prerequisites](#prerequisites)
    - [Installation](#installation)
- [Usage](#usage)
- [Contributing](#contributing)
- [Contact](#contact)
- [License](#license)


---

## About the Project

The `wc-tool` repository is a collection of source files for a simple word counting utility written in C. It provides functionality to count words, lines, and characters in text files and can be used as an alternative to the Linux `wc` command.

### Project Description

This project consists of the following source files:

#### Source Files
- `bytes.c` and `bytes.o`: Source and object files for counting bytes in text files.
- `chars.c` and `chars.o`: Source and object files for counting characters in text files.
- `help.c` and `help.o`: Source and object files for displaying help information.
- `lines.c` and `lines.o`: Source and object files for counting lines in text files.
- `makefile`: Makefile for building the `wc-tool`.
- `mywc`: The compiled word counting utility.
- `tool.h`: Header file containing function prototypes.
- `version.c` and `version.o`: Source and object files for displaying the tool's version information.
- `wc.c` and `wc.o`: Source and object files for the main word counting logic.
- `words.c` and `words.o`: Source and object files for counting words in text files.

## Getting Started

Follow these instructions to get the `wc-tool` up and running on your local machine.

### Prerequisites

Before you begin, ensure you have the following prerequisites installed:

- A C compiler (e.g., GCC)
- Make

### Installation

   ```sh
   git clone https://github.com/yourusername/wc-tool.git
   cd wc-tool
   make
   ```
## usage
   ```sh
   ./mywc [OPTIONS] FILE   
   ```

## Contributing
```shell
git checkout -b feature/new-feature
git commit -m 'Add new feature'
git push origin feature/new-feature
```

## Contact 

If you have any questions or suggestions, feel free to reach out to me:

- Email: uyplayer@outlook.com

## License 

This repository is licensed under the [MIT License](LICENSE).