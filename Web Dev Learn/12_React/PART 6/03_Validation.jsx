// We use formik validation purposes to shorten our work
// VAlidation is done to provide additional features to our form
// https://formik.org/docs/overview 

import { useState } from 'react';

export default function FormComponent() {
    let [val, setVal] = useState({ usrN: '', pass:'' })
    let [valid,setValid]= useState(true);

    function commonHandler(event) {
        setVal((currVal) => {
            return { ...currVal, [event.target.name]: event.target.value }
        })
    }

    function handleSubmit(event){
        // Validator
        console.log(valid);
        if(!val.usrN){
           setValid(false);
        }else setValid(true);

        event.preventDefault();
        console.log(val);
        setVal({usrN: '', pass:''})
    }

    return <>
        <form onSubmit={handleSubmit}>
            {valid===false && <p style={{color:'red'}}>Username Can't be empty</p>}
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