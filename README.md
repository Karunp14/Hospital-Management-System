# Hospital Management System

## Overview

The Hospital Management System is a console-based application written in C++. It provides a simple interface to manage various hospital-related operations such as patient management, investigations, and facilities. The system allows users to handle patient appointments, admissions, discharges, and view available facilities.

## Features

1. **Main Menu**
   - Patient Management
   - Investigations
   - Facilities
   - Exit

2. **Patient Management Sub Menu**
   - View Wards Availability
   - Schedule Appointments
   - Back to Main Menu

3. **Investigations Sub Menu**
   - Admission Process
   - Discharge Process
   - Back to Main Menu

4. **Facilities Sub Menu**
   - Diagnostic Tools
   - Food Menu
   - Medication Facilities
   - Back to Main Menu

## Usage

### Running the Application

1. Compile the code using a C++ compiler. For example, using `g++`:
   ```bash
   g++ -o project main.cpp
   ```

2. Run the compiled executable:
   ```bash
   ./project
   ```

3. Follow the on-screen instructions to navigate through the menus and use the system's features.

### Main Menu Options

- **Patient Management**
  - **Wards**: View the availability of wards in different sections (Children, Women, Men).
  - **Appointments**: Schedule an appointment with available doctors.
  - **Back to Main Menu**: Return to the main menu.

- **Investigations**
  - **Admission**: Handle patient admissions for both accident and general cases.
  - **Discharge**: Process patient discharges.
  - **Back to Main Menu**: Return to the main menu.

- **Facilities**
  - **Diagnosis**: View available diagnostic tools and facilities.
  - **Fooding**: View the food menu available for patients and general visitors.
  - **Medications**: View available medication facilities.
  - **Back to Main Menu**: Return to the main menu.

- **Exit**: Exit the application.

## Code Structure

The code is organized into a single `Hospital` class, which contains methods to handle different functionalities of the hospital management system. The main function initializes the system and displays the main menu.

### Hospital Class Methods

- `displayMainMenu()`: Displays the main menu and handles user choices.
- `displayPatientManagementMenu()`: Displays the patient management sub-menu and handles user choices.
- `displayWardsAvailability()`: Displays the availability of wards.
- `handleAppointments()`: Handles patient appointment scheduling.
- `displayInvestigationsMenu()`: Displays the investigations sub-menu and handles user choices.
- `handleAdmissions()`: Handles patient admissions.
- `handleDischarge()`: Handles patient discharges.
- `displayFacilitiesMenu()`: Displays the facilities sub-menu and handles user choices.
- `displayDiagnosisMenu()`: Displays the diagnosis sub-menu and handles user choices.
- `displayFoodMenu()`: Displays the food menu and handles user choices.
- `displayMedicationMenu()`: Displays the medication facilities.

