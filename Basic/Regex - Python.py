def numberMatcher( string ):
    pattern = '\d+'
    matches = re.findall( pattern, string )
    if ( matches ):
        for match in matches:
            print( match, end = ' ' )
    else: print( -1 )
