// Earlier in react components were built like classes and called class components but now we make using functions and these are called functional components
// There were some features in class components which was not passed on to functional components 
// So in order to add these features to functional components hooks were introduced in 2k19
// These are some functions which allows us to use many features of class components like state without writing a class
// There are 15 hooks in react
// Basically imagine them like a function having 2 attributes one curr state and a function which calls re-rendering on change of curr state so its like a hook storing the state of the component
// const [state, setState] = useState(initialState) ;
// Apart from the above written statement whole component gets rerendered
// Hooks can only be called inside a component, there can be multiple hooks in one component
// Value is updated at the re-rendered state hence firstly it is displayed as pre value when we console log it as setState method is asynchronous

import { useState, useEffect } from 'react';

export default function Counter(){
    let [count, setCount] = useState(0);

    let CountInc = async () =>{
        setCount(count+1);
        // console.log(count);
    }
    
    useEffect(()=>{console.log(count)})

    return(
        <>
        <h1>Count = {count}</h1>
        <button onClick={CountInc}>INC</button>
        </>
    );

}