import React, { Component } from "react";

export class EventBind extends Component {
  constructor(props) {
    super(props);

    this.state = {
      message: "Hello",
    };
    // this.change = this.change.bind(this);
  }

  //   change() {
  //     this.setState({
  //       message: "Goodbye",
  //     });
  //     console.log(this);
  //   }
  change = () => {
    this.setState({
      message: "Goodbye Akash",
    });
  };
  render() {
    return (
      <div>
        <h1>{this.state.message}</h1>
        {/* <button onClick={this.change.bind(this)}>Click</button> */}
        {/* <button onClick={() => this.change()}>Click</button> */}
        <button onClick={this.change}>Click</button>
      </div>
    );
  }
}

export default EventBind;
