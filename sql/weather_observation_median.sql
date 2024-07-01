--- Problem diffinition:
--- A median is defined as a number separating the higher half of a data set from the lower half.
--- Query the median of the Northern Latitudes (LAT_N) from STATION and round your answer to  decimal places.
--- schema: station(ID, CITY, STATE, LAT_N, LONG_W)

select
    round(avg(lat_n), 4)
from (
    select
        lat_n,
        @row := @row + 1 as row_num
    from 
        station, (select @row := 0) r
    order by lat_n
) inner_table
where
    row_num in (floor(((select count(lat_n) from station) + 1) / 2), ceil(((select count(lat_n) from station) + 1) / 2))
