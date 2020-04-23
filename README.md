# Simple Shell Proyect ![HOLBY](https://blog.holbertonschool.com/wp-content/uploads/2019/06/cherry72-942x1024.png)

This is the biggest proyect at Holberton School, briefly works in this way: we get a  line of characters and set a key to turn into an argument and stored into a memory position that allows to compare with directory were all the commands are stored, after that comparisson we are going to be able to executes the functions that commands do. All this setting parallel process that includes the same enviroment variables wich will be allowed by the core to work toguether.

## Table of Contents

    Authors
    Installation
    Use
    Commands
    Examples of use

### Authors

    Samuel Adolfo Rojas Coley - Saroco83 <estudialondres@gmail.com>
    Diego Alejandro Rojas Rivera - dalejoroc11 <diegorojas279@hotmail.com.com>

## Installation

In order to use the shell it is necessary to install the shell first by using the following commands from your terminal:

    git clone https://github.com/dalejoroc11/simple_shell.git

This will create a new directory, now move to the directory using:

    cd simple-shell/

Now you will be inside the shell directory and you will see different files. These files are used to compile the shell. In order to compile it please use:

    gcc -Wall -Werror -Wextra -pedantic *.c -o hsh

That's it now you have your shell installed on your system
## Use

Now let's execute our shell in order to execute the shell just type from your terminal the command

    ./hsh

This will open a shell and it will look like this

    Saroco83-dalejoroc11 $ 

Now you are on the shell and it is waiting for you to type a command. Next we will see a list of commands. Now we will show you how you can exit the shell. You can use either one of these commands:

    Saroco83-dalejoroc11 $ exit

Or you can also do Ctrl + D And this will also terminate the simple shell.
### Some Commands

Here we share with you a list of some commands you can use, there are many more, try to experiment with it.

    /bin/ls
    ls
    pwd
    echo
    vim
    touch

### Examples of use

*Let's take a look at these examples:*

    Saroco83-dalejoroc11 $ -l
    Saroco83-dalejoroc11 $ echo Hola Mundo
    Saroco83-dalejoroc11 $ pwd
    Saroco83-dalejoroc11 $ /bin/ls
