import { useState } from 'react';

export default function Like() {
    let [isLike, setIsLike] = useState(false);
    let [clickCount, setClickCOunt] = useState(0);

    function ToggleLike() {
        setIsLike(!isLike);
        setClickCOunt(clickCount+1)
    }

    return (
        <>
            <h1>Like Button</h1>
            <div onClick={ToggleLike}>
                {isLike == true ? (<i className="fa-solid fa-heart" style={{ color: '#ff0000' }}></i>) : (<i class="fa-regular fa-heart"></i>)}
            </div>
            <h3>Click Count = {clickCount}</h3>
        </>
    );
}