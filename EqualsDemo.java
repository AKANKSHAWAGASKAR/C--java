class Demo
{
    public int No1;
    public int No2;

    public Demo(int a, int b)
    {
        No1 = a;
        No2 = b;
    }
}

class EqualsDemo
{
    public static void main(String A[])
    {

        String s1 = "Hello";
        String s2 = "Hello";

       // Demo obj1 = new Demo(11,21);
        //Demo obj2 = new Demo(11,21);

        System.out.println("Hashcode of s1 :"+s1.hashCode());
        System.out.println("Hashcode of s2 :"+s2.hashCode());

    
        if(s1.equals(s2))
        {
            System.out.println("objects are same :");
        }
        else
        {
            System.out.println("objects are difference :");
        }

        if(s1 ==s2)
        {
            System.out.println("Objects are same");

        }
        else 
        {
           System.out.println("objects are difference :"); 
        }
    }
}