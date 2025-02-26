import React from "react";

// const Greet = (props) => {
//   return (
//     <div>
//       <h1>
//         Hello {props.name} {props.lastname}
//       </h1>
//       {props.children}
//     </div>
//   );
// }; this is the old way you can use this way also
const Greet = ({ name, lastname, children }) => {
    // const { name, lastname, children } = props; this is also a way to destructure the props
  return (
    <div>
      <h1>
        Hello {name} {lastname}
      </h1>
      {children}
    </div>
  );
};

export default Greet;
