# Include standard modules
import sys

# Defining main function


def main(a, b, c):
    ans = a + b + c
    print("sum = {}".format(ans))
    input("Successfully Executed...")


# Main Function
if __name__ == "__main__":
    # Get full command-line arguments
    full_cmd_arguments = sys.argv

    # Keep all but the first
    argument_list = full_cmd_arguments[1:]

    # Validating passed arguments
    if(len(argument_list) != 3):
        print("3 Arguments Expected ({} found)".format(len(argument_list)))
        input("Program Exited")
        sys.exit(1)
    else:
        print("Arguments passed are : {a}, {b}, {c}".format(
            a=argument_list[0], b=argument_list[1], c=argument_list[2]))

    # Extracting passed arguments
    a, b, c = int(argument_list[0]), int(
        argument_list[1]), int(argument_list[2])

    # Calling desired funtion to execute by passing args
    main(a, b, c)
