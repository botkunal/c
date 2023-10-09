import { usestate ,usesearch } from "react";
import { BrowserRouter , Router, Route , Link ,usenahative } form "react-router-dom";

const app2 = () =>{
    return (
        <div>
         <BrowserRouter>
          <Router>
            <Route>Path="/" element={<Root />}
            </Route>
           </Router>
         </BrowserRouter>
        </div>
    )
};

export default app2;

const list = [
    { title: "a" },
    { title: "b" },
    { title: "c" },
    { title: "d" },
];

const Root =() => {
    return(
        <div>
            <p>
                Root
            </p>
            <Link to="/root">Go to page 1</Link>
        </div>
    );
};

const Root1 =()=> {
    const [data, setFata] = usestate(list);

    const search =()=>{
        
    }
}
