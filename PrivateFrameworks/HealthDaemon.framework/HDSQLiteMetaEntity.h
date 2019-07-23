/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSQLiteMetaEntity : HDSQLiteEntity

+ (id)_namePredicate:(id)arg1;
+ (id)_tableNamePredicate:(id)arg1;
+ (id)_typePredicate:(id)arg1;
+ (id)anyInDatabase:(id)arg1 withType:(id)arg2 name:(id)arg3;
+ (id)anyInDatabase:(id)arg1 withType:(id)arg2 tableName:(id)arg3;
+ (id)databaseTable;
+ (id)queryWithDatabase:(id)arg1 type:(id)arg2;
+ (id)queryWithDatabase:(id)arg1 type:(id)arg2 tableName:(id)arg3;
+ (id)queryWithDatabase:(id)arg1 types:(id)arg2 tableName:(id)arg3;

- (id)SQLWithDatabase:(id)arg1;
- (id)nameWithDatabase:(id)arg1;
- (id)tableNameWithDatabase:(id)arg1;
- (id)typeWithDatabase:(id)arg1;

@end
