import { Navigate, Outlet } from "react-router-dom";

const ProtectedRoute = () => {

    const isAuthenication = true;
    if(!isAuthenication){
        console.log('You have to login!');
        return <Navigate to="/" />;
    }
   return <Outlet />;

};
export default ProtectedRoute;