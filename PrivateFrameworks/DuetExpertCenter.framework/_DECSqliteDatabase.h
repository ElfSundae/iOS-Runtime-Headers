/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

@interface _DECSqliteDatabase : NSObject {
    BOOL  _currentExclusivity;
    struct sqlite3 { } * _db;
    NSString * _filename;
    struct atomic_flag { 
        bool _Value; 
    }  _isClosed;
    BOOL  _isInMemory;
    NSOperationQueue * _operationQueue;
    NSCache * _queryCache;
    NSObject<OS_dispatch_queue> * _queue;
    /* Warning: Unrecognized filer type: '^' using 'void*' */ void* _threadInQueue;
    int  _transactionDepth;
    BOOL  _transactionRolledback;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) NSString *filename;
@property (nonatomic, readonly) struct sqlite3 { }*handle;
@property (nonatomic, readonly) BOOL isInMemory;

+ (int)bindParam:(struct sqlite3_stmt { }*)arg1 name:(const char *)arg2 double:(double)arg3;
+ (int)bindParam:(struct sqlite3_stmt { }*)arg1 name:(const char *)arg2 int64:(long long)arg3;
+ (int)bindParam:(struct sqlite3_stmt { }*)arg1 name:(const char *)arg2 int:(int)arg3;
+ (int)bindParam:(struct sqlite3_stmt { }*)arg1 name:(const char *)arg2 nscoding:(id)arg3;
+ (int)bindParam:(struct sqlite3_stmt { }*)arg1 name:(const char *)arg2 nsdata:(id)arg3;
+ (int)bindParam:(struct sqlite3_stmt { }*)arg1 name:(const char *)arg2 nsstring:(id)arg3;
+ (int)bindParamToNull:(struct sqlite3_stmt { }*)arg1 name:(const char *)arg2;
+ (id)corruptionMarkerFilename;
+ (id)corruptionMarkerPathForPath:(id)arg1;
+ (id)inMemoryPath;
+ (BOOL)isInMemoryPath:(id)arg1;
+ (id)protectedDatabaseWithFilename:(id)arg1 error:(id*)arg2;
+ (id)protectedDatabaseWithFilename:(id)arg1 flags:(int)arg2 error:(id*)arg3;
+ (id)randomlyNamedInMemoryPathWithBaseName:(id)arg1;
+ (id)readonlyDatabaseWithFilename:(id)arg1 error:(id*)arg2;
+ (BOOL)shouldCacheSql:(const char *)arg1;
+ (id)sqliteDatabaseInMemoryWithError:(id*)arg1;
+ (id)sqliteDatabaseWithFilename:(id)arg1 error:(id*)arg2;
+ (id)sqliteDatabaseWithFilename:(id)arg1 flags:(int)arg2 error:(id*)arg3;
+ (void)truncateDatabaseAtPath:(id)arg1;

- (void).cxx_destruct;
- (void)_prepAndRunQuery:(id)arg1 columns:(id)arg2 dictionary:(id)arg3 onError:(id /* block */)arg4;
- (BOOL)_transactionWithExclusivity:(BOOL)arg1 transaction:(id /* block */)arg2;
- (void)_txnBegin;
- (void)_txnBeginExclusive;
- (void)_txnEnd;
- (void)_txnRollback;
- (void)clearCaches;
- (void)closePermanently;
- (id)corruptionMarkerPath;
- (BOOL)createSnapshot:(id)arg1;
- (id)dbErrorWithCode:(unsigned int)arg1 sqliteReturnValue:(int)arg2 lastErrno:(int)arg3 query:(id)arg4;
- (void)dealloc;
- (id)description;
- (id)filename;
- (BOOL)frailReadTransaction:(id /* block */)arg1;
- (BOOL)frailWriteTransaction:(id /* block */)arg1;
- (id)freeSpace;
- (struct sqlite3 { }*)handle;
- (BOOL)hasColumnOnTable:(id)arg1 named:(id)arg2;
- (BOOL)hasIndexNamed:(id)arg1;
- (BOOL)hasTableNamed:(id)arg1;
- (id)initWithFilename:(id)arg1 flags:(int)arg2 error:(id*)arg3;
- (void)insertOrReplaceIntoTable:(id)arg1 dictionary:(id)arg2 onError:(id /* block */)arg3;
- (BOOL)isInMemory;
- (id)languageForFTSTable:(id)arg1;
- (long long)lastInsertRowId;
- (unsigned long long)numberOfRowsInTable:(id)arg1;
- (void)placeCorruptionMarker;
- (BOOL)prepAndRunNonDataQueries:(id)arg1 onError:(id /* block */)arg2;
- (BOOL)prepAndRunQuery:(id)arg1 onPrep:(id /* block */)arg2 onRow:(id /* block */)arg3 onError:(id /* block */)arg4;
- (void)prepQuery:(id)arg1 onPrep:(id /* block */)arg2 onError:(id /* block */)arg3;
- (void)readTransaction:(id /* block */)arg1;
- (BOOL)runQuery:(struct sqlite3_stmt { }*)arg1 onRow:(id /* block */)arg2;
- (BOOL)runQuery:(struct sqlite3_stmt { }*)arg1 onRow:(id /* block */)arg2 onError:(id /* block */)arg3;
- (id)selectColumns:(id)arg1 fromTable:(id)arg2 whereClause:(id)arg3 onPrep:(id /* block */)arg4 onError:(id /* block */)arg5;
- (BOOL)setUserVersion:(unsigned int)arg1;
- (void)simulateOnDiskDatabase;
- (id)tablesWithColumnNamed:(id)arg1;
- (void)updateTable:(id)arg1 dictionary:(id)arg2 whereClause:(id)arg3 onError:(id /* block */)arg4;
- (unsigned int)userVersion;
- (void)withDbLockNonblocking:(id /* block */)arg1;
- (void)writeTransaction:(id /* block */)arg1;

@end
