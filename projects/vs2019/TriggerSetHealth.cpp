#include "extdll.h"
#include "util.h"
#include "cbase.h"

class CTriggerSetHealth : public CBaseEntity
{
public:
	void Use(CBaseEntity* pActivator, CBaseEntity* pCaller, USE_TYPE useType, float value) override;

};

LINK_ENTITY_TO_CLASS(trigger_sethealth, CTriggerSetHealth);

void CTriggerSetHealth::Use(CBaseEntity* pActivator, CBaseEntity* pCaller, USE_TYPE useType, float value)
{
	if (pActivator->IsPlayer())
	{
		pActivator->pev->health = 100;
	}
}
