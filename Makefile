TARGET = HungryDog
BUILD_DIR = build
CC = gcc

build_dir:
	if [ ! -d $(BUILD_DIR) ]; then mkdir $(BUILD_DIR); fi

1_task: ./1_assessing_the_importance_of_cards/main.c build_dir
	gcc ./1_assessing_the_importance_of_cards/main.c -o ./$(BUILD_DIR)/1_task && ./$(BUILD_DIR)/1_task

clean:
	rm -r ./$(BUILD_DIR)/*	