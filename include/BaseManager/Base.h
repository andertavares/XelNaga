#pragma once
#include <BWAPI.h>
#include <BWTA.h>
#include <set>
class Base
{
public:
	Base(BWTA::BaseLocation* location);
	BWTA::BaseLocation* getBaseLocation() const;
	BWAPI::Unit getResourceDepot() const;
	BWAPI::Unit getRefinery() const;
	BWAPI::Unitset getMinerals() const;
	BWAPI::Unitset getGeysers() const;
	bool isActive() const;
	bool isActiveGas() const;
	bool isBeingConstructed() const;

	bool hasGas() const;

	void setResourceDepot(BWAPI::Unit unit);
	void setRefinery(BWAPI::Unit unit);
	void setActive(bool active);
	void setActiveGas(bool active);

private:
	BWTA::BaseLocation* baseLocation;
	BWAPI::Unit resourceDepot;
	BWAPI::Unit refinery;
	BWAPI::Unitset minerals;
	bool active;
	bool activeGas;
	bool beingConstructed;
};