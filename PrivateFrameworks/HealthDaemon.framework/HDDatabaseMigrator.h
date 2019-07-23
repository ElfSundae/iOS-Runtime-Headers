/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDatabaseMigrator : NSObject {
    HDSQLiteDatabase * _database;
    NSString * _databaseName;
    bool  _hasPerformedMigration;
    NSMutableArray * _migrationSteps;
    HDProfile * _profile;
    HDDatabaseSchemaManager * _schemaManager;
}

@property (nonatomic, readonly) HDSQLiteDatabase *database;
@property (nonatomic, readonly, copy) NSString *databaseName;
@property (nonatomic, readonly) HDProfile *profile;
@property (nonatomic, readonly) HDDatabaseSchemaManager *schemaManager;

- (void).cxx_destruct;
- (long long)_addAnchorForCompanionWorkoutCreditWithError:(id*)arg1;
- (long long)_addArbitraryMetadataSupportForWorkoutEventsWithError:(out id*)arg1;
- (long long)_addAuthorizationAnchorColumnWithError:(id*)arg1;
- (long long)_addAuthorizationForeignKeysWithError:(id*)arg1;
- (long long)_addBackDeepBreathingColumnsToActivityCacheWithError:(id*)arg1;
- (long long)_addBasalEnergyColumnToWorkoutsWithError:(id*)arg1;
- (long long)_addBaselineEpochColumnToCloudSyncStoreEntityTableWithError:(out id*)arg1;
- (long long)_addBinarySamplesTableWithError:(id*)arg1;
- (long long)_addCCDTableWithError:(id*)arg1;
- (long long)_addDataProvenanceTableAndMigrateWithError:(id*)arg1;
- (long long)_addDataSeriesTableWithError:(id*)arg1;
- (long long)_addDataValueColumnToMetadataValuesTable:(id*)arg1;
- (long long)_addDeviceColumnsToFitnessFriendWorkoutsWithError:(out id*)arg1;
- (long long)_addDeviceEnabledColumnToKnownDevicesWithError:(id*)arg1;
- (long long)_addDeviceIdentifierAndExpectedAnchorsColumns:(id*)arg1;
- (long long)_addDurationColumnToWorkoutEventsTable:(id*)arg1;
- (long long)_addEnergyBurnedGoalDateAndAnchorsToActivityCacheTableWithError:(id*)arg1;
- (long long)_addFieldsToLocationSeriesWithError:(id*)arg1;
- (long long)_addFitnessFriendsTableWithError:(id*)arg1;
- (long long)_addFitnessFriendsWorkoutAndAchievementTableWithError:(id*)arg1;
- (long long)_addFlightsClimbedColumnsToActivityCacheWithError:(id*)arg1;
- (long long)_addFlightsClimbedToWorkoutsWithError:(id*)arg1;
- (long long)_addInsertionEraColumnToDataSeriesWithError:(id*)arg1;
- (long long)_addIsIndoorWorkoutColumnToFitnessFriendsWorkoutsTableWithError:(id*)arg1;
- (long long)_addIsWatchWorkoutColumnToFitnessFriendsWorkoutsTableWithError:(id*)arg1;
- (long long)_addMaxObjectPersistentIDToKeyValueStoreWithError:(id*)arg1;
- (long long)_addMenstruationSamplesTable:(id*)arg1;
- (long long)_addModificationEpochColumnToAuthorizationsTableWithError:(out id*)arg1;
- (long long)_addNotNullConstraintToProvenanceColumnWithError:(id*)arg1;
- (long long)_addObjectAuthorizationTableWithError:(id*)arg1;
- (long long)_addOriginalDataColumnsToQuantitySamplesWithError:(id*)arg1;
- (long long)_addProvenanceColumnToCorrelationsWithError:(id*)arg1;
- (long long)_addPushCountColumnToFitnessFriendsTableWithError:(id*)arg1;
- (long long)_addPushCountColumnsToActivityCacheWithError:(id*)arg1;
- (long long)_addSampleAnchorIndexWithError:(id*)arg1;
- (long long)_addSampleIndicesWithError:(id*)arg1;
- (long long)_addSequenceColumnToActivityCacheWithError:(out id*)arg1;
- (long long)_addSourceBundleIdentifierColumnToNanoPairingTableWithError:(id*)arg1;
- (long long)_addSourceSyncAnchorColumnWithError:(out id*)arg1;
- (long long)_addSwimmingStrokeCountToWorkoutsAndEventsWithError:(id*)arg1;
- (long long)_addTimeZoneOffsetColumnToFitnessFriendsTableWithError:(id*)arg1;
- (long long)_addUniqueIndexForFitnessFriendsActivitySnapshotWithError:(id*)arg1;
- (long long)_addValueTypeColumnToMetadataValuesWithError:(id*)arg1;
- (long long)_addWalkingDistanceColumnToActivityCacheWithError:(id*)arg1;
- (long long)_addWheelchairUseColumnToActivityCacheWithError:(id*)arg1;
- (long long)_addWheelchairUseColumnToFitnessFriendsTableWithError:(id*)arg1;
- (long long)_addWorkoutSourceAndBundleIDToFitnessFriendsWorkoutsTableWithError:(id*)arg1;
- (long long)_changeWorkoutActivityTypeOther:(id*)arg1;
- (long long)_cinar_addObjectAuthorizationAndActivityCacheIndicesWithError:(id*)arg1;
- (long long)_cinar_addSourceAndDeviceIndicesWithError:(id*)arg1;
- (long long)_cinar_addSyncPrimaryColumnToSourcesWithError:(id*)arg1;
- (long long)_cinar_convertLocalDevicePlaceholderSourcesWithError:(id*)arg1;
- (long long)_cinar_removeDetailsFromDeletedSourcesWithError:(id*)arg1;
- (long long)_cleanupOrphanedRowsWithError:(id*)arg1;
- (long long)_clearMenstrualFlowAndSexualActivitySamples:(id*)arg1;
- (long long)_clearSamplesWithoutSourcesWithError:(id*)arg1;
- (long long)_clearSourceOrderingWithError:(id*)arg1;
- (long long)_corry_fixHFDProtectionClassWithError:(id*)arg1;
- (long long)_corry_rewriteHFDStep1WithError:(id*)arg1;
- (long long)_corry_rewriteHFDStep2WithError:(id*)arg1;
- (id)_corry_temporaryHFDURL;
- (long long)_createAchievementsAndActivityCachesTablesWithError:(id*)arg1;
- (long long)_createActivityCachesTableWithError:(id*)arg1;
- (long long)_createCloudSyncStoreEntityTable:(out id*)arg1;
- (long long)_createCorrelationsObjectIdIndexWithError:(id*)arg1;
- (long long)_createExternalSyncIdentifierEntityTable:(out id*)arg1;
- (long long)_createMetadataValuesObjectIdIndexWithError:(id*)arg1;
- (long long)_createNanoPairingTableWithError:(id*)arg1;
- (long long)_createPendingAssociationTable:(id*)arg1;
- (long long)_createProtectedKeyValueTableAndMigrateCharacteristicsAndDefaultsWithError:(id*)arg1;
- (long long)_createSyncAnchorsTableWithError:(id*)arg1;
- (long long)_createSyncStoreTableWithError:(id*)arg1;
- (long long)_createUnprotectedKeyValueTableWithError:(id*)arg1;
- (bool)_databaseSchemas:(id)arg1 containsTable:(id)arg2;
- (bool)_deleteDataEntitySubclassTables:(id)arg1 intermediateTables:(id)arg2 error:(out id*)arg3;
- (long long)_dropDataSessionActivitiesTableWithError:(id*)arg1;
- (long long)_dropMenstruationTable:(id*)arg1;
- (long long)_emet_addPatientHashtoClinicalAccountsTable:(out id*)arg1;
- (long long)_emet_addSchemaColumnToSyncAnchorTableWithError:(out id*)arg1;
- (long long)_emet_createEmetClinicalHealthRecordsTablesWithError:(out id*)arg1;
- (long long)_emet_dropSubscriptionDataAnchorsTableWithError:(out id*)arg1;
- (long long)_emet_migrateWorkoutEventMetadataToProtobufWithError:(out id*)arg1;
- (long long)_emet_recreateClinicalHealthRecordsTablesWithError:(out id*)arg1;
- (long long)_emet_removeTigrisClinicalHealthRecordsTablesWithError:(out id*)arg1;
- (long long)_emet_updateDiagnosticTestResultSamplesTable:(out id*)arg1;
- (long long)_emet_updateFHIRIdentifierNullabilityAddQuantityDispensedWithError:(out id*)arg1;
- (long long)_emet_updateFHIRResourcesAndLastSeenTable:(out id*)arg1;
- (long long)_emet_updateMedicationSamplesTablesWithError:(out id*)arg1;
- (long long)_emet_updateProcedureTableWithError:(out id*)arg1;
- (long long)_erie_removeBadTurkeyTrotAchievementsWithError:(id*)arg1;
- (long long)_fixDanglingSourcesAndProvenancesWithError:(id*)arg1;
- (long long)_fixDataProvenanceProductTypeAgainWithError:(id*)arg1;
- (long long)_fixDataProvenanceProductTypeWithError:(id*)arg1;
- (long long)_fixObjectsProvenanceForeignKeyWithError:(id*)arg1;
- (long long)_fixProvenancesWithZeroSourceOrDeviceWithError:(id*)arg1;
- (long long)_fixSyncProvenanceForPostOkemoZurs:(id*)arg1;
- (long long)_fixupMigratedProtectedSchemaWithError:(id*)arg1;
- (long long)_initializeDatabaseIdentifiersWithProfile:(id)arg1 error:(id*)arg2;
- (bool)_insertDeletedObjectTombstoneWithUUID:(id)arg1 provenanceIdentifier:(id)arg2 deletionDate:(id)arg3 insertedRowID:(out id*)arg4 error:(out id*)arg5;
- (bool)_insertDeletedSampleTombstoneWithUUID:(id)arg1 provenanceIdentifier:(id)arg2 dataTypeCode:(id)arg3 deletionDate:(id)arg4 error:(out id*)arg5;
- (id)_lastReceivedNatalieDatum:(id*)arg1;
- (id)_lastReceivedPedometerDatum:(id*)arg1;
- (long long)_migrateAchievementDataStoreSessionCountsWithError:(id*)arg1;
- (long long)_migrateAchievementExtraDataToWorkoutActivityTypeWithError:(id*)arg1;
- (long long)_migrateAchievementKeyValueCategoryToLocalWithError:(id*)arg1;
- (long long)_migrateAchievementTypeToDefinitionIdentifierWithError:(id*)arg1;
- (long long)_migrateAddBasalCalorieKeyValueWithError:(id*)arg1;
- (long long)_migrateAuthorizationsForSync:(id*)arg1;
- (long long)_migrateCalorimetryUserDefaults:(id*)arg1;
- (long long)_migrateCoreMotionFromUserDefaultsToKeyValueWithError:(id*)arg1;
- (long long)_migrateDataProvenanceValueAndRenameSyncStoreColumnWithError:(id*)arg1;
- (long long)_migrateDataTypeSourceOrderForSyncAndForeignKeys:(id*)arg1;
- (long long)_migrateDeepBreathingColumnInActivityCacheTableWithError:(id*)arg1;
- (long long)_migrateEndDateKeyBackToLastSessionAnchorWithError:(id*)arg1;
- (long long)_migrateKeyValueColumnsFromStringToText:(bool)arg1 error:(id*)arg2;
- (long long)_migrateLastSessionAnchorKeyToEndDateWithProfile:(id)arg1 error:(id*)arg2;
- (long long)_migrateNanoPairingSchema:(id*)arg1;
- (long long)_migratePedometerUserDefaults:(id*)arg1;
- (long long)_migrateSedentaryStateFromQuantityToCategoryWithError:(id*)arg1;
- (long long)_migrateSourceDevices:(id*)arg1;
- (long long)_migrateSourcesTableForSync:(id*)arg1;
- (long long)_migrateSourcesToProvenanceWithError:(id*)arg1;
- (long long)_migrateStoredDateOfBirthTimeZoneWithError:(id*)arg1;
- (long long)_recreateDataProvenanceTableIncludingOriginVersionsWithError:(id*)arg1;
- (long long)_recreateDataProvenanceTableIncludingTimeZoneNamesWithError:(id*)arg1;
- (long long)_recreateDataSeriesTableWithError:(id*)arg1;
- (bool)_recreateMedicalRecordTable:(id)arg1 intermediateTables:(id)arg2 creationSQL:(id)arg3 error:(out id*)arg4;
- (long long)_removeAchievementsAndActivityCachesFromUnprotectedDatabaseWithError:(id*)arg1;
- (long long)_removeActivitySharingDataWithError:(id*)arg1;
- (long long)_removeOrphanedDeletedObjectsWithError:(id*)arg1;
- (long long)_removeOrphanedLocationSeriesWithError:(id*)arg1;
- (long long)_removeStandHourWriteAuthorizationWithError:(id*)arg1;
- (long long)_removeTrustedFitnessMachineEntityTable:(out id*)arg1;
- (long long)_removeUnusedColumnsFromActivityCacheWithError:(out id*)arg1;
- (long long)_removeVO2MaxTestTypeMetadataKeyAppleWatch:(out id*)arg1;
- (long long)_renameCDATableWithError:(id*)arg1;
- (long long)_renameKeyValueSyncStoreColumnInProtectedDabase:(bool)arg1 error:(id*)arg2;
- (long long)_runMigrationStep:(id)arg1 currentVersion:(long long*)arg2 finalVersion:(long long)arg3 databaseName:(id)arg4 error:(id*)arg5;
- (long long)_runMigrationSteps:(id)arg1 currentVersion:(long long)arg2 databaseName:(id)arg3 expectedFinalVersion:(long long)arg4 error:(id*)arg5;
- (long long)_setAuthorizationAnchorWithError:(id*)arg1;
- (long long)_setLastOkemoZursObjectAnchorWithError:(id*)arg1;
- (long long)_setupNFCForFitnessMachinesWithError:(out id*)arg1;
- (id)_sortedAndPrunedMigrationSteps:(id)arg1 currentVersion:(long long)arg2 databaseName:(id)arg3 error:(id*)arg4;
- (long long)_tigris_addContainerColumnToCloudSyncStores:(id*)arg1;
- (long long)_tigris_addEmptyZonesColumnWithError:(id*)arg1;
- (long long)_tigris_addEpochColumnToSyncAnchorTable:(id*)arg1;
- (long long)_tigris_addGapColumnToCloudSyncStores:(id*)arg1;
- (long long)_tigris_addLastCheckAndOwnerIDColumnsWithError:(id*)arg1;
- (long long)_tigris_addLastSyncColumnWithError:(id*)arg1;
- (long long)_tigris_addPreferredSourceOptionToConnectedGymSources:(out id*)arg1;
- (long long)_tigris_addRebaseDeadlineColumnWithError:(id*)arg1;
- (long long)_tigris_addSourcesBundleIdentifierUUIDIndexWithError:(id*)arg1;
- (bool)_updateDataCollectorKeyValueContextWithObject:(id)arg1 domain:(id)arg2 error:(id*)arg3;
- (long long)_updateDataIDColumnForBinarySamplesTableWithError:(id*)arg1;
- (long long)_updateDeviceEnabledWithError:(id*)arg1;
- (long long)_updateExternalSyncDatabaseSchema:(id*)arg1;
- (long long)_updateHeightPreferenceWithError:(id*)arg1;
- (long long)_updateKeyValueEntityUniquenessWithProtectedDatabase:(bool)arg1 error:(id*)arg2;
- (long long)_updateOriginVersionsWithError:(id*)arg1;
- (long long)_updateWithComputedStatsColumnsInActivityCacheTableWithError:(id*)arg1;
- (void)addLockstepMigrationForSchema:(id)arg1 to:(long long)arg2 requiring:(long long)arg3 foreignKeys:(long long)arg4 handler:(id /* block */)arg5;
- (void)addMigrationForSchema:(id)arg1 to:(long long)arg2 foreignKeys:(long long)arg3 handler:(id /* block */)arg4;
- (void)addMigrationSteps:(id)arg1;
- (void)addMigrationTo:(long long)arg1 foreignKeys:(long long)arg2 handler:(id /* block */)arg3;
- (id)boulderProtectedMigrationSteps;
- (id)boulderUnprotectedMigrationSteps;
- (id)butlerProtectedMigrationSteps;
- (id)butlerUnprotectedMigrationSteps;
- (id)cinarProtectedMigrationSteps;
- (id)cinarUnprotectedMigrationSteps;
- (id)corryProtectedMigrationSteps;
- (id)corryUnprotectedMigrationSteps;
- (id)database;
- (id)databaseName;
- (long long)deleteDatabaseStatusForVersion:(long long)arg1 errorMessage:(id)arg2 error:(id*)arg3;
- (id)eagleProtectedMigrationSteps;
- (id)eagleUnprotectedMigrationSteps;
- (id)emetProtectedMigrationSteps;
- (id)emetUnprotectedMigrationSteps;
- (id)erieProtectedMigrationSteps;
- (id)erieUnprotectedMigrationSteps;
- (bool)executeSQL:(id)arg1 error:(id*)arg2;
- (bool)executeSQLStatements:(id)arg1 error:(id*)arg2;
- (id)init;
- (id)initWithProfile:(id)arg1 database:(id)arg2 databaseName:(id)arg3;
- (long long)migrateFromVersion:(long long)arg1 toVersion:(long long)arg2 error:(id*)arg3;
- (id)monarchProtectedMigrationSteps;
- (id)monarchUnprotectedMigrationSteps;
- (id)okemoZursProtectedMigrationStepsForProfile:(id)arg1;
- (id)okemoZursUnprotectedMigrationSteps;
- (long long)performHFDMigrationToVersion:(long long)arg1 handler:(id /* block */)arg2 error:(id*)arg3;
- (id)primaryProtectedMigrationSteps;
- (id)primaryUnprotectedMigrationSteps;
- (id)profile;
- (id)schemaManager;
- (long long)statusForUnhandledVersion:(long long)arg1 error:(id*)arg2;
- (id)tigrisProtectedMigrationSteps;
- (id)tigrisUnprotectedMigrationSteps;
- (id)whitetailProtectedMigrationSteps;
- (id)whitetailUnprotectedMigrationSteps;

@end
