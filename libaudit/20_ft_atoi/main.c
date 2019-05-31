//     int
//     atoi(const char *str);
//
//     #include <xlocale.h>
//
//     int
//     atoi_l(const char *str, locale_t loc);
//
//DESCRIPTION
//     The atoi() function converts the initial portion of the string pointed to by str to int representation.
//
//     It is equivalent to:
//
//           (int)strtol(str, (char **)NULL, 10);
//
//     While the atoi() function uses the current locale, the atoi_l() function may be passed a locale directly. See xlocale(3)
//     for more information.

static	int	ft_of(long c, const char *str, int sign, long i)
{
	long int	check;
	long int	comp;
	long int	orig;
	
	check = (long)c;
	comp = (long)c;
	orig = (long)c;
	check = (check * 10) + (long)(str[i] - '0');			//we calculate first direct way
	comp = ((check - ((long)(str[i] - '0'))) / 10);			//then we take check variable and calculate it back to comp
	if (comp == orig)										//comprare comp with original value if comparison is true return 1 and continute atoi
		return (1);											//otherwise if does not match the int is broken and we return -1 or 0 depending on sign detected
	else
	{
		if (sign > 0)
			return (-1);
		else
			return (0);
	}
}

int			ft_atoi(const char *str)
{
	long	res;
	int		sign;
	long	i;
	
	res = 0;														//initialize variable for result storage
	sign = +1;														//intialize variable to store sign
	i = 0;															//initialize iterator
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)			//check for space characters in the begining of the string
		i++;														//iterate while space characters are present
	if (str[i] == '+' || str[i] == '-')								//check for + or - sign, + needs to be check because str may hold smth like +555
	{
		if (str[i] == '-')											//if minus if found we equate sign variable to negative
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')							//while numbers are between 0 and 9 we cycle trhough
	{
		res = res * 10 + (str[i] - '0');							//result equals result times 10 + (char representation minus 0 in ascii which is 48 moves char directly to char in int form
		if (ft_of(res, str, sign, i) == 0 || ft_of(res, str, sign, i) == -1)   //check for int overflow atoi returns 0 or -1 depneding on overflow value
			return (ft_of(res, str, sign, i));
		i++;
	}
	return ((int)(res * sign));
}

int 	main()
{
	char	str[] = "64557383945";
	ft_atoi(str);
	return (0);
}