modded class PlayerBase
{
	override void OnRPC(PlayerIdentity sender, int rpc_type, ParamsReadContext ctx)
    {
        super.OnRPC(sender, rpc_type, ctx);

        switch (rpc_type)
        {
            case HCSZRpc.HCSZCONFIG:
            {
                Param1<HCSZConfig> configParams;
                if (!ctx.Read(configParams)) return;

                GetDayZGame().SetHCSZConfig(configParams.param1);
                break;
            }
        }
    }
}