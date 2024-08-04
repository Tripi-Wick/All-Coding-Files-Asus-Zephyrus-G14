// Use Effect is also a hook which is used to do something when a page i rendered or re-rendered
// Hence useEffect is used to cause a side effect of re-rendering 
// There are three ways to use it:
// just pass a function which executes every time re-rendering occurs
// pass a [] after after the function as a dependency to the useEffect to just execute the function when the page first time renders
// pass the names of the states of the component in the array on whose alteration u want the side effect

import { useState, useEffect } from 'react';

export default function Counter(){
    let [count, setCount] = useState(0);
    let [count2, setCount2] = useState(0);

    let CountInc = () =>{
        setCount(count+1);
    }

    let CountInc2 = () =>{
        setCount2(count2+1);
    }

    // useEffect(()=>{
    //     console.log('You Clicked Me');
    // })
    // useEffect(()=>{
    //     console.log('You Clicked Me');
    // },[])

    useEffect(()=>{
        console.log('You Clicked Me');
    },[count])

    return(
        <>
        <h1>Count1 = {count}</h1>
        <button onClick={CountInc}>INC</button>
        <h1>Count2 = {count2}</h1>
        <button onClick={CountInc2}>INC</button>
        </>
    );

}