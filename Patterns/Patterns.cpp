#include<bits/stdc++.h>
using namespace std;

// The outerloop is used for the rows 
// The inner loop is used for the columns

//Set of rules for pattern formation
// Rule-1 Count the number of rows
// Rule-2 For the inner loop, Focus on the columns and somehow connect them with the rows
// Rule-3 Always print inside the inner loop
// Rule-4 Observe symmetry in patterns (optional)


// Pascel Triangle

/*                   {Space,Star,Space}
    *                       {3,1,3}
   ***                       {2,3,2}
  *****                      {1,5,1}
 *******                     {0,7,0}
    
    
 So, in this space is decreasing so we can use {j<n-i-1}
 for stars we can use {2*i+1}
 and then again for space we can use {j<n-i-1}

 Here, We have to apply three inner loops to print this pattern
    */