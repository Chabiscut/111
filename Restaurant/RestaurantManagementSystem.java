import javax.swing.*;
import javax.swing.table.DefaultTableModel;
import java.awt.*;
import java.util.ArrayList;

public class RestaurantManagementSystem {

    // MenuItem class to represent each menu item
    private static class MenuItem {
        private int id;
        private String name;
        private double price;
        private String category;

        public MenuItem(int id, String name, double price, String category) {
            this.id = id;
            this.name = name;
            this.price = price;
            this.category = category;
        }

        public int getId() {
            return id;
        }

        public String getName() {
            return name;
        }

        public double getPrice() {
            return price;
        }

        public String getCategory() {
            return category;
        }
    }

    // Order class to represent customer orders
    private static class Order {
        private int orderId;
        private ArrayList<MenuItem> orderedItems;
        private double totalPrice;

        public Order(int orderId) {
            this.orderId = orderId;
            this.orderedItems = new ArrayList<>();
            this.totalPrice = 0.0;
        }

        public void addItem(MenuItem item) {
            orderedItems.add(item);
            totalPrice += item.getPrice();
        }

        public double getTotalPrice() {
            return totalPrice;
        }

        public ArrayList<MenuItem> getOrderedItems() {
            return orderedItems;
        }
    }

    // Restaurant System Panel for managing the menu, orders, and inventory
    public static class RestaurantManagementPanel extends JPanel {

        private JTable menuTable;
        private DefaultTableModel menuModel;
        private ArrayList<MenuItem> menuItems;
        private ArrayList<Order> orders;

        public RestaurantManagementPanel() {
            setLayout(new BorderLayout());

            // Initialize the menu and orders
            menuItems = new ArrayList<>();
            orders = new ArrayList<>();

            // Initialize Table for menu
            menuModel = new DefaultTableModel(new String[]{"ID", "Name", "Price", "Category"}, 0);
            menuTable = new JTable(menuModel);

            // Buttons for adding and removing items from the menu
            JButton addMenuItemButton = new JButton("Add Menu Item");
            JButton removeMenuItemButton = new JButton("Remove Menu Item");
            addMenuItemButton.addActionListener(e -> addMenuItem());
            removeMenuItemButton.addActionListener(e -> removeMenuItem());

            // Panel to hold menu management buttons
            JPanel menuButtonPanel = new JPanel();
            menuButtonPanel.add(addMenuItemButton);
            menuButtonPanel.add(removeMenuItemButton);

            // Buttons for managing orders
            JButton createOrderButton = new JButton("Create Order");
            JButton completeOrderButton = new JButton("Complete Order");
            createOrderButton.addActionListener(e -> createOrder());
            completeOrderButton.addActionListener(e -> completeOrder());

            // Panel to hold order management buttons
            JPanel orderButtonPanel = new JPanel();
            orderButtonPanel.add(createOrderButton);
            orderButtonPanel.add(completeOrderButton);

            // Panel to display the menu and orders
            JScrollPane menuScrollPane = new JScrollPane(menuTable);

            // Add components to the main panel
            add(menuButtonPanel, BorderLayout.NORTH);
            add(menuScrollPane, BorderLayout.CENTER);
            add(orderButtonPanel, BorderLayout.SOUTH);

            // Add some sample menu items to the system
            loadSampleMenu();
        }

        private void loadSampleMenu() {
            addMenuItemToSystem(new MenuItem(1, "Burger", 5.99, "Main Course"));
            addMenuItemToSystem(new MenuItem(2, "Pizza", 7.99, "Main Course"));
            addMenuItemToSystem(new MenuItem(3, "Soda", 1.50, "Beverage"));
            addMenuItemToSystem(new MenuItem(4, "Fries", 2.50, "Side"));
        }

        // Add a new menu item
        private void addMenuItem() {
            String name = JOptionPane.showInputDialog(this, "Enter Item Name:");
            String price = JOptionPane.showInputDialog(this, "Enter Price:");
            String category = JOptionPane.showInputDialog(this, "Enter Category:");

            if (name != null && price != null && category != null) {
                int id = menuItems.size() + 1;
                double itemPrice = Double.parseDouble(price);
                MenuItem newItem = new MenuItem(id, name, itemPrice, category);
                addMenuItemToSystem(newItem);
            }
        }

        // Add the menu item to the system
        private void addMenuItemToSystem(MenuItem item) {
            menuItems.add(item);
            menuModel.addRow(new Object[]{item.getId(), item.getName(), item.getPrice(), item.getCategory()});
        }

        // Remove a menu item
        private void removeMenuItem() {
            int selectedRow = menuTable.getSelectedRow();
            if (selectedRow >= 0) {
                int id = (int) menuTable.getValueAt(selectedRow, 0);
                menuItems.removeIf(item -> item.getId() == id);
                menuModel.removeRow(selectedRow);
            } else {
                JOptionPane.showMessageDialog(this, "Select a menu item to remove.");
            }
        }

        // Create a new order
        private void createOrder() {
            int orderId = orders.size() + 1;
            Order newOrder = new Order(orderId);
            orders.add(newOrder);

            String orderItems = JOptionPane.showInputDialog(this, "Enter menu item IDs separated by commas (e.g., 1, 3):");
            if (orderItems != null) {
                String[] itemIds = orderItems.split(",");
                for (String itemId : itemIds) {
                    int id = Integer.parseInt(itemId.trim());
                    menuItems.stream()
                            .filter(item -> item.getId() == id)
                            .forEach(newOrder::addItem);
                }
                JOptionPane.showMessageDialog(this, "Order created with ID: " + orderId);
            }
        }

        // Complete an order and show the total
        private void completeOrder() {
            int orderId = Integer.parseInt(JOptionPane.showInputDialog(this, "Enter Order ID to complete:"));
            Order order = orders.stream()
                    .filter(o -> o.orderId == orderId)
                    .findFirst()
                    .orElse(null);
            if (order != null) {
                JOptionPane.showMessageDialog(this, "Order Total: $" + order.getTotalPrice());
            } else {
                JOptionPane.showMessageDialog(this, "Order not found.");
            }
        }
    }

    // Main class to set up the GUI window
    public static class MainFrame extends JFrame {

        public MainFrame() {
            setTitle("Restaurant Management System");
            setSize(600, 400);
            setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

            // Add RestaurantManagementPanel to the frame
            RestaurantManagementPanel managementPanel = new RestaurantManagementPanel();
            add(managementPanel);
        }

        public static void main(String[] args) {
            SwingUtilities.invokeLater(() -> {
                MainFrame frame = new MainFrame();
                frame.setVisible(true);
            });
        }
    }
}
