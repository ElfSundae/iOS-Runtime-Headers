/* Generated by RuntimeBrowser.
 */

@protocol HDSQLiteEntity <NSObject>

@required

+ (NSArray *)allDatabaseColumnNames;
+ (NSString *)associationPropertyForEntityClass:(Class)arg1;
+ (NSArray *)columnsDefinition;
+ (NSString *)databaseName;
+ (NSString *)databaseTable;
+ (HDSQLiteStatement *)deleteStatementWithProperty:(NSString *)arg1 database:(HDSQLiteDatabase *)arg2;
+ (NSString *)disambiguatedDatabaseTable;
+ (NSString *)disambiguatedSQLForProperty:(NSString *)arg1;
+ (Class)entityForProperty:(NSString *)arg1;
+ (NSArray *)indices;
+ (NSSet *)joinClausesForProperty:(NSString *)arg1;
+ (NSArray *)privateSubEntities;
+ (NSArray *)tableAliases;

- (NSUUID *)UUIDForProperty:(NSString *)arg1 database:(HDSQLiteDatabase *)arg2;
- (BOOL)booleanForProperty:(NSString *)arg1 database:(HDSQLiteDatabase *)arg2;
- (NSDate *)dateForProperty:(NSString *)arg1 database:(HDSQLiteDatabase *)arg2;
- (BOOL)deleteFromDatabase:(HDSQLiteDatabase *)arg1 error:(id*)arg2;
- (BOOL)getValuesForProperties:(void *)arg1 database:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 9: NSArray *, HDSQLiteDatabase *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, struct HDSQLiteRow { }*, void*
- (BOOL)getValuesForProperties:(void *)arg1 withDatabase:(void *)arg2 applier:(void *)arg3; // needs 3 arg types, found 9: NSArray *, HDSQLiteDatabase *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, struct HDSQLiteRow { }*, void*
- (id)valueForProperty:(NSString *)arg1 database:(HDSQLiteDatabase *)arg2;

@optional

+ (NSString *)columnNameForSortIdentifier:(NSString *)arg1;

@end
