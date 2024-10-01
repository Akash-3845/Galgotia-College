import java.util.*;

public class Solution {

    // Function to count usefulness for each subtree
    private static int countSubtreeUsefulness(int node, int parent, List<List<Integer>> adjList, int[] result) {
        int usefulness = 0;

        // Each node is divisible by itself
        usefulness++;

        // Traverse each child and calculate usefulness
        for (int child : adjList.get(node)) {
            if (child != parent) {
                usefulness += countSubtreeUsefulness(child, node, adjList, result);

                // Check if the root is divisible by the child's value
                if (node % child == 0) {
                    usefulness++;
                }
            }
        }

        result[node] = usefulness;
        return usefulness;
    }

    public static int get_ans(int n, int m, int cols, List<List<Integer>> edges) {
        // Create adjacency list
        List<List<Integer>> adjList = new ArrayList<>();
        for (int i = 0; i <= n; i++) {
            adjList.add(new ArrayList<>());
        }

        // Building the tree edges
        for (List<Integer> edge : edges) {
            int parent = edge.get(0);
            int child = edge.get(1);
            adjList.get(parent).add(child);
            adjList.get(child).add(parent);
        }

        // Initialize result array to store subtree usefulness counts
        int[] result = new int[n + 1];

        // Assuming the root is node 1
        countSubtreeUsefulness(1, -1, adjList, result);

        // Sum the usefulness values for all nodes
        int totalUsefulness = 0;
        for (int i = 1; i <= n; i++) {
            totalUsefulness += result[i];
        }

        return totalUsefulness;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Reading the number of nodes
        int n = scanner.nextInt();

        // Reading the number of edges
        int m = scanner.nextInt();
        int cols = scanner.nextInt(); // cols is not really necessary here

        // Reading the edges
        List<List<Integer>> edges = new ArrayList<>();
        for (int i = 0; i < m; i++) {
            List<Integer> edge = new ArrayList<>();
            for (int j = 0; j < cols; j++) {
                edge.add(scanner.nextInt());
            }
            edges.add(edge);
        }

        // Solve the problem and print the result
        int result = get_ans(n, m, cols, edges);
        System.out.println(result);
    }
}

