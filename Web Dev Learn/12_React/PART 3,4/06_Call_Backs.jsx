// To deal with multiple re-render function we use call back as they are asynchronous

import { useState } from 'react';

export default function Counter(){
    let [count, setCount] = useState(0);

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