import React, { Component } from "react";

export class ClassComponent extends Component {
  constructor() {
    super();
    this.state = {
      val: 0,
    };
  }
  changeNumber() {
    // this.setState(
    //   {
    //     val: this.state.val + 1,
    //   },
    //   () => {
    //     console.log("callback", this.state.val); // setstate only contain two method one is object and other is callback funciton
    //   }
    // );
    this.setState((preState, props) => ({
      val: preState.val + 1,
    }));
    console.log(this.state.val);
  }
  increment() {
    this.changeNumber();
    this.changeNumber();
    this.changeNumber();
    this.changeNumber();
    this.changeNumber();
    this.changeNumber();
  }
  render() {
    return (
      <div>
        <h1>{this.state.val}</h1>
        <button onClick={() => this.increment()}>Subscribe</button>
      </div>
    ); // you can use parameters using {this.props.name} and {this.props.lastname}
  }
}

export default ClassComponent;
