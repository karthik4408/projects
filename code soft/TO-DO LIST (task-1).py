import json

class Task:
    def __init__(self, title, description):
        self.title = title
        self.description = description
        self.completed = False

def add_task(tasks):
    title = input("Enter task title: ")
    description = input("Enter task description: ")
    tasks.append(Task(title, description))

def view_tasks(tasks):
    for i, task in enumerate(tasks):
        status = "Completed" if task.completed else "Pending"
        print(f"{i + 1}. {task.title} - {status}\n   {task.description}")

def update_task(tasks):
    view_tasks(tasks)
    task_num = int(input("Enter the task number to update: ")) - 1
    tasks[task_num].completed = not tasks[task_num].completed

def delete_task(tasks):
    view_tasks(tasks)
    task_num = int(input("Enter the task number to delete: ")) - 1
    tasks.pop(task_num)

def save_tasks(tasks, filename="tasks.json"):
    with open(filename, "w") as f:
        json.dump([task.__dict__ for task in tasks], f)

def load_tasks(filename="tasks.json"):
    try:
        with open(filename, "r") as f:
            return [Task(**task) for task in json.load(f)]
    except FileNotFoundError:
        return []

def main():
    tasks = load_tasks()
    while True:
        print("\n1. Add Task\n2. View Tasks\n3. Update Task\n4. Delete Task\n5. Save & Exit")
        choice = input("Choose an option: ")
        if choice == "1":
            add_task(tasks)
        elif choice == "2":
            view_tasks(tasks)
        elif choice == "3":
            update_task(tasks)
        elif choice == "4":
            delete_task(tasks)
        elif choice == "5":
            save_tasks(tasks)
            break

if __name__ == "__main__":
    main()
