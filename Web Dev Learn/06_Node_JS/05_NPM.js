// Node Package Manager
// It is the standard package manager for ode.js
// It is a library of packages which can be used by us by installing them
// It is also a command line tool which us in doing this
// We can use our packages only in the directory we have installed it
// We can install a package globally by adding a flag ~g ,, and then linking this package by command 'npm link name_package'


// While installing any package we get 
// node_modules Folder = contains the every installed dependency for our project
// Package-lock.json = contains the record of the exact version of every installed dependency, including sub dependency and their versions too.
// Package.json = contains descriptive and functional metadata about a project. By help of this file we can download every required node modules if they got lost by entering command 'node install' in terminal

// We can create this package.json file for our package with a command 'npm init' i.e. initialize