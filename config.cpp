class CfgPatches
{
	class HeliCrashSiteZombies
	{
		requiredAddons[]=
		{
			"DZ_Data"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class CfgMods
{
	class HeliCrashSiteZombies_Scripts
	{
		dir="HeliCrashSiteZombies";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="Heli Crash Site Zombies";
		credits="oppahansi";
		author="oppahansi";
		authorID="";
		version="1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"Game",
			"World",
			"Mission"
		};
		class defs
		{
			class gameScriptModule
			{
				files[]=
				{
					"HeliCrashSiteZombies/scripts/3_game"
				};
			};
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"HeliCrashSiteZombies/scripts/4_world"
				};
			};
			class missionScriptModule
			{
				value="";
				files[]=
				{
					"HeliCrashSiteZombies/scripts/5_mission"
				};
			};
		};
	};
};
