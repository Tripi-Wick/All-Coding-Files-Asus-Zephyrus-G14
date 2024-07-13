// We only use either req or import in one project not both
// import is the new way
// we write name of the file with extension in the import but only name in req
// import gives us choice to choose what to import which req don't.
// loading in req is synchronous but asynchronous in import
// to use import in the directory we gotta create a package.json file in that directory nd add a key value pair of 'type':'module'

export const sum = (a,b) => a+b;
export const PI = "Duck YOU";
