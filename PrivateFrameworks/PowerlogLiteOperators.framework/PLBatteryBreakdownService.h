/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLBatteryBreakdownService : PLService {
    NSSet *_deletedAppNames;
    NSDictionary *_givenNameToMappedName;
    NSDictionary *_gizmoDaemonToAppBundleID;
    NSDictionary *_gizmoIDSTopicToAppBundleID;
    NSDictionary *_installedBundleIDToDisplayName;
    NSDictionary *_installedPluginBundleIDToPluginEntry;
    NSSet *_intermediateRootNodes;
    NSDictionary *_nodeIDToNodeName;
    NSSet *_nonAppNames;
    NSDictionary *_rootNodeNameToRootNodeEnergyKey;
    NSSet *_rootNodeNames;
    BOOL _showGizmoQualifier;
    NSSet *_webAppNames;
}

@property (nonatomic, retain) NSSet *deletedAppNames;
@property (nonatomic, retain) NSDictionary *givenNameToMappedName;
@property (nonatomic, retain) NSDictionary *gizmoDaemonToAppBundleID;
@property (nonatomic, retain) NSDictionary *gizmoIDSTopicToAppBundleID;
@property (nonatomic, retain) NSDictionary *installedBundleIDToDisplayName;
@property (nonatomic, retain) NSDictionary *installedPluginBundleIDToPluginEntry;
@property (nonatomic, retain) NSSet *intermediateRootNodes;
@property (nonatomic, retain) NSDictionary *nodeIDToNodeName;
@property (nonatomic, retain) NSSet *nonAppNames;
@property (nonatomic, retain) NSDictionary *rootNodeNameToRootNodeEnergyKey;
@property (nonatomic, retain) NSSet *rootNodeNames;
@property BOOL showGizmoQualifier;
@property (nonatomic, retain) NSSet *webAppNames;

+ (id)appNameForBundleID:(id)arg1;
+ (BOOL)canSetQualifier:(int)arg1 forBundleID:(id)arg2;
+ (id)combineQualifiers:(id)arg1;
+ (id)installedPlugins;
+ (void)load;
+ (id)pluginEntryFromProxy:(id)arg1;
+ (id)rootNodeQualificationNameWithQualificationName:(id)arg1 withRootNodeName:(id)arg2;
+ (id)whereValidName;

- (void).cxx_destruct;
- (id)addForegroundAndBackgroundDurations:(id)arg1 withRange:(struct _PLTimeIntervalRange { double x1; double x2; })arg2;
- (id)adjustBackgroundTimesWithEnergyEntries:(id)arg1;
- (id)adjustForegroundTimesWithEnergyEntries:(id)arg1;
- (int)appTypeForName:(id)arg1;
- (id)applyDynamicNameTransformationsWithEnergyEntries:(id)arg1;
- (id)applyStaticNameTransformationsWithEnergyEntries:(id)arg1;
- (id)batteryBreakdownWithRange:(struct _PLTimeIntervalRange { double x1; double x2; })arg1 withEntryTimeInterval:(double)arg2 withQueryType:(int)arg3;
- (void)clearState;
- (id)combineDuplicatesWithEnergyEntries:(id)arg1;
- (double)computeTotalBackgroundDuration:(id)arg1;
- (double)computeTotalForegroundDuration:(id)arg1;
- (id)deletedAppNames;
- (id)determineDisplayNamesWithEnergyEntries:(id)arg1;
- (id)energyEntriesWithRange:(struct _PLTimeIntervalRange { double x1; double x2; })arg1 withEntryTimeInterval:(double)arg2;
- (id)filterEnergyEntriesBasedOnTime:(id)arg1 withQueryType:(int)arg2;
- (id)filterWithEnergyEntries:(id)arg1 withQueryType:(int)arg2;
- (id)givenNameToMappedName;
- (id)gizmoDaemonToAppBundleID;
- (id)gizmoIDSTopicToAppBundleID;
- (id)installedBundleIDToDisplayName;
- (id)installedPluginBundleIDToPluginEntry;
- (id)intermediateRootNodes;
- (id)mapDeletedAppsWithEnergyEntries:(id)arg1;
- (id)mapGizmoToAppsWithEnergyEntries:(id)arg1;
- (id)mapPluginsToAppsWithEnergyEntries:(id)arg1;
- (int)minimumRequiredQueryTypeForAppType:(int)arg1;
- (id)nodeIDToNodeName;
- (id)nonAppNames;
- (id)populateBLDKeysWithEnergyEntries:(id)arg1;
- (id)populateRootNodeEnergyKeysWithEnergyEntries:(id)arg1;
- (id)qualifiersWithEnergyEntry:(id)arg1;
- (id)reaccountBackupRestoreWithEnergyEntries:(id)arg1;
- (id)reaccountExchangeEntriesWithEnergyEntries:(id)arg1;
- (id)removeNodesNotToShowInInternalUI:(id)arg1 withQueryType:(int)arg2;
- (id)rootNodeNameToRootNodeEnergyKey;
- (id)rootNodeNames;
- (void)setDeletedAppNames:(id)arg1;
- (void)setGivenNameToMappedName:(id)arg1;
- (void)setGizmoDaemonToAppBundleID:(id)arg1;
- (void)setGizmoIDSTopicToAppBundleID:(id)arg1;
- (void)setInstalledBundleIDToDisplayName:(id)arg1;
- (void)setInstalledPluginBundleIDToPluginEntry:(id)arg1;
- (void)setIntermediateRootNodes:(id)arg1;
- (void)setNodeIDToNodeName:(id)arg1;
- (void)setNonAppNames:(id)arg1;
- (void)setRootNodeNameToRootNodeEnergyKey:(id)arg1;
- (void)setRootNodeNames:(id)arg1;
- (void)setShowGizmoQualifier:(BOOL)arg1;
- (void)setWebAppNames:(id)arg1;
- (BOOL)shouldShowBatteryBreakdownWithTotalSumEnergy:(double)arg1;
- (BOOL)shouldSuggestAutoBrightnessWithEnergyEntries:(id)arg1;
- (BOOL)shouldSuggestAutoLockWithEnergyEntries:(id)arg1;
- (BOOL)shouldSuggestReduceBrightnessWithEnergyEntries:(id)arg1;
- (BOOL)showGizmoQualifier;
- (BOOL)showRootNodesInInternal;
- (id)suggestionsWithEnergyEntries:(id)arg1;
- (double)totalDuration;
- (BOOL)wasGizmoConnectedInRange:(struct _PLTimeIntervalRange { double x1; double x2; })arg1;
- (id)webAppNames;

@end
