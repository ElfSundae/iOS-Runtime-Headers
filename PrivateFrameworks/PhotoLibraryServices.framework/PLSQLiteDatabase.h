/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLSQLiteDatabase : NSObject {
    struct sqlite3 { } * _database;
}

+ (struct sqlite3 { }*)_openSQLiteDatabaseAtPath:(const char *)arg1;
+ (id)openDatabaseAtPath:(id)arg1;

- (bool)_execute:(id)arg1;
- (struct sqlite3_stmt { }*)_prepareStatement:(id)arg1;
- (bool)beginDeferredTransaction;
- (bool)beginExclusiveTransaction;
- (bool)close;
- (bool)commitTransaction;
- (id)initWithOpenedSQLite3Database:(struct sqlite3 { }*)arg1;
- (bool)prepareAndEvaluateStatement:(id)arg1;
- (bool)prepareStatement:(id)arg1 andStepThroughResultsWithBlock:(id /* block */)arg2;
- (bool)rollbackTransaction;

@end
