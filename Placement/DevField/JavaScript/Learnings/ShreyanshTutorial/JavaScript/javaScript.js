// 1.word and keyword
// 2.var let const
// 3.HOISTING:-variable and fuction are hoisting which means that their declaration is moved to the top of code
// example: console.log(a);
//var a = 10; that means it write like
    /*  var a;
    console.log(a);
    a = 10; it will give the output == UNDEFINED
    */
// 4. Types of Js
// 5. Primitive, referance - [],(),{};
//  var a = 20; primitive;
//  var a = [1,2,3,4,5]
// var b = a
// b.pop();
// than output is b = [1,2,3,4] and a = [1,2,3,4] it is called referance
// 6. Conditions if else else-if
// 7.loops for and while
// 8. Functions
// Function mainly for three work
// 1).if you want run any pragram in futur than you can use function
// 2).when you want to reuse your code
// 3).when you want run your program with different data everytime
// Example function abcd(){
//              function statement....;
//         }
//  function abcd(a,b,c){
//       console.log(a, b, c);
//  }
//    abcd(2, 3, 4);
// argument: real value jo hm dete hai fnc chalate samay
//parameter: variable jinme value store hoti hai arguments baali
//
//9). Array
// var arr = [1,2,3,4,5,6];
//push pop shift unshift
//arr.push(7);
//arr will be = [1,2,3,4,5,6,7]
//arr.pop();
//arr will be  = [1,2,3,4,5,6]
//arr.unshift(0)
//arr will be  = [0,1,2,3,4,5,6]
//arr.shift()
//arr will be  = [1,2,3,4,5,6]
//arr.splice(2,1);
//arr will be  = [1,2,4,5,6]
//arr.splice(2,2);
//arr will be  = [1,2,6]
//10).Objects
// 1- blank Object
//      var a = {
//
//
//      }
//2- filled Object
//      var a = {
//           age: 25,
//           name:"Akash Yadav",
//           email:"ak3845yadav@gmail.com",
//           linkedin: "AkashLinkedin",
//           phone: 8279973788,
//           kuchbolo: function(){
//
//                        }
//      }
// 11). Props&method
//age, name , email, linkedin, phone is props (property)
//and kuchbolo is method
//  a.age = 45;
//
//Deep Knowledge of JavaScript
//12).var let const
//var-ES5
//let,const-ES6
// var - Function Scoped hota hai
// function abcd(){
//      for(var i = 0; i<12; i++)
//          console.log(i);
//      }
//         console.log(i)
//      }
//  1,2,3,4,5,6,7,8,9,10,11,12
// let - Braces scoped hota hai
// function abcd(){
//  for(let i = 0; i<12; i++){
//      console.log(i);
//      }
//      console.log(i);
// }
//  output 1,2,3,4,5,6,7,8,9,10,11 then Error accurd because it will not allow to use let variable outside of braces
// most important difference that
// var - add itself on window
// let - did not add itself on window
// 13). window object
// window is a one type of object or a container of features which is provided by browser those featur did not contain by js js inherit these feature for use
// if var a= 10 it will add in window so this is drawback of var because there is a chance of data leakage
// if let b = 10 than it will not add in window so it is safe
// 14). Browser context api
// browser context api is a combination of window object , stack, heap provided by browser