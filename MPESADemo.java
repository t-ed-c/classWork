class MPESAAccount {
    // Fields (attributes)
    String accountHolderName;
    String phoneNumber;
    double balance;

    // Constructor to initialize the MPESA account
    public MPESAAccount(String name, String number, double initialBalance) {
        accountHolderName = name;
        phoneNumber = number;
        balance = initialBalance;
    }

    // Method to display balance
    public void checkBalance() {
        System.out.println("Account Holder: " + accountHolderName);
        System.out.println("Phone Number: " + phoneNumber);
        System.out.println("Current Balance: KES " + balance);
    }
}

public class MPESADemo {
    public static void main(String[] args) {
        // Creating objects for MPESA accounts
        MPESAAccount johnAccount = new MPESAAccount("John Doe", "0700000001", 5000.00);
        MPESAAccount maryAccount = new MPESAAccount("Mary Jane", "0700000002", 3000.00);

        // Check balance for both accounts
        System.out.println("John's Account Details:");
        johnAccount.checkBalance(); // Accessing method using object

        System.out.println("\nMary's Account Details:");
        maryAccount.checkBalance(); // Accessing method using object
    }
}
