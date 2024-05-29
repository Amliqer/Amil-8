#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <algorithm>
#include <optional>

std::optional<std::string> check_bracket_placement(const std::string& line, const std::vector<std::pair<char, char>>& bracket);

int main()
{
    setlocale(LC_ALL, "Rus");

    const std::vector<std::pair<char, char>> bracket
    {
        { '(', ')' },
        { '[', ']' },
        { '{', '}' }
    };
    std::cout << "Введите выражение\n";
    std::string in;
    std::getline(std::cin, in);
    auto res = check_bracket_placement(in, bracket);
    if (!res)
        std::cout << "Всё нормально\n";
    else
        std::cout << "Ошибка " << *res << "\n";

    return 0;
}

std::optional<std::string> check_bracket_placement(const std::string& line, const std::vector<std::pair<char, char>>& bracket)
{
    std::stack<char> dump_bracket;
    size_t idx = 0u;
    for (char c : line)
    {
        auto predicate_open = [c](const std::pair<char, char>& p)
            {
                return p.first == c;
            };
        auto predicate_close = [c](const std::pair<char, char>& p)
            {
                return p.second == c;
            };
        std::vector<std::pair<char, char>>::const_iterator it_open = std::find_if(std::begin(bracket), std::end(bracket), predicate_open);
        if (it_open == std::end(bracket))
        {
            std::vector<std::pair<char, char>>::const_iterator it_close = std::find_if(std::begin(bracket), std::end(bracket), predicate_close);
            if (it_close != std::end(bracket))
            {
                char top_bracket = dump_bracket.top();
                if (top_bracket == (*it_close).first)
                    dump_bracket.pop();
                else
                    return std::string(std::begin(line), std::next(std::begin(line), idx));
            }
        }
        else
            dump_bracket.push(c);
        ++idx;
    }
    return {};
}