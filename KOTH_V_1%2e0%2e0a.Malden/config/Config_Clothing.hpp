/*
*   ARRAY FORMAT:
*   0: STRING (Classname)
*   1: STRING (Display Name, leave as "" for default)
*   2: SCALAR (Price)
*   3: STRING (Conditions) - Must return boolean :
*       String can contain any amount of conditions, as long as the
*       entire string returns as a boolean. This allows you to check any levels, licenses ect,
*       in any combination. For example:
*         "call life_coplevel && license_civ_someLicense"
*       This will also let you call any othe function.
*
*  Clothing classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Equipment
*  Backpacks/remaining classnames can be found here (TIP: Search page for "pack"): https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EMPTY
*
*/
class Clothing {
  class bruce {
    title = "STR_Shops_C_Bruce";
    conditions= "";
    side = "civ";
    uniformsp[] = {
      { "None", "Remove Uniform", 0, "" },
      { "U_O_CombatUniform_oucamo", "OU Camo Combat", 1000, "" },
    }
  }
}
