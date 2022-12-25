def printPattern(n, m, flag):
 

    # Print m.

    print(m)
 

    # If we are moving back

    # toward the n and we

    # have reached there,

    # then we are done

    if flag == False and n == m:

        return

    # If we are moving

    # toward 0 or negative.

    if flag:

        # If m is greater, then 5,

        # recur with true flag

        if m - 5 > 0:

            printPattern(n, m - 5, True)

        else:  # recur with false flag

            printPattern(n, m - 5, False)

    else:  # If flag is false.

        printPattern(n, m + 5, False)
 
 
# Driver Code

if _name_ == "_main_":

  n = 16
 

  # Function call

  printPattern(n, n, True)