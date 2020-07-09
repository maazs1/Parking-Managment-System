.PHONY: clean All

All:
	@echo "----------Building project:[ Parking_Fee - Debug ]----------"
	@cd "Parking_Fee" && "$(MAKE)" -f  "Parking_Fee.mk"
clean:
	@echo "----------Cleaning project:[ Parking_Fee - Debug ]----------"
	@cd "Parking_Fee" && "$(MAKE)" -f  "Parking_Fee.mk" clean
