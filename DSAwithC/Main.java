
class Rental {

    void rentVehicle(String vehicleType) {
        System.out.println("Vehicle Type: " + vehicleType);
        System.out.println("Rental for default duration.");
        System.out.println();
    }

    void rentVehicle(String vehicleType, int days) {
        System.out.println("Vehicle Type: " + vehicleType);
        System.out.println("Rental Days: " + days);
        System.out.println();
    }


    void rentVehicle(String vehicleType, int days, boolean withDriver) {
        System.out.println("Vehicle Type: " + vehicleType);
        System.out.println("Rental Days: " + days);
        System.out.println("Driver Required: " + (withDriver ? "Yes" : "No"));
        System.out.println();
    }
}



class Vehicle {

    void getVehicleInfo() {
        System.out.println("This is a general vehicle used for rental.");
    }
}


class Car extends Vehicle {

    @Override
    void getVehicleInfo() {
        System.out.println("This is a Car - 4 wheeler, comfortable for family trips.");
    }
}



class Bike extends Vehicle {

    @Override
    void getVehicleInfo() {
        System.out.println("This is a Bike - 2 wheeler, fuel efficient and fast.");
    }
}



public class Main {

    public static void main(String[] args) {

        System.out.println("=== Method Overloading ===");

        Rental r = new Rental();

        r.rentVehicle("Car");
        r.rentVehicle("Bike", 3);
        r.rentVehicle("Car", 5, true);



        System.out.println("=== Runtime Polymorphism ===");

        Vehicle v;

        v = new Car();  
        v.getVehicleInfo();

        v = new Bike(); 
        v.getVehicleInfo();
    }
}