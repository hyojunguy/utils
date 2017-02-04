#ifndef MYSTRING_H
#define MYSTRING_H

char *my_strcat( char *src, const char *tail )
{
    char *s = src;
	
    for( ; *src ; src++ );
    for( ; *tail ; src++, tail++ )
        *src = *tail;
	
    *src = '\0';
	
    return s;
}

char* my_strchr(char *src, int c)
{
	int end=1;
	
	for(;*src;++src)
	{
		if(*src == c) 
		{
			end = 0;
			break;
		}
	}
	if(end == 1) return NULL;
	else return src;
}

int my_strcmp(const char *s1, const char *s2)
{
	int result;
	
	for(; *s1!='\0' || *s2!='\0' ; s1++,s2++)
	{
		result = *s1 - *s2;
		if(result != 0) return result; 
	}
	
	return 0;
}

char *my_strcpy( char *dest, const char *src )
{
    char *s = dest;
    for( ; *src ; dest++, src++ )
        *dest = *src;
	
    *dest = '\0';
    return s;
}

int my_strlen( const char *s1 )
{
    int i = 0;
    for( i = 0 ; *s1 ; i++, s1++ );
	
    return i;
}

char* my_strlwr(char *s) 
{ 
    for(;*s;s++)
		if( (*s > 64) && (*s < 91) ) *s = *s + 32;
		
		return s;
} 

char* my_strupr(char *s) 
{ 
    for(;*s;s++)
		if( (*s > 96) && (*s < 123) ) *s = *s - 32;
		
		return s;
} 

char* my_strset(char *s,int ch) 
{ 
    for(;*s;s++)
        *s = ch;
	
	return s;
} 

char* my_strrev(char *s) 
{ 
	char temp;
	char* s_temp = s;
	
    for(;*s_temp;s_temp++);
	
    s_temp--;
	
	for(;s_temp > s;s++,s_temp--)
	{
        temp = *s_temp;
		*s_temp = *s;
		*s = temp;
	}
	return s;
} 

char* my_strstr(char *s1, char *s2) 
{ 
	char *s1_temp, *s2_temp;
	
	for(;*s1;s1++)
	{
		s1_temp = s1;
        s2_temp = s2;
		if(*s1_temp == *s2_temp)
		{
			while(1)
			{
				if(!*s2_temp) return s1;
				if(*s1_temp != *s2_temp) break;
				if(!*s1_temp) break;
				s1_temp++;
				s2_temp++;                             
			}
		}
    }
	return NULL;
} 

#endif
