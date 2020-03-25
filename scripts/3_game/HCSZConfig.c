class HCSZConfig
{
	int g_HCSZDisableLogMessages;
	
	int g_HCSZZombiesMin;
	int g_HCSZZombiesMax;
	int g_HCSZDisableUH1YZombies;	
	int g_HCSZDisableMi8Zombies;
	int g_HCSZZombieMinDistFromHeli;
	int g_HCSZZombieMaxDistFromHeli;
	
	int g_HCSZAnimalsMin;
	int g_HCSZAnimalsMax;
	int g_HCSZDisableUH1YAnimals;
	int g_HCSZDisableMi8Animals;
	int g_HCSZAnimalsMinDistFromHeli;
	int g_HCSZAnimalsMaxDistFromHeli;
}

class HCSZConfigManager
{
	private static const string configPath = "$profile:\\HCSZConfig.json";
	private static const string configRoot = "$profile:\\";
	
	static void LoadConfig(out HCSZConfig hcszConfig)
    {        
		if (!FileExist(configPath))
        {
            Print("[HCSZ] 'HCSZConfig.json' does not exist, creating default config..");
            CreateDefaultConfig(hcszConfig);
            SaveConfig(hcszConfig);
            return;
        }

		Print("[HCSZ] 'HCSZConfig.json' found, loading...");
        JsonFileLoader<HCSZConfig>.JsonLoadFile(configPath, hcszConfig);
    }

    protected static void SaveConfig(HCSZConfig hcszConfig)
    {
        if (!FileExist(configRoot))
        {
            Print("[HCSZ] '" + configRoot + "' does not exist, creating...");
            MakeDirectory(configRoot);
        }
		
        JsonFileLoader<HCSZConfig>.JsonSaveFile(configPath, hcszConfig);
    }
	
	protected static void CreateDefaultConfig(out HCSZConfig config)
	{		
		config = new HCSZConfig();
		
		config.g_HCSZDisableLogMessages = 0;
		
		config.g_HCSZZombiesMin = 5;
		config.g_HCSZZombiesMax = 12;
		config.g_HCSZDisableUH1YZombies = 0;
		config.g_HCSZDisableMi8Zombies = 0;
		config.g_HCSZZombieMinDistFromHeli = 5;
		config.g_HCSZZombieMaxDistFromHeli = 45;
		
		config.g_HCSZAnimalsMin = 3;
		config.g_HCSZAnimalsMax = 7;
		config.g_HCSZDisableUH1YAnimals = 0;
		config.g_HCSZDisableMi8Animals = 0;
		config.g_HCSZAnimalsMinDistFromHeli = 45;
		config.g_HCSZAnimalsMaxDistFromHeli = 90;
		
        if (!FileExist(configRoot))
        {
            Print("[HCSZ] '" + configRoot + "' does not exist, creating...");
            MakeDirectory(configRoot);
        }
        JsonFileLoader<HCSZConfig>.JsonSaveFile(configPath, config);
	}
}