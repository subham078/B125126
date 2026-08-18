//q.8. Train Seat Status

#include <iostream>
#include <string>
using namespace std;

class TrainSeat {
private:
    int seatNumber;
    string passengerName;
    bool bookingStatus;

public:
    TrainSeat(int seat, string passenger, bool status) {
        seatNumber = seat;
        passengerName = passenger;
        bookingStatus = status;
    }

    friend class TicketChecker;
};

class TicketChecker {
public:
    void displaySeatDetails(TrainSeat t) {
        cout << "Seat Number: " << t.seatNumber << endl;

        if (t.bookingStatus) {
            cout << "Booking Status: Booked" << endl;
            cout << "Passenger Name: " << t.passengerName << endl;
        } else {
            cout << "Booking Status: Available" << endl;
        }
    }
};

int main() {
    TrainSeat seat(25, "Rahul", true);

    TicketChecker checker;
    checker.displaySeatDetails(seat);

    return 0;
}