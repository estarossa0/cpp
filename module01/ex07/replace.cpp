#include "replace.h"

bool	word_match(s_data *data, char c)
{
	int		index;

	index = 0;
	while(data->s1[index])
	{
		if (data->s1[index] != c)
		{
			while (index-- > 0)
				data->in.unget();
			return false;
		}
		else
		{
			index++;
			if (data->s1[index])
				data->in.get(c);
		}
	}
	return true;
}

void	replace(t_data *data)
{
	char c;
	while (true)
	{
		data->in.get(c);
		if (data->in.eof() || !data->in.good() || !data->out.good())
			break;
		if (word_match(data, c))
		{
			data->out << data->s2;
		}
		else
		{
			data->out << c;
		}
	}
}
