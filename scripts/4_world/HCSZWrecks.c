modded class Wreck_UH1Y
{
	override void EEInit()
    {
		super.EEInit();
		
		HCSZConfig hcszConfig = GetDayZGame().GetHCSZConfig();	
		if (hcszConfig == NULL) return;
		
		vector spawnPosition = this.GetPosition();
		
		if (hcszConfig.g_HCSZDisableLogMessages != 1) Print("[HCSZ] Wreck_UH1Y - heli crash spawned at " + spawnPosition);
		// Zombies
		if (hcszConfig.g_HCSZDisableUH1YZombies != 1)
		{
			int zombiesAmount = Math.RandomInt(hcszConfig.g_HCSZZombiesMin, hcszConfig.g_HCSZZombiesMax);
		
			for ( int i = 0; i <= zombiesAmount; i++ )
				SpawnInfected(GetRandomSpawnPosition(spawnPosition, hcszConfig.g_HCSZZombieMinDistFromHeli, hcszConfig.g_HCSZZombieMaxDistFromHeli));
			
	        if (hcszConfig.g_HCSZDisableLogMessages != 1) Print("[HCSZ] " + zombiesAmount + " Wreck_UH1Y zombies spawned.");
		}
		
		// Animals
		if (hcszConfig.g_HCSZDisableUH1YAnimals != 1)
		{
			int animalsAmount = Math.RandomInt(hcszConfig.g_HCSZAnimalsMin, hcszConfig.g_HCSZAnimalsMax);
		
			for ( int j = 0; j <= animalsAmount; j++ )
				SpawnAnimal(GetRandomSpawnPosition(spawnPosition, hcszConfig.g_HCSZAnimalsMinDistFromHeli, hcszConfig.g_HCSZAnimalsMaxDistFromHeli));
			
	        if (hcszConfig.g_HCSZDisableLogMessages != 1) Print("[HCSZ] " + animalsAmount + " Wreck_UH1Y animals spawned.");
		}
		
    }
}

class Wreck_Mi8 extends House
{
}

modded class Wreck_Mi8
{
    override void EEInit()
    {
		super.EEInit();
		
		HCSZConfig hcszConfig = GetDayZGame().GetHCSZConfig();
		if (hcszConfig == NULL) return;

		vector spawnPosition = this.GetPosition();
				
		if (hcszConfig.g_HCSZDisableLogMessages != 1) Print("[HCSZ] Wreck_Mi8 - heli crash spawned at " + spawnPosition);
		// Zombies
		if (hcszConfig.g_HCSZDisableMi8Zombies != 1)
		{
			int zombiesAmount = Math.RandomInt(hcszConfig.g_HCSZZombiesMin, hcszConfig.g_HCSZZombiesMax);
		
			for ( int i = 0; i <= zombiesAmount; i++ )
				SpawnInfected(GetRandomSpawnPosition(spawnPosition, hcszConfig.g_HCSZZombieMinDistFromHeli, hcszConfig.g_HCSZZombieMaxDistFromHeli));
			
	        if (hcszConfig.g_HCSZDisableLogMessages != 1) Print("[HCSZ] " + zombiesAmount + " Wreck_Mi8 zombies spawned.");
		}
		
		// Animals
		if (hcszConfig.g_HCSZDisableMi8Animals != 1)
		{
			int animalsAmount = Math.RandomInt(hcszConfig.g_HCSZAnimalsMin, hcszConfig.g_HCSZAnimalsMax);
		
			for ( int j = 0; j <= animalsAmount; j++ )
				SpawnAnimal(GetRandomSpawnPosition(spawnPosition, hcszConfig.g_HCSZAnimalsMinDistFromHeli, hcszConfig.g_HCSZAnimalsMaxDistFromHeli));
			
	        if (hcszConfig.g_HCSZDisableLogMessages != 1) Print("[HCSZ] " + animalsAmount + " Wreck_Mi8 animals spawned.");
		}
    }
}