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
// all variable and data should be store in heap memory also intermediate data
// like assum add 1+2+3+4+5 in this calculation 1+2 = 3 and 3 will store in heap after that next value add in saved data untill calculation done.
// 15). execution context
// Defination:- execution context is a container where the function's code is executed and it's created whenever a function is called, it contains 3 things, variables, functions adn lexical environment.
// execution context matalb jab bhi hm fn chalayege to fn khud ka ak imaginary container bna lega jisme uski teen chije hogi:
//1:- variables
//2:-function inside that parent fn
//3:-lexical environment for that fn
// yahi imaginary container execution context kahalata hai
// 16).lexical environment is responsible for which variable is accessble or not;
//lexical environment hota hai ek chart jisme ye likha hota hai ke aapka particular function kis cheejo ko access kar sakta hai and kinko nahi,
// matalab ki it hold's it's scope and scope chain
// 17) how to copy reference
// var a = [1,2,3,4,5];
// var b  = [...a]; where ... is called spread operator which used for copy of value from that obj which is written after spread operator
//  var obj = { name: "Akash" };
// var cobj = { ...obj };
// console.log(cobj);
// cobj.name = "Rohit";
// console.log(cobj);
// console.log(obj);
// 18). Truthy and Falsy:
// js me kuch bhi likho bo mainly do prakar se hoti hai truthy and falsy both are different from truth and false
// falsy values ye hai = 0, false,undefined, null, NaN, document.all
// truthy values = those values which are not belongs to falsy values called truthy values;
// 19). forEach, forin, forof, do-while
//forEach sirf array pr chalata hai;
// var arr = [1, 2, 3, 4, 5, 6, 7, 8, 14, 545, 646, 656];
// arr.forEach(function(val) {
//     console.log(val + 10);
// });
// forin : forin objects pr loop krne ke liye hota hai
// var obj = {
//     name: "Akash",
//     id: 1654,
//     add:"prabhu ka adda shanti colony etawah"
// }
// for (var key in obj) {
//     console.log(key+": "+obj[key]);
// }
//20). Callback functions:
//jab bhi koi aisa code jo baad me chalata hai aap likhoge,
//kyuki wo code baad meain chalata hai js ko ye pata nahi hota ke wo complete hua ya nahi,
//aisa code ke completion par js ko btaya jaata hai ke wo complete hogya aur aap use chala skte ho,
//ye abtaane ka kaam callback ka hota hai;
// setTimeout(function () {
//     console.log("Hey 5000");
// },2000); in this code anonymouse function is called callback function which can run after 2 sec;
//aisa code jo baad me chalta hai use hum ek function dedete hai ke bhaiya jab complete ho jana to ye function chala dena,
// aur wo function jo hum dete hai wo ek normal fnc hi hota hai aur use kahte hai callback fnc.
// 21). what is first class fnc:-
// js mein ek concept hai jiska matalab hota hai ki aap fnc ko use kr skte hai as a value dekho
// function abcd(a) {
//     a();
// }
// abcd( function () { console.log(1243243) });
//22). how array are maded behind the scene:-
// var arr = [1,2,3,4,5] it is not array it is a object because js convert this as :
// var arr = {
//     0: 1,
//     1: 2,
//     2: 3,
//     3: 4,
//     4: 5
//}
// you can put arr[-1] = 2 then :- var arr = [1,2,3,4,5,-1:2]
// var arr = {
//     0: 1,
//     1: 2,
//     2: 3,
//     3: 4,
//     4: 5,
//    -1: 2
//}
// you can check array by Array.isArray([]) -> true
