import pandas as pd

def find_employees(employee: pd.DataFrame) -> pd.DataFrame:
    result = pd.merge(employee, employee, left_on='managerId', right_on='id', suffixes=('_employee', '_manager'))
 
    final = result[result['salary_employee'] > result['salary_manager']]
    
    really_final = final[['id_employee', 'name_employee', 'salary_employee', 'managerId_employee']]
    
    really_final.rename(columns={'id_employee': 'id', 'name_employee': 'name', 'salary_employee': 'salary', 'managerId_employee': 'managerId'}, inplace=True)
    
    print(really_final)


if __name__ == '__main__':
    employee = pd.DataFrame({
        'id': [1, 2, 3, 4],
        'name': ['Joe', 'Henry', 'Sam', 'Max'],
        'salary': [70000, 80000, 60000, 90000],
        'managerId': [3, 4, None, None]
    })

    find_employees(employee)