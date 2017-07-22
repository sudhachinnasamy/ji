import java.util.*;
class SwitchExample
{ 
     public static void main(String args[])
    {
     Scanner sc=new Scanner(System.in); 
     String name=sc.next();  
    
    switch(name)
    {  
        case "monday":
            System.out.println("true");break;  
         case "tuesday":
            System.out.println("true");break;      
         case "wednesday":
            System.out.println("true");break;  
         case "thursday":
            System.out.println("true");break;
        case "friday":
            System.out.println("false");break;  
        case "saturday":
            System.out.println("false");break;  
       case "sunday":
            System.out.println("false");break;  
        default: 
        System.out.println("invalid");  
    }  
}  
}
