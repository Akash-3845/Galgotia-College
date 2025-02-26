import React from "react";

function GreetFunction() {
    return (
      <div>
        <h1>Hey Functional/Stateless Components</h1>
      </div>
    );
//   return React.createElement(
//     "div",
//     {id: "GreetFunction", className: "GreetClass"},
//     React.createElement("h1", null, "Hey Functional/Stateless Components")
//   );
}

export default GreetFunction;
