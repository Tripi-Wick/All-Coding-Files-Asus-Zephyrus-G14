// Component is a reusable and independent piece of code
// By convention ever element of an website should have its different component file 
// The components must have a closing tag cause when babel looks for the closing tags while converting jsx to js
// Basically components are just functions that return something
// In js its function in jsx its component
// Mainly in React a main app component is made which is the parents of all the components
// The name of the component must be capital
// To render a component we require to write them like a html tag with must having a closing tag



function Title(){
    return( <h1>Hello World !!</h1>);
}



export default Title