

#include "ft_ctime.h"

static int	multiply_coeff(int coefficient[], int i)
{
	time_t	tmp;
	int		j;

	tmp = 1;
	j = i;
	while (j--)
		tmp *= coefficient[j];
	return (tmp * coefficient[i]);
}

t_cdate		*getday_since1970(t_cdate *date, time_t ttime, time_t *res)
{
	time_t	tmp;
	int		coefficient[4];
	int		i;

	i = 0;
	tmp = 0;
	coefficient[0] = 1;
	coefficient[1] = 60;
	coefficient[2] = 60;
	coefficient[3] = 24;
	while (ttime != 0 && i != 3)
	{
		if ((tmp = ttime / coefficient[i + 1]) == 0)
			*res += multiply_coeff(coefficient, i) * ttime;
		else
		{
			if (ttime - (tmp * coefficient[i + 1]) != 0)
				*res += multiply_coeff(coefficient, i) * \
					(ttime - (tmp * coefficient[i + 1]));
		}
		ttime = tmp;
		i++;
	}
	date->day_n = tmp;
	return (date);
}
