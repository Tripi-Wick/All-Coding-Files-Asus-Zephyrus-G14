// For initialization we don't pass async function 
// Hence we use useState to deal with it 


import { useState, useEffect } from 'react';


export default function Joke() {
    let url = 'https://official-joke-api.appspot.com/random_joke'

    // let [joke, setJoke] = useState(setJoke) //will not work
    let [joke, setJoke] = useState({})

    const newJoke = async () => {
        let response = await fetch(url);
        let responseJson = await response.json();
        console.log(responseJson)
        setJoke({ setup: responseJson.setup, punchLine: responseJson.punchline })
    }
    
    // This is the way we pass async function in it
    useEffect(()=>{
        async () => {
        // async function newJoke () {
            let response = await fetch(url);
            let responseJson = await response.json();
            console.log(responseJson)
            setJoke({ setup: responseJson.setup, punchLine: responseJson.punchline })
        }
        newJoke();
    },[])

    return <>
        <h1>Joke Here :</h1>
        <h3>{joke.setup}</h3>
        <h3>{joke.punchLine}</h3>
        <button onClick={newJoke}>New Joke</button>
    </>

}
