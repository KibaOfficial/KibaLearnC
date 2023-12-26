.PHONY: all clean

SRC_DIR = src
OUT_DIR = out
BUILD_DIR = build

SOURCE_FILES = $(wildcard $(SRC_DIR)/*.c)
OBJECT_FILES = $(patsubst $(SRC_DIR)/%.c, $(BUILD_DIR)/%.o, $(SOURCE_FILES))
EXECUTABLES = $(patsubst $(SRC_DIR)/%.c, $(OUT_DIR)/%, $(SOURCE_FILES))

all: $(EXECUTABLES)

$(OUT_DIR)/%: $(BUILD_DIR)/%.o | $(OUT_DIR)
	gcc -o $@ $<

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c | $(BUILD_DIR)
	gcc -c -o $@ $<

$(OUT_DIR) $(BUILD_DIR):
	mkdir -p $@

clean:
	del $(OUT_DIR) $(BUILD_DIR)

# Additional rule to keep object files
keep_objects: $(OBJECT_FILES)

$(OBJECT_FILES): | $(BUILD_DIR)

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	gcc -c -o $@ $<
