// Use state saves the initial value of the function and only uses it 


import { useState } from 'react';


function init (){
    console.log('It was initialized')
    return Math.random();
}



export default function Counter(){
    // let [count, setCount] = useState(inti());  //Don't do this results in every time calling of init function
    let [count, setCount] = useState(init);

    let CountInc = () =>{
        // This doesn't work
        // setCount(count+1);
        // setCount(count+1);
        // This does
        setCount((count)=>{return count+1});
        setCount((count)=>{return count+1});
    }

    return(
        <>
        <h1>Count = {count}</h1>
        <button onClick={CountInc}>INC</button>
        </>
    );

}