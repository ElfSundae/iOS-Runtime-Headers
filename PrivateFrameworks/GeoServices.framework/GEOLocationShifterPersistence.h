/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLocationShifterPersistence : NSObject {
    struct sqlite3_stmt { } * _addStmt;
    struct sqlite3 { } * _db;
    NSString * _dbFilePath;
    struct sqlite3_stmt { } * _findStmt;
    BOOL  _hasShutdown;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)sharedPersister;

- (BOOL)_bindBlobParameter:(const char *)arg1 toValue:(id)arg2 inStatement:(struct sqlite3_stmt { }*)arg3 error:(id*)arg4;
- (BOOL)_bindInt64Parameter:(const char *)arg1 toValue:(long long)arg2 inStatement:(struct sqlite3_stmt { }*)arg3 error:(id*)arg4;
- (BOOL)_bindIntParameter:(const char *)arg1 toValue:(int)arg2 inStatement:(struct sqlite3_stmt { }*)arg3 error:(id*)arg4;
- (BOOL)_bindRealParameter:(const char *)arg1 toValue:(double)arg2 inStatement:(struct sqlite3_stmt { }*)arg3 error:(id*)arg4;
- (BOOL)_bindTextParameter:(const char *)arg1 toValue:(id)arg2 inStatement:(struct sqlite3_stmt { }*)arg3 error:(id*)arg4;
- (void)_clearStatement:(struct sqlite3_stmt {}**)arg1;
- (BOOL)_createTable:(const char *)arg1 withDrop:(const char *)arg2;
- (BOOL)_executeStatement:(struct sqlite3_stmt { }*)arg1 error:(id*)arg2;
- (id)_init;
- (BOOL)_prepare:(const char *)arg1 statement:(struct sqlite3_stmt {}**)arg2;
- (BOOL)_reportSQLiteErrorCode:(int)arg1 method:(id)arg2 error:(id*)arg3;
- (BOOL)_setupIfNeeded;
- (void)_tearDown;
- (void)dealloc;
- (void)findResponseForCoordinate:(struct { double x1; double x2; })arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (id)initWithDBFilePath:(id)arg1;
- (void)pruneEntriesOlderThan:(id)arg1 maximumEntriesToKeep:(int)arg2;
- (void)removeAllEntries;
- (void)storeResponse:(id)arg1;
- (void)tearDown;

@end
