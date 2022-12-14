delAll :: (Eq a) => a -> [a] -> [a]
delAll _ [] = []
delAll value (head:tail) = if (value == head)
                           then (delAll value tail)
                           else (head:(delAll value tail))
