import { Link } from "react-router-dom";

const Navigation = () => {
    return (
        <div>
          <div>
              <Link to="/users">Users</Link>
          </div>
          <div>
              <Link to="/posts">Posts</Link>
          </div>

        </div>
    );

};
export default Navigation;