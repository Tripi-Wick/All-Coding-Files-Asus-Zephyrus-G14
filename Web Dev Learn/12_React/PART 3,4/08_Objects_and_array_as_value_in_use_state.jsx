// Re-render function only works when there is any change in curr value, as when any change is made in an obj or array there address remains same so no re-rendering occurs
// Hence we gotta pass a copy of the array or a new array to the set function to make it re-render
// ... is spread method which creates new copy of the obj and arr

import { useState } from 'react'


export default function Ludo() {
    let [moves, setMoves] = useState({ blue: 0, yellow: 0, green: 0, red: 0 })
    let [moveVal, setMoveVal] = useState([])

    function handelBlueClick() {
        setMoves((prevMove) => {
            return({...prevMove, blue: prevMove.blue+1})
        })
        setMoveVal((prevMove)=>{
            return([...prevMove,'Blue Moved, '])
        })
    }
    function handelYellowClick() {
        setMoves((prevMove) => {
            return({...prevMove, yellow: prevMove.yellow+1})
        })
        setMoveVal((prevMove)=>{
            return([...prevMove,'Yellow Moved, '])
        })
    }
    function handelRedClick() {
        setMoves((prevMove) => {
            return({...prevMove, red: prevMove.red+1})
        })
        setMoveVal((prevMove)=>{
            return([...prevMove,'Red Moved, '])
        })
    }
    function handelGreenClick() {
        setMoves((prevMove) => {
            return({...prevMove, green: prevMove.green+1})
        })
        setMoveVal((prevMove)=>{
            return([...prevMove,'Green Moved, '])
        })
    }


    return (
        <div style={{ display: 'flex', flexDirection: 'column', alignItems: 'center' }}>
            <h1>Ludo Counter</h1>
            <p>[{moveVal}]</p>
            <h3>Blue Moves = {moves.blue} </h3>
            <button style={{ padding: '5px 10px 5px 10px', backgroundColor: 'blue', color: 'white' }} onClick={handelBlueClick}>+1</button>
            <h3>Yellow Moves = {moves.yellow} </h3>
            <button style={{ padding: '5px 10px 5px 10px', backgroundColor: 'yellow' }} onClick={handelYellowClick}>+1</button>
            <h3>Green Moves = {moves.green} </h3>
            <button style={{ padding: '5px 10px 5px 10px', backgroundColor: 'green', color: 'white' }} onClick={handelGreenClick}>+1</button>
            <h3>Red Moves = {moves.red} </h3>
            <button style={{ padding: '5px 10px 5px 10px', backgroundColor: 'red', color: 'white' }} onClick={handelRedClick}>+1</button>
        </div>
    )
}