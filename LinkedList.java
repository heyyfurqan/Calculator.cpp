/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Stallion
 */
import java.util.Scanner;
import java.util.LinkedList;
import java.util.Iterator;

    /**
     * @param args the command line arguments
     */
public class Task1a{
    public static void main(String[] args) {
        // TODO code application logic here
       LinkedList<Product>list=new LinkedList<>();
       Iterator<Product>productIterator=list.listIterator();
         Product product=new Product();
        Scanner obj=new Scanner(System.in);
        int input;
        do{
        System.out.println("Press 1 to add");
        System.out.println("Press 2 to show list");
        System.out.println("Press 3 to update");
        System.out.println("Press 4 to delete");
        System.out.println("Press 0 to exit");
        System.out.println("Enter input: ");
        input=obj.nextInt();
        switch(input){
           
            case 1:
                 System.out.println("-----Add Product-----");
              System.out.println("Enter ProductId: ");
              int id=obj.nextInt();
              obj.nextLine();
              
           System.out.println("Enter Category: ");
              String cat=obj.nextLine();
              System.out.println("Enter name: ");
              String name=obj.nextLine();
            
            product.setprodid(id);
            product.setcateg(cat);
            product.setproname(name);
            
             list.add(product);
             System.out.println("Product Added Successfully...");
             
              
              break;
            case 2:
                System.out.println("-----Show List-----");
                System.out.println("Product Id"+  "--Category--"+"ProductName");
                for(int i=0;i<list.size(); i++){
                    System.out.println(list.get(i).getprodid()+"           "+list.get(i).getcateg()+"           "+list.get(i).getproname());
                }
                break;
            case 3:
                 System.out.println("-----Update Product-----");
                System.out.println("Enter Product Id: ");
                int mid=obj.nextInt();
                for(int i=0;i<list.size();i++){
                    if(mid==list.get(i).getprodid()){
                         System.out.println("Enter new ProductId: ");
                         int iid=obj.nextInt();
                         obj.nextLine();
                          System.out.println("Enter new Category: ");
              String cate=obj.nextLine();
              System.out.println("Enter new name: ");
              String Name=obj.nextLine();
              product.setprodid(iid);
            product.setcateg(cate);
            product.setproname(Name);
              
                    
                    System.out.println("Updated Successfully...");
                     break;
                    }
                    else{
                        System.out.println("Enter correct Id...");
                    }
                }
              break;
            case 4:
                 System.out.println("-----Delete Product-----");
                  System.out.println("Enter Product Id: ");
                  int nid=obj.nextInt();
                  for(int i=0; i<list.size();i++){
                      if(nid==list.get(i).getprodid()){
                          list.remove(i);
                          System.out.println("Deleted Successfully...");
                      }
                  }
                break;
            case 0: 
            System.out.println("Exited Successfully!!");
                break;
        }
        }
        while(input != 0);
    }
}

    
class Product {

    private int productId;
   private String category;
   private String productName;
    
    public Product(){
       
   }
   
    public int getprodid(){
        return productId;
    }
    
    public void setprodid(int prid){
        this.productId=prid;
    }
    
    public String getcateg(){
        return category;
    }
    
    public void setcateg(String category){
         this.category=category;
    }
    
    public String getproname(){
        return productName;
    }
    
    public void setproname(String productName){
           this.productName=productName;
    }
}
