// It must be kept in mind that name given to any element must match the name in the useState function
// It is done so that using that we can access the element in our val obj, otherwise it would be difficult to do acces them. 


import { useState } from 'react';

export default function FormComponent() {
    let [val, setVal] = useState({ usrN: '', pass:'' })

    function commonHandler(event) {
        setVal((currVal) => {
            return { ...currVal, [event.target.name]: event.target.value }
        })
    }

    function handleSubmit(event){
        event.preventDefault();
        console.log(val);
        setVal({usrN: '', pass:''})
    }

    return <>
        <form onSubmit={handleSubmit}>
            <label htmlFor="UrsN">User Name : </label>
            <input type="text" name="usrN" id="ursN" placeholder='Enter here' value={val.usrN} onChange={commonHandler} />
            <br /><br />
            <label htmlFor="pass">Password: </label>
            <input type="password" name="pass" id="pass" placeholder='Enter here' value={val.pass} onChange={commonHandler} />
            <br /><br />
            <button>Submit</button>
        </form>
    </>
}