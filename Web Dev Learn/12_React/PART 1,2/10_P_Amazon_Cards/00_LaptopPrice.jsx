import './00_LaptopPrice.css'

export default function LapPrice({realPrice,discountedPrice}){
    return(
        <div className='price'>
        <p style={{paddingLeft:'10px', paddingRight:'10px', textDecoration:'solid black line-through' }}>{realPrice}</p>
        <p style={{paddingLeft:'10px', paddingRight:'10px'}}><b>{discountedPrice}</b></p>
        </div>
    );
}