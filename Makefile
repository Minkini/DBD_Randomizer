##
## EPITECH PROJECT, 2025
## theia
## File description:
## Makefile SDL2 ready
##

TARGET := DBD_Tools

# CSFML
LIBS := -lcsfml-system -lcsfml-window -lcsfml-graphics -lcsfml-audio -lcsfml-network

# Include directories
INCLUDE := $(shell find . -type f -name '*.h' \
					-printf '%h\n' | \
					sort -u | \
					awk '{print "-iquote",$$0}')

# Compilation Flags
CFLAGS += -Wall -Wextra	\
	-Wnull-dereference -Wduplicated-cond -Wlogical-op	\
	-Wshadow -Wfloat-equal -Wcast-align -Wunreachable-code	\
	-Wjump-misses-init -Wmissing-declarations -Wmissing-prototypes	\
	-Wundef -g

SRC	= \
	src/main.c	\
	\
	const/surv_perk_list.c	\
	\
	src/app/init_app.c	\
	src/app/run_app.c	\
	src/app/stop_app.c	\
	\
	src/render/window/create_window.c	\
	\
	src/render/content/sprite/create_sprite.c	\
	\
	src/render/content/tools/init_perks.c	\
	src/render/content/tools/load_content.c	\
	\
	src/render/draw/main_menu.c	\
	\
	src/scene/scene.c	\
	\
	src/event/handle_event.c	\
	src/event/scene_events/main_menu.c	\
	\
	src/tools/randomizer/library/add_in_linked_list.c	\
	src/tools/randomizer/library/random_picker.c	\
	src/tools/randomizer/library/add_perks_by_characters.c	\
	src/tools/randomizer/library/add_all_sided_perks.c	\
	src/tools/randomizer/library/clear_list.c	\
	src/tools/randomizer/library/create_first_list_node.c	\
	src/tools/randomizer/library/remove_in_linked_list.c	\
	src/tools/randomizer/library/remove_surv_perks_by_characters.c	\

SRC := $(filter-out $(TEST_MAIN), $(SRC))
OBJ	:= $(patsubst src/%.c, build/obj/%.o, $(SRC))
DIRS := $(sort $(dir $(OBJ)))

BUILT_OBJ =

# -------------------- Rules --------------------

all: $(TARGET)
	@printf "\e[38;5;029m✅ Everything is up to date !\e[0m\n"

# Compile source files to object files
build/obj/%.o: src/%.c | $(DIRS)
	@printf "\
	\e[38;5;008m[-Werror -Wall -Wextra ... -iquote ...]\e[0m \
	\e[38;5;117m$(notdir $<)\e[0m\
	\e[38;5;183m -> \e[0m\
	\e[38;5;220m$@\e[0m\n"
	@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@
	$(eval BUILT_OBJ += $@)

# Create necessary directories
$(DIRS):
	@mkdir -p $@

# Link object files to create executable
$(TARGET): $(OBJ)
	@printf "\e[38;5;029m✅ Successfully compiled target object !\e[0m\n"
	@printf "\e[38;5;029m🔄 Compiling target !\e[0m\n"
	@printf "\e[38;5;029m📜 Name: \e[38;5;220m$(TARGET)\e[0m\n"
	@mkdir -p build/bin/
	@gcc -o build/bin/$(TARGET) $(OBJ) $(LIBS)
	@cp build/bin/$(TARGET) .

# Clean up generated objects
clean:
	@printf "\e[38;5;124m🔥 Remove build/obj directory !\e[0m\n"
	@rm -rf build/obj

# Clean up objects and binary
fclean: clean
	@printf "\e[38;5;124m🔥 Remove build directory !\e[0m\n"
	@rm -rf build
	@printf "\e[38;5;124m🔥 Remove binary !\e[0m\n"
	@rm -f $(TARGET)

# Recompile all files
re: fclean all

# Debug targets
debug_message:
	@printf "\e[38;5;220m🔥 Debug mode !\e[0m\n"

debug: debug_message
debug: CFLAGS += -g
debug: all

redebug: debug_message
redebug: CFLAGS += -g
redebug: re

.PHONY: all re fclean clean debug redebug
