#include <iostream>
#include <string>
using namespace std;

class Hospital {
public:
    // Variables for patient management
    int choice;
    int subChoice;
    long double contactNumber;
    string appointmentDate, month, gender;
    string firstName, lastName, department;

    // Menu functions
    void displayMainMenu();
    void displayPatientManagementMenu();
    void displayInvestigationsMenu();
    void displayFacilitiesMenu();
    
    // Patient management functions
    void displayWardsAvailability();
    void handleAppointments();

    // Investigation functions
    void handleAdmissions();
    void handleDischarge();

    // Facilities functions
    void displayDiagnosisMenu();
    void displayFoodMenu();
    void displayMedicationMenu();
};

void Hospital::displayMainMenu() {
    while (true) {
        cout << "\nMain Menu :- \n";
        cout << "     1. Patient Management\n";
        cout << "     2. Investigations\n";
        cout << "     3. Facilities\n";
        cout << "     4. Exit\n";
        cout << "     Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                displayPatientManagementMenu();
                break;
            case 2:
                displayInvestigationsMenu();
                break;
            case 3:
                displayFacilitiesMenu();
                break;
            case 4:
                return;
            default:
                cout << "\nWrong Input!!!!\n";
                break;
        }
    }
}

void Hospital::displayPatientManagementMenu() {
    while (true) {
        cout << "\nPatient Management Sub Menu:\n";
        cout << "     1. Wards\n";
        cout << "     2. Appointments\n";
        cout << "     3. Back to the Main Menu\n";
        cout << "     Enter your choice: ";
        cin >> subChoice;

        switch (subChoice) {
            case 1:
                displayWardsAvailability();
                break;
            case 2:
                handleAppointments();
                break;
            case 3:
                return;
            default:
                cout << "\nWrong Choice!!!\n";
                break;
        }
    }
}

void Hospital::displayWardsAvailability() {
    cout << "\nAvailability :- \n";
    cout << "\nChildren:\n";
    cout << "  General wards (available): 135\n";
    cout << "  Deluxe wards (available): 34\n";
    cout << "  ICCU: 24, ICU: 11, Ventilators: 13\n";

    cout << "\nWomen:\n";
    cout << "  General wards (available): 120\n";
    cout << "  Deluxe wards (available): 40\n";
    cout << "  ICCU: 20, ICU: 17, Ventilators: 23\n";

    cout << "\nMen:\n";
    cout << "  General wards (available): 140\n";
    cout << "  Deluxe wards (available): 20\n";
    cout << "  ICCU: 17, ICU: 11, Ventilators: 16\n";
}

void Hospital::handleAppointments() {
    cout << "\nEnter date (1-30): ";
    cin >> appointmentDate;

    cout << "\nEnter Month number (example - for May press 5): ";
    cin >> month;

    cout << "\nEnter your gender (1. Male, 2. Female, 3. Transgender): ";
    cin >> gender;

    cout << "\nEnter your first name: ";
    cin >> firstName;

    cout << "\nEnter your last name: ";
    cin >> lastName;

    cout << "\nEnter contact number: ";
    cin >> contactNumber;

    cout << "\nEnter department: ";
    cin >> department;

    cout << "\n\nAppointment Confirmation:\n";
    cout << "Select a time you are comfortable with:\n";
    cout << "1. 10:00 am - Dr. Dharmaraj Das\n";
    cout << "2. 11:00 am - Dr. Sudhir Pandey\n";
    cout << "3. 04:00 pm - Dr. Dheeraj Singh\n";
    cin >> choice;

    cout << "Thank you... Your appointment is fixed.\n";
}

void Hospital::displayInvestigationsMenu() {
    while (true) {
        cout << "\nInvestigations Sub Menu:\n";
        cout << "     1. Admission\n";
        cout << "     2. Discharge\n";
        cout << "     3. Back to the main menu\n";
        cout << "     Enter your choice: ";
        cin >> subChoice;

        switch (subChoice) {
            case 1:
                handleAdmissions();
                break;
            case 2:
                handleDischarge();
                break;
            case 3:
                return;
            default:
                cout << "\nWrong choice... Your request has been terminated!!!\n";
                break;
        }
    }
}

void Hospital::handleAdmissions() {
    cout << "\nPatient Admission's Process:\n";
    cout << "1. Accident case\n";
    cout << "2. General case\n";
    cout << "3. Back to the last menu\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        cout << "\nEnter admitter's first name: ";
        cin >> firstName;
        cout << "\nEnter admitter's last name: ";
        cin >> lastName;
        cout << "\nEnter any identification signs of the patient (type 'nil' if not): ";
        string identification;
        cin.ignore();
        getline(cin, identification);
        cout << "\nEnter admitter's contact number: ";
        cin >> contactNumber;
        cout << "\nThank you for your support.\n";
    } else if (choice == 2) {
        cout << "\nEnter Patient's first name: ";
        cin >> firstName;
        cout << "\nEnter Patient's last name: ";
        cin >> lastName;
        cout << "\nEnter admitter's first name: ";
        cin >> firstName;
        cout << "\nEnter admitter's last name: ";
        cin >> lastName;
        cout << "\nEnter admitter's contact number: ";
        cin >> contactNumber;
        cout << "\nRoom Preference (deluxe/general): ";
        string roomPreference;
        cin >> roomPreference;
        cout << "\nYou have successfully admitted the patient. Thank you.\n";
    } else if (choice == 3) {
        return;
    } else {
        cout << "\nWrong choice... Your request has been terminated!!!\n";
    }
}

void Hospital::handleDischarge() {
    cout << "\nPatient Discharge Process:\n";
    cout << "Enter Patient's first name: ";
    cin >> firstName;
    cout << "\nEnter Patient's last name: ";
    cin >> lastName;
    cout << "\nEnter Receiver's first name: ";
    string receiverFirstName, receiverLastName;
    cin >> receiverFirstName;
    cout << "\nEnter Receiver's last name: ";
    cin >> receiverLastName;
    cout << "\nThank you. We hope you liked our hospitality.\n";
}

void Hospital::displayFacilitiesMenu() {
    while (true) {
        cout << "\nFacilities Sub Menu:\n";
        cout << "     1. Diagnosis\n";
        cout << "     2. Fooding\n";
        cout << "     3. Medications\n";
        cout << "     4. Back to main menu\n";
        cout << "     Enter your choice: ";
        cin >> subChoice;

        switch (subChoice) {
            case 1:
                displayDiagnosisMenu();
                break;
            case 2:
                displayFoodMenu();
                break;
            case 3:
                displayMedicationMenu();
                break;
            case 4:
                return;
            default:
                cout << "\nWrong Choice... Your request has been terminated!!!\n";
                break;
        }
    }
}

void Hospital::displayDiagnosisMenu() {
    while (true) {
        cout << "\nDiagnosis Sub Menu:\n";
        cout << "     1. Diagnostic tools\n";
        cout << "     2. Back to the last menu\n";
        cout << "     Enter your choice: ";
        cin >> subChoice;

        if (subChoice == 1) {
            cout << "\nDiagnostic Tools:\n";
            cout << "  -> Blood Test facilities\n";
            cout << "  -> Biopsy\n";
            cout << "  -> CT Scan\n";
            cout << "  -> MRI Scan\n";
            cout << "  -> Mammography\n";
            cout << "  -> PET Scan\n";
        } else if (subChoice == 2) {
            return;
        } else {
            cout << "\nWrong choice... Your request has been terminated!!!\n";
        }
    }
}

void Hospital::displayFoodMenu() {
    while (true) {
        cout << "\nFood Menu:\n";
        cout << "     1. Patient's Menu\n";
        cout << "     2. General Menu\n";
        cout << "     3. Back to the last menu\n";
        cout << "     Enter your choice: ";
        cin >> subChoice;

        if (subChoice == 1) {
            cout << "\nPatient's Menu:\n";
            cout << "  Khichdi                  Rs.20\n";
            cout << "  Boil Egg (one piece)     Rs.03\n";
            cout << "  Tomato Soup              Rs.15\n";
            cout << "  Fruit Salad              Rs.20\n";
            cout << "  Energy drinks            Rs.10\n";
            cout << "  Plain rice with dal      Rs.25\n";
        } else if (subChoice == 2) {
            cout << "\nGeneral Menu:\n";
            cout << "  Idli                     Rs.30\n";
            cout << "  Tea                      Rs.10\n";
            cout << "  Black Coffee (Hot)       Rs.25\n";
            cout << "  Black Coffee (Cold)      Rs.25\n";
            cout << "  Cold Coffee with ice-cream Rs.35\n";
        } else if (subChoice == 3) {
            return;
        } else {
            cout << "\nWrong choice entered. Fooding portal request terminated!!!\n";
        }
    }
}

void Hospital::displayMedicationMenu() {
    cout << "\nMedication facilities:\n";
    cout << "  Monoclonal antibody therapy\n";
    cout << "  Adjunct therapy\n";
    cout << "  Neutron capture\n";
    cout << "  Music therapy\n";
    cout << "  Fast neutron therapy\n";
    cout << "  Real shockwave therapy\n";
}

int main() {
    cout << "Hospital Management System\n";
    Hospital hospital;
    hospital.displayMainMenu();
    return 0;
}
