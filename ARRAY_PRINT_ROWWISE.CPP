For the case:

4 4

10 20 30 40

50 60 70 80

27 29 37 48

32 33 39 50

In wave print row wise, for each row we need to print elements of each column starting from 0th(min) column to 3rd(max) column and from 3rd (max) column to 0th(min) column alternatively.



Thus, output is 10, 20, 30, 40, 80, 70, 60, 50, 27, 29, 37, 48, 32, 33, 39, 50, END.

Function:

void waveDisplay(int[] a,int n,int m){

  //Iterating over each row

  for(int row=0;row<m;row++)
  {
      //For even rows printing column elements from min col to max col
      //For odd rows printing column elements from max col to min col
      //Thus forming a wave pattern row wise.
       if(row%2==0)
       {
          //for even row 
          for(int col=0;col<n;col++)
             cout<<a[c][i]<<", "; //print element
       }
       else
       {
           //for odd row
           for(int col=n-1;col>=0;col--)
               cout<<a[c][i]<<", "; //print element
       }
  }
}
