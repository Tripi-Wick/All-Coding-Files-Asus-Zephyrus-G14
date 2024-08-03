/* 
we generally import files with same name as to their component 
There are two types of exports
In react imp exp is only possible due to the help of webpack package

//default export
these are the ones which are only exporting one file
they can be imported by any name but exported with the same name


// named exports
these are the ones in which we export many things
they can only be imported by specific name
*/

function Title(){
    return(
        <h1>Hello World!</h1>
    );
}

function Description(){
    return(
        <h3>Lorem ipsum dolor sit amet consectetur adipisicing elit. Vitae ipsum esse alias aperiam dolorum ipsam illo neque ipsa reprehenderit, quis, consequuntur, provident libero ex ut eum. In qui quo enim.
        Incidunt sint neque accusamus iure dolorem aliquam ea, corporis ipsa, qui veritatis eveniet nesciunt ducimus rem pariatur perspiciatis. Adipisci excepturi consequatur beatae accusamus provident! Accusantium rerum at fuga praesentium facilis.</h3>
    );
}

// This is a bad practice to define two components in one component 

export default Title;

export {Title,Description};