# Recorded Shell
This tool allows you to run prerecorded shell scripts.
This is good for presentations where you want to run commands in the shell but do not want to worry about typing.

## Requirements
+ GNU/Linux
+ GCC >= 9.2.0


## File structure
Commands are separated by newline characters.
For example, if you want to run ls, then pwd, simply make a text file such as:
```
ls
pwd
```

## Running the file
To run the premade shell script, simply provide the textfile as the argument.
`rs [FILE]`

## Install
To install run:
```
git clone https://github.com/giancarlopernudisegura/recorded-shell.git
cd recorded-shell
make install
```

## Features to come:
+ simulated keystroke sounds
+ more OS support
