1. to make a row unique, use the 'group by' on the column names to make them unique.
2. You can 'group by' a column that is not among the selected columns. 
3. You can use 'join on' multible times in the same query.
4. You **CAN** ***ORDER BY*** an agrigate function that is not in the 'select' statement.  
5. To show the indexes of a database: ```show indexes from table_name;```
6. To get data about the table schema: ```show create table table_name;```
7. You can use conditional in sql as follows:
    ```sql
    select 
        case
            when a + b > c and b + c > a and c + a > b then
                case
                    when a = b and a = c then "Equilateral"
                    when a = b or b = c or c = a then "Isosceles"
                    else "Scalene"
                end
             else "Not A Triangle"
        end as type
    from triangles
    ```
8. There are the following functions:
    - ceil
    - floor
    - replace(column_name, value_to_replace, new_value)
    - round(column_name, number_of_decimal_places)
    - abs(column_name)
    - power(column_name, the_power)
    - sqrt(column_name)
    - concat(column_name, string)
    - coalesce(val1, val2, val3, ...): returns the first non-null values of the given values
    - row_number() returns the row number
9. You can use the case statement int he order by statement as follows:
    ```sql
    select *
    from a_table
    order by 
        case 
            when statement_ then column_name
        end, 
        case 
            when statement_2 then columns_name
        end;
    ```
