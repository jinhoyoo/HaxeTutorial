class Hello {
    static function main() {
		// print a message on the screen
        Sys.println("What's your name?");
        // read user input
        var input = Sys.stdin().readLine();
        // print the result
        Sys.println("Hello " + input);
    }
}