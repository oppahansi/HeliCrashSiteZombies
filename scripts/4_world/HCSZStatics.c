static void SpawnInfected(vector pos)
{
	ZombieBase.Cast(GetGame().CreateObject(ZombieTypes().GetRandomElement(), pos, false, true ));
}

static void SpawnAnimal(vector pos)
{
	AnimalBase.Cast(GetGame().CreateObject(AnimalTypes().GetRandomElement(), pos, false, true ));
}

static vector GetRandomSpawnPosition(vector centerpoint, int minDistFromHeli, int maxDistFromHeli) {
	float height = Math.RandomFloat(0.0, 2.0) * Math.PI;
	float distance = Math.RandomFloat(minDistFromHeli, maxDistFromHeli);
	vector randomSpawnPosition = centerpoint + Vector(Math.Cos(height) * distance, 0.0, Math.Sin(height) * distance);
	
	randomSpawnPosition[1] = GetGame().SurfaceY(randomSpawnPosition[0], randomSpawnPosition[2]) + 0.5;
	
	return randomSpawnPosition;
}

static TStringArray ZombieTypes()
{
	return	{
		// Military
		"ZmbM_PatrolNormal_Autumn", "ZmbM_PatrolNormal_Flat", "ZmbM_PatrolNormal_PautRev", "ZmbM_PatrolNormal_Summer",
		"ZmbM_SoldierNormal", "ZmbM_usSoldier_normal_Desert", "ZmbM_usSoldier_normal_Woodland",
		// Firefighter 
		"ZmbM_FirefighterNormal",
		// Medic
		"ZmbF_DoctorSkinny", "ZmbF_NurseFat", "ZmbF_ParamedicNormal_Blue", "ZmbF_ParamedicNormal_Green", "ZmbF_ParamedicNormal_Red",
		"ZmbF_PatientOld", "ZmbM_DoctorFat", "ZmbM_ParamedicNormal_Black", "ZmbM_ParamedicNormal_Blue", "ZmbM_ParamedicNormal_Green",
		"ZmbM_ParamedicNormal_Red", "ZmbM_PatientSkinny",
		// Police
		"ZmbF_PoliceWomanNormal", "ZmbM_PolicemanFat", "ZmbM_PolicemanSpecForce",
		"ZmbM_PrisonerSkinny"
	};
}

static TStringArray AnimalTypes()
{
	return { "Animal_CanisLupus_Grey", "Animal_CanisLupus_White" };
}