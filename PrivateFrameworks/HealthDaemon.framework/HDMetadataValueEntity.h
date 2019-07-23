/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDMetadataValueEntity : HDHealthEntity

+ (BOOL)_deleteMetadataValuesWithObjectID:(id)arg1 database:(id)arg2 error:(id*)arg3;
+ (id)_insertMetadataValueWithKeyID:(id)arg1 objectID:(id)arg2 value:(id)arg3 database:(id)arg4 error:(id*)arg5;
+ (id)_predicateForEntityWithKeyID:(id)arg1;
+ (id)_predicateForEntityWithObjectID:(id)arg1;
+ (id)columnsDefinition;
+ (id)createNonUniqueIndicesForColumns;
+ (id)databaseTable;
+ (id)deleteStatementForObjectMetadataWithDatabase:(id)arg1;
+ (id)insertMetadataValueWithKeyID:(id)arg1 objectID:(id)arg2 value:(id)arg3 healthDatabase:(id)arg4 error:(id*)arg5;
+ (id)metadataValueStatementWithDatabase:(id)arg1;
+ (int)protectionClass;

- (id)_clientValueForProperty:(id)arg1 value:(id)arg2;
- (id)valueWithDatabase:(id)arg1;

@end
