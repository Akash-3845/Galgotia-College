import React, { Component } from "react";

export class child extends Component {
  render() {
    return (
      <div>
        <button onClick={this.GreetMessage}>Hey Message Reader</button>
      </div>
    );
  }
}

export default child;
