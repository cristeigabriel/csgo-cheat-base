#pragma once
#include "recv_props.hpp"

class client_class;
class i_client_networkable;

typedef i_client_networkable* (*create_client_class_fn)(int ent_number, int serial_number);
typedef i_client_networkable* (*create_event_fn)();

enum class_ids {
	cai_basenpc = 0,
	cak47,
	cbaseanimating,
	cbaseanimatingoverlay,
	cbaseattributableitem,
	cbasebutton,
	cbasecombatcharacter,
	cbasecombatweapon,
	cbasecsgrenade,
	cbasecsgrenadeprojectile,
	cbasedoor,
	cbaseentity,
	cbaseflex,
	cbasegrenade,
	cbaseparticleentity,
	cbaseplayer,
	cbasepropdoor,
	cbaseteamobjectiveresource,
	cbasetempentity,
	cbasetoggle,
	cbasetrigger,
	cbaseviewmodel,
	cbasevphysicstrigger,
	cbaseweaponworldmodel,
	cbeam,
	cbeamspotlight,
	cbonefollower,
	cbrc4target,
	cbreachcharge,
	cbreachchargeprojectile,
	cbreakableprop,
	cbreakablesurface,
	cbumpmine,
	cbumpmineprojectile,
	cc4,
	ccascadelight,
	cchicken,
	ccolorcorrection,
	ccolorcorrectionvolume,
	ccsgamerulesproxy,
	ccsplayer,
	ccsplayerresource,
	ccsragdoll,
	ccsteam,
	cdangerzone,
	cdangerzonecontroller,
	cdeagle,
	cdecoygrenade,
	cdecoyprojectile,
	cdrone,
	cdronegun,
	cdynamiclight,
	cdynamicprop,
	ceconentity,
	ceconwearable,
	cembers,
	centitydissolve,
	centityflame,
	centityfreezing,
	centityparticletrail,
	cenvambientlight,
	cenvdetailcontroller,
	cenvdofcontroller,
	cenvgascanister,
	cenvparticlescript,
	cenvprojectedtexture,
	cenvquadraticbeam,
	cenvscreeneffect,
	cenvscreenoverlay,
	cenvtonemapcontroller,
	cenvwind,
	cfeplayerdecal,
	cfirecrackerblast,
	cfiresmoke,
	cfiretrail,
	cfish,
	cfists,
	cflashbang,
	cfogcontroller,
	cfootstepcontrol,
	cfunc_dust,
	cfunc_lod,
	cfuncareaportalwindow,
	cfuncbrush,
	cfuncconveyor,
	cfuncladder,
	cfuncmonitor,
	cfuncmovelinear,
	cfuncoccluder,
	cfuncreflectiveglass,
	cfuncrotating,
	cfuncsmokevolume,
	cfunctracktrain,
	cgamerulesproxy,
	cgrassburn,
	chandletest,
	chegrenade,
	chostage,
	chostagecarriableprop,
	cincendiarygrenade,
	cinferno,
	cinfoladderdismount,
	cinfomapregion,
	cinfooverlayaccessor,
	citem_healthshot,
	citemcash,
	citemdogtags,
	cknife,
	cknifegg,
	clightglow,
	cmaterialmodifycontrol,
	cmelee,
	cmolotovgrenade,
	cmolotovprojectile,
	cmoviedisplay,
	cparadropchopper,
	cparticlefire,
	cparticleperformancemonitor,
	cparticlesystem,
	cphysbox,
	cphysboxmultiplayer,
	cphysicsprop,
	cphysicspropmultiplayer,
	cphysmagnet,
	cphyspropammobox,
	cphysproplootcrate,
	cphyspropradarjammer,
	cphyspropweaponupgrade,
	cplantedc4,
	cplasma,
	cplayerping,
	cplayerresource,
	cpointcamera,
	cpointcommentarynode,
	cpointworldtext,
	cposecontroller,
	cpostprocesscontroller,
	cprecipitation,
	cprecipitationblocker,
	cpredictedviewmodel,
	cprop_hallucination,
	cpropcounter,
	cpropdoorrotating,
	cpropjeep,
	cpropvehicledriveable,
	cragdollmanager,
	cragdollprop,
	cragdollpropattached,
	cropekeyframe,
	cscar17,
	csceneentity,
	csensorgrenade,
	csensorgrenadeprojectile,
	cshadowcontrol,
	cslideshowdisplay,
	csmokegrenade,
	csmokegrenadeprojectile,
	csmokestack,
	csnowball,
	csnowballpile,
	csnowballprojectile,
	cspatialentity,
	cspotlightend,
	csprite,
	cspriteoriented,
	cspritetrail,
	cstatueprop,
	csteamjet,
	csun,
	csunlightshadowcontrol,
	csurvivalspawnchopper,
	ctablet,
	cteam,
	cteamplayroundbasedrulesproxy,
	ctearmorricochet,
	ctebasebeam,
	ctebeamentpoint,
	ctebeaments,
	ctebeamfollow,
	ctebeamlaser,
	ctebeampoints,
	ctebeamring,
	ctebeamringpoint,
	ctebeamspline,
	ctebloodsprite,
	ctebloodstream,
	ctebreakmodel,
	ctebspdecal,
	ctebubbles,
	ctebubbletrail,
	cteclientprojectile,
	ctedecal,
	ctedust,
	ctedynamiclight,
	cteeffectdispatch,
	cteenergysplash,
	cteexplosion,
	ctefirebullets,
	ctefizz,
	ctefootprintdecal,
	ctefoundryhelpers,
	ctegaussexplosion,
	cteglowsprite,
	cteimpact,
	ctekillplayerattachments,
	ctelargefunnel,
	ctemetalsparks,
	ctemuzzleflash,
	cteparticlesystem,
	ctephysicsprop,
	cteplantbomb,
	cteplayeranimevent,
	cteplayerdecal,
	cteprojecteddecal,
	cteradioicon,
	cteshattersurface,
	cteshowline,
	ctesla,
	ctesmoke,
	ctesparks,
	ctesprite,
	ctespritespray,
	ctest_proxytoggle_networkable,
	ctesttraceline,
	cteworlddecal,
	ctriggerplayermovement,
	ctriggersoundoperator,
	cvguiscreen,
	cvotecontroller,
	cwaterbullet,
	cwaterlodcontrol,
	cweaponaug,
	cweaponawp,
	cweaponbaseitem,
	cweaponbizon,
	cweaponcsbase,
	cweaponcsbasegun,
	cweaponcycler,
	cweaponelite,
	cweaponfamas,
	cweaponfiveseven,
	cweapong3sg1,
	cweapongalil,
	cweapongalilar,
	cweaponglock,
	cweaponhkp2000,
	cweaponm249,
	cweaponm3,
	cweaponm4a1,
	cweaponmac10,
	cweaponmag7,
	cweaponmp5navy,
	cweaponmp7,
	cweaponmp9,
	cweaponnegev,
	cweaponnova,
	cweaponp228,
	cweaponp250,
	cweaponp90,
	cweaponsawedoff,
	cweaponscar20,
	cweaponscout,
	cweaponsg550,
	cweaponsg552,
	cweaponsg556,
	cweaponshield,
	cweaponssg08,
	cweapontaser,
	cweapontec9,
	cweapontmp,
	cweaponump45,
	cweaponusp,
	cweaponxm1014,
	cworld,
	cworldvguitext,
	dusttrail,
	movieexplosion,
	particlesmokegrenade,
	rockettrail,
	smoketrail,
	sporeexplosion,
	sporetrail,
};

class c_client_class {
public:
	create_client_class_fn create_fn;
	create_event_fn create_event_fn;
	char* network_name;
	recv_table* recvtable_ptr;
	c_client_class* next_ptr;
	class_ids class_id;
};