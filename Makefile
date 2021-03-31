.PHONY: clean All

All:
	@echo "----------Building project:[ Cplusplus - Debug ]----------"
	@"$(MAKE)" -f  "Cplusplus.mk"
clean:
	@echo "----------Cleaning project:[ Cplusplus - Debug ]----------"
	@"$(MAKE)" -f  "Cplusplus.mk" clean
