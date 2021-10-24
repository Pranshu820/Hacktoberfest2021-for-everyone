#include <iostream>
using namespace std;

int main()
{

   int arr[100],beg,mid,end,i,n,num;

   cout << "Enter the size of an array: ";
   cin >> n;

   cout << "Enter the values in sorted order (asc or desc): ";

   for(i = 0; i < n; i++)
   {   
       cin >> arr[i];
   }   

  
   /* Initialize beg and end value. */

   beg = 0;
   end = n-1;

   cout << "Enter a value to be searched in an array: ";
   cin >> num;

   /* Run loop, while beg is less than end. */

   while( beg <= end)
   {   
       
      /* Calculate mid. */
        
      mid = (beg+end)/2;

     /* If value is found at mid index,
        the print the position and exit. */

      if(arr[mid] == num)
      {   
         cout << "Item found at position: "<< (mid+1);
   
          exit(0);

      } else if(num > arr[mid]) {

         beg=mid+1;

      } else if (num < arr[mid]) {

         end=mid-1;
 
      }

   }

    cout << "Number does not found!!!";
    return 0;
 }
