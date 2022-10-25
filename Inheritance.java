/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Stallion
 */
public class Person {
    String Gender;
    String nature;
    String Qualities;
    int age;
    String name;
    public void isGood(){
        
    }
    public void isTall(){
        
    }
    public void isYoung(){
        
    }
    public void isMale(){
        
    }
    public void isRude(){
        
    }
       }
 class Employee extends Person{
     String status;
     String Dept;
     String NTN;
     public void isOnService(){
         
     }
     public void isValiddept(){
        
    }
     public void isValidNTN(){
         
     }
}
class Student extends Person{
    String regno;
    String Dept;
    public void isValidregno(){
        
    }
     public void isValiddept(){
        
    }
}
class UndergraduateStudent extends Student{
    String program;
    public void isValidprogram(){
        
    }
}
class PostgraduateStudent extends Student{
    String program;
    public void isValidprogram(){
        
    }
}
class Teacher extends Employee{
    String Status;
    String designation;
    String Dept;
    String NTN;
    @Override
 public void isOnService(){
         
     }
 public void isValiddesig(){
     
 }
    @Override
  public void isValiddept(){
        
    }
    @Override
   public void isValidNTN(){
         
     }
}
class GraduateAssistant extends PostgraduateStudent,Teacher{
    String program;
    String Dept;
    @Override
     public void isValidprogram(){
        
    }
      public void isValiddept(){
        
    }
}