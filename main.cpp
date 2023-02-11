int getMaxDeletions(string s) {
    int x=0,y=0,count=0;
    for(char ch :s){
        if(ch=='R')
        {
            x++;
            count++;
        }
        else if(ch=='L')
        {
            x--;
            count++;
        }
        else if(ch=='U')
        {
            y++;
            count++;
        }
        else if(ch=='D')
        {
            y--;
            count++;
        }
    }
    return count-abs(x)-abs(y);
}
