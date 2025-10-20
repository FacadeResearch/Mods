#include <IFacadeMod.h>
#include <ConsoleUtils.h>
#include <UiUtils.h>

class MelonMod : public IFacadeMod {
public:
	const char* GetName() const override {
		return "MelonMod";
	}

	const char* GetAuthor() const override {
		return "noia.site";
	}

	bool Load() override {
		ConsoleUtils::Log("Hello from MelonMod!");

		UiUtils::InsertPlayerName("Melon", "m", 0);

		ConsoleUtils::Log("Alright. Melon, that's it, you need to leave.");

		return true;
	}
};

extern "C" IFacadeMod* CreateMod() {
	return new MelonMod();
}

extern "C" void DestroyMod(IFacadeMod* instance) {
	delete instance;
}