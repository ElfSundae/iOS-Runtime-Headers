/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSMetricsEventTable : SSEventsTableBase

+ (id)_eventsTableName;
+ (id)databasePath;

- (bool)_migrateToVersion1;
- (bool)_migrateToVersion2;
- (bool)_migrateToVersion3;
- (id)_pragmaValueForName:(id)arg1;
- (bool)_setupDatabase;
- (void)performTransactionWithBlock:(id /* block */)arg1;

@end
