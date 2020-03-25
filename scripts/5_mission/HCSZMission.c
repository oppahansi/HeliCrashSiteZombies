modded class MissionServer
{
    void MissionServer()
    {
        HCSZConfig hcszConfig;
        HCSZConfigManager.LoadConfig(hcszConfig);
        GetDayZGame().SetHCSZConfig(hcszConfig);
    }

    override void InvokeOnConnect(PlayerBase player, PlayerIdentity identity)
    {
        super.InvokeOnConnect(player, identity);

        auto configParams = new Param1<HCSZConfig>(GetDayZGame().GetHCSZConfig());
        GetGame().RPCSingleParam(player, HCSZRpc.HCSZCONFIG, configParams, true, identity);
    }
}