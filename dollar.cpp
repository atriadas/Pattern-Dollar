void printPat(int n)
{
    
 for(int i=n;i>0;i--)
 {
     for(int j=n;j>0;j--)
     {
         for(int k=1;k<=i;k++)
         {
             cout<<j<<' ';
         }
     }
     cout<<'$';
 }
}
