import { useState } from 'react'
import { v4 as uuidv4 } from 'uuid';


export default function Todo() {
    let [todo, setTodo] = useState([{value: 'SAMPLE', id: uuidv4(), state:false}]);
    let [val, setVal] = useState('');

    function handleClick(event) {
        setTodo((preVal) => {
            return [...preVal, { value: val, id: uuidv4(), state:false }]
        })
    }

    function handleChange(event) {
        setVal((preVal) => {
            return (event.target.value);
        })
    }

    function handleDelete(id){
        setTodo((preVal)=>{        
            return (preVal.filter((i)=>{return i.id != id}))
        })
    }
    function handleDone(id){
        setTodo(
            todo.map((i)=>{
                if(i.id===id){
                    return {...i, state:!i.state}
                }
                else return i;
            })
        );
    }

    return (
        <div style={{ display: 'flex', flexDirection: 'column', flexWrap: 'wrap', alignItems: 'center', width: '100%' }}>
            <h1>To Do List</h1>
            <span>
                <input type="text" onChange={handleChange} />
                <button onClick={handleClick}>ADD</button>
            </span>
            <hr style={{ width: '20%', margin: '2em' }} />
            <span>
                <ul>
                    {todo.map((i) => {
                        return (
                            <li key={i.id}>
                                <span style={i.state===false?{marginRight:"10px"}:{marginRight:"10px",textDecoration:'solid black line-through'}}>{i.value}</span>
                                <button onClick={()=>handleDelete(i.id)}>Delete</button>                 
                                <button onClick={()=>handleDone(i.id)}>Done</button>                 
                                {/* This is used to pass value with a handling function */}
                            </li>
                        );
                    })}
                </ul>
            </span>
        </div>
    );
}