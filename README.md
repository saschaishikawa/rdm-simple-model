# A Simple RDM Model
This is an implementation of a simple model to be used with [Rhodium](https://github.com/Project-Platypus/Rhodium/), a python-based Robust Decision Making (RDM) framework. 

## Setup
Run the command line from this repo and type:

```
$ jupyter notebook
```

This will launch the IPython server and let you open the `SimpleModelDemo` notebook.


## Dependencies
* Microsoft Excel
* Rhodium
* Python + IPython Notebook

## Driving Excel Models
## A Python Model
## Native Function: An Example in C

Compile and run the C code as follows

```
$ gcc simple_model.c -o simple_model
$ ./simple_model
Input: 5 2 5 2 5 2 5 2 5 2
Output: 4.97809708 6.87936448 2.00357553 1.82803560 1.43397352
```

This illustrates the basic functionality of the C model. To use in within Rhodium, however, you must generate a shared library at compile time. In UNIX-based sustems, This is done as follows:

```
$ gcc simple_model.c -shared -o simple_model.so
```


