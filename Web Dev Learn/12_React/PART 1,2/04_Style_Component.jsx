// By convention name of the css file should be same as the jsx file
// we gotta import the styling file
// Every component should have its own style file
// In css we use - but here we us js part i.e. camelCase
// Here we gotta use className as class cause class is a reserved keyword in js.
// We can't use both reserved words of js and html

import './04_Style_Component.css'

function Title({Name}){
    return(
        <h1 className='h'>Name : {Name}</h1>
    );
}

export default Title