BUILD_DIR = build
CC = gcc

build_dir:
	if [ ! -d $(BUILD_DIR) ]; then mkdir $(BUILD_DIR); fi

1_task: ./1_cards/cards_counter.c build_dir
	gcc ./1_cards/cards_counter.c -o ./$(BUILD_DIR)/1_cards_counter && ./$(BUILD_DIR)/1_cards_counter

2_task: ./2_memory_and_pointers/main.c build_dir
	gcc ./2_memory_and_pointers/main.c -o ./$(BUILD_DIR)/2_memory_and_pointers && ./$(BUILD_DIR)/2_memory_and_pointers

clean:
	rm -r ./$(BUILD_DIR)/*	