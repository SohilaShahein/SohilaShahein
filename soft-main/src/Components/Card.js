import { useRecoilState } from "recoil";
import {  cart_finalarray } from "./Atoms";
const Card = () => {
    //   const  divCardStyle={
    //     width: 288 style={divCardStyle}
    //     };
    const [cart, setCart] =useRecoilState(cart_finalarray);
const arr = [
  {
    name:"1",
    price:10,
    img:"../imgs/dresses/1.jpg"
  },
  {
    name:"2",
    price:20,
    img:"../imgs/dresses/2.jpg"
  },{
    name:"3",
    price:30,
    img:"../imgs/dresses/3.jpg"
  }
]

    const AddToCardFun = () => {
      
    }

      return (
        <div>
          <div className="card mt-3" >
            <img src="https://images.hibobi.com/admin/BmG7iRNHzR1650709304337.jpg?x-oss-process=image/auto-orient,1/resize,m_lfit,w_800,limit_0/quality,q_90" className="card-img-top" alt="..."></img>
            <div className="card-body">
              <h5 className="Mint green dress">Mint green dress</h5>
             <p className="card-text">
             for kids from 1 to ten year 
              </p>
              <a href="#" className="btn btn-primary" onClick={AddToCardFun} > 
                Add To Cart
              </a>
            </div>
          </div>
        </div>
      );
    };

    export default Card;