[200~class TodoList:
	    def __init__(self):
		            self.tasks = []

			        def add_task(self, task):
					        self.tasks.append({"task": task, "completed": False})

						    def view_tasks(self):
							            for index, task in enumerate(self.tasks, start=1):
									                print(f"{index}. [{'x' if task['completed'] else ' '}] {task['task']}")

											    def mark_completed(self, index):
												            if 1 <= index <= len(self.tasks):
														                self.tasks[index - 1]["completed"] = True
																        else:
																	                 print("Invalid task index.")

																		         def remove_task(self, index):
																				         if 1 <= index <= len(self.tasks):
																						             del self.tasks[index - 1]
																							             else:
																								                print("Invalid task index.")


																									   def main():
																										       todo_list = TodoList()

																										           while True:
																											           print("\n1. Add Task\n2. View Tasks\n3. Mark Task as Completed\n4. Remove Task\n5. Quit")
																												           choice = input("Enter your choice: ")

																													           if choice == "1":
																														               task = input("Enter task: ")
																															                   todo_list.add_task(task)
	        elif choice == "2":
		            todo_list.view_tasks()
	        elif choice == "3":
		            index = int(input("Enter task index to mark as completed: "))
			                todo_list.mark_completed(index)
	        elif choice == "4":
		            index = int(input("Enter task index to remove: "))
			                todo_list.remove_task(index)
	        elif choice == "5":
		            break
			                                                                                                                                                             print("Invalid task index.")

                                                                                                                                                         def remove_task(self, index):
                                                                                                                                                                         if 1 <= index <= len(self.tasks):
                                                                                                                                                                                             del self.tasks[index - 1]
                                                                                                                                                                                                     else:
                                                                                                                                                                                                                print("Invalid task index.")

                                                                                                                                                                                                                                                                                                                                                                                                           def main():
                                                                                                                                                                                                                       todo_list = TodoList()

                                                                                                                                                                                                                           while True:
                                                                                                                                                                                                                                   print("\n1. Add Task\n2. View Tasks\n3. Mark Task as Completed\n4. Remove Task\n5. Quit")
                                                                                                                                                                                                                                           choice = input("Enter your choice: ")

                                                                                                                                                                                                                                                   if choice == "1":
                                                                                                                                                                                                                                                               task = input("Enter task: ")
                                                                                                                                                                                                                                                                           todo_list.add_task(task)
                elif choice == "2":
                            todo_list.view_tasks()
                elif choice == "3":
                            index = int(input("Enter task index to mark as completed: "))
                                        todo_list.mark_completed(index)
                elif choice == "4":
                            index = int(input("Enter task index to remove: "))
                                        todo_list.remove_task(index)
                elif choice == "5":
                            break
                            se:
                                                print("Invalid choice. Please try again.")


                                                if __name__ == "__main__":
                                                    main()

py.c[+] [unix] (05:29 01/01/1970)                                                                                                                                                    45,8-29 Bot
-- INSERT --
se:
				                print("Invalid choice. Please try again.")


						if __name__ == "__main__":
						    main()

