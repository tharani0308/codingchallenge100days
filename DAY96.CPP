//Day of the week
//https://leetcode.com/problems/day-of-the-week/description/

class Solution{
    public: 
  bool is_leap(int year)
    {
        if(year%4!=0)
        {
            return false;
        }
        else if(year%400==0)
        {
            return true;
        }
        else if(year%100==0)
        {
            return false;
        }
        else if(year%4==0)
        {
            return true;
        }
        return false;
    }
    string dayOfTheWeek(int day, int month, int year) 
    {
        int odd_days=4;
        int y;
        for(y=1971; y<year; y++)
        {
            if(is_leap(y))
                odd_days+=2;
            else
                odd_days+=1;
        }
        
        int m;
        for(m=1; m<month; m++)
        {
             if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 ||m== 12)
             {
                 odd_days+=3;
             }
            else if(is_leap(year) && m==2)
            {
                odd_days+=1;
            }
            else if(m==2)
            {
                odd_days+=0;
            }
            else
            {
                odd_days+=2;
            }
            
        }
        
        odd_days+=day;
        
        int rem=odd_days%7;
        if(rem==0)
        {
            return "Sunday";
        }
        if(rem==1)
        {
            return "Monday";
        }
        if(rem==2)
        {
            return "Tuesday" ;
        }
        if(rem==3)
        {
            return "Wednesday";
        }
        if(rem==4)
        {
            return "Thursday";
        }
        if(rem==5)
        {
            return "Friday" ;
        }
       
        return "Saturday";
        
        
    }
};