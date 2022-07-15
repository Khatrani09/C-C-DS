import 'dart:io';

void main(){
  
  print("enter side:");
  var side=stdin.readLineSync();
 // area=side*side;
  stdout.write(int.parse(side)*int.parse(side));
  //print('area:$area');
  print("\n");
  stdout.write(4*int.parse(side));
 
  
   
}