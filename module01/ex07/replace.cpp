#include "replace.hpp"

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

s_data::s_data(char **argv)
	{
		in.open(argv[1]);
		if (!in.is_open())
		{
			std::cout << std::string(argv[1]) + " ";
			std::cout << strerror(errno) << std::endl;
			exit(errno);
		}
		out.open(std::string(argv[1]) + ".replace");
		if (!out.is_open())
		{
			std::cout << strerror(errno) << std::endl;
			exit(errno);
		}
		s1 = argv[2];
		s2 = argv[3];
	}

s_data::~s_data()
{
	in.close();
	out.close();
}
