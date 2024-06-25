class BankAccount {
    private int balance;

    public BankAccount(int initialBalance) {
        this.balance = initialBalance;
    }

    // Synchronized method to ensure thread safety
    public synchronized void withdraw(int amount) {
        if (balance >= amount) {
            System.out.println(Thread.currentThread().getName() + " is going to withdraw " + amount);
            try {
            // Simulate the delay in processing
            Thread.sleep(100);
            } catch (InterruptedException e) {
            e.printStackTrace();
            }
            balance -= amount;
            System.out.println(Thread.currentThread().getName() + " completed withdrawal of " + amount
                    + ". Remaining balance: " + balance);
        } else {
            System.out.println(Thread.currentThread().getName() + " tried to withdraw " + amount + " but only "
                    + balance + " is available.");
        }
    }

    public int getBalance() {
        return balance;
    }
}

class WithdrawTask implements Runnable {
    private BankAccount account;
    private int amount;

    public WithdrawTask(BankAccount account, int amount) {
        this.account = account;
        this.amount = amount;
    }

    @Override
    public void run() {
        account.withdraw(amount);
    }
}

public class BankingSystem {
    public static void main(String[] args) {
        BankAccount sharedAccount = new BankAccount(1000);

        Thread user1 = new Thread(new WithdrawTask(sharedAccount, 600), "User1");
        Thread user2 = new Thread(new WithdrawTask(sharedAccount, 600), "User2");

        user1.start();
        user2.start();

        try {
            user1.join();
            user2.join();
        } catch (InterruptedException e) {
            e.printStackTrace();
        }

        System.out.println("Final balance: " + sharedAccount.getBalance());
    }
}
