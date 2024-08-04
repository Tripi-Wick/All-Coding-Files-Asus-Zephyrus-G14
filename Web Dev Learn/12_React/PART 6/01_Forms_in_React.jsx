// In html forms maintain their state by them self and update it on user input hence they have some default behaviors 
// In react we don't want these default behaviors and only want one state i.e. of react
// In react we want to control all the components
// Hence react state variable is known as single source of truth.
// We use controlled components in react
// we associate a state element with every element of the form hence it is then known as controlled component
// Hence earlier we were using the value maintained by the input function now we maintain it by react hence we set its value in this 
// In jsx we can't use for as a label as it is used for for loop hence we use htmlFor

import {useState} from 'react';

export default function FormComponent(){
    let [val,setVal] = useState("")

    function handleSubmit(){
        setVal(event.target)
    }

    function handleChange(event){
        setVal(event.target.value)
    }

    return  <>
        <form onSubmit={handleSubmit}>
            <label htmlFor="UrsN">User Name : </label>
            <input type="text" name="usrN" id="ursN" placeholder='Enter here' value={val} onChange={handleChange}/>
            <button>Submit</button>
        </form>
    </>
}