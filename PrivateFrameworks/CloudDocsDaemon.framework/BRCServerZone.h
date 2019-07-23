/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCServerZone : NSObject <BRCZone> {
    BRCServerChangeState * _changeState;
    BRCClientZone * _clientZone;
    BRCPQLConnection * _db;
    BRCZoneRowID * _dbRowID;
    BRCSyncContext * _metadataSyncContext;
    BOOL  _needsSave;
    BRCAccountSession * _session;
    unsigned int  _state;
    BRCSyncContext * _syncContext;
    NSString * _zoneName;
}

@property (readonly) BRCServerChangeState *changeState;
@property (nonatomic, retain) BRCClientZone *clientZone;
@property (nonatomic, readonly) BRCPQLConnection *db;
@property (nonatomic, retain) BRCZoneRowID *dbRowID;
@property (readonly) BOOL isCloudDocsZone;
@property (nonatomic, readonly) BOOL isPrivateZone;
@property (nonatomic, readonly) BOOL isSharedZone;
@property (nonatomic, readonly) BRCSyncContext *metadataSyncContext;
@property (nonatomic, readonly) BRCSyncContext *metadataSyncContextIfExists;
@property (nonatomic) BOOL needsSave;
@property (nonatomic, readonly) NSString *ownerName;
@property (nonatomic, readonly) NSMutableDictionary *plist;
@property (nonatomic, retain) BRCAccountSession *session;
@property (nonatomic, readonly) unsigned int state;
@property (nonatomic, readonly) CKRecordZoneID *zoneID;
@property (nonatomic, readonly) NSString *zoneName;

- (void).cxx_destruct;
- (void)_collectTombstoneForRank:(unsigned long long)arg1;
- (struct PQLResultSet { Class x1; }*)_enumeratePendingFetchDeletedNormalRecordIDs;
- (struct PQLResultSet { Class x1; }*)_enumeratePendingFetchDeletedShareRecordIDs;
- (BOOL)_markItemDeadForRecordID:(id)arg1;
- (BOOL)_markShareIDDead:(id)arg1;
- (void)_reportCantSaveProblem:(id)arg1 record:(id)arg2;
- (BOOL)_saveDeletedRecordIDs:(id)arg1;
- (BOOL)_saveEditedAliasRecord:(id)arg1 error:(id*)arg2;
- (BOOL)_saveEditedContentRecords:(id)arg1;
- (BOOL)_saveEditedDirOrDocStructureRecord:(id)arg1 error:(id*)arg2;
- (BOOL)_saveEditedDocumentContentRecord:(id)arg1 error:(id*)arg2;
- (BOOL)_saveEditedFinderBookmarkRecord:(id)arg1 error:(id*)arg2;
- (BOOL)_saveEditedRecord:(id)arg1 error:(id*)arg2;
- (BOOL)_saveEditedShareRecord:(id)arg1 error:(id*)arg2;
- (BOOL)_saveEditedShareRecords:(id)arg1 deletedShareRecordIDs:(id)arg2;
- (BOOL)_saveEditedStructureRecords:(id)arg1;
- (BOOL)_saveEditedSymlinkRecord:(id)arg1 error:(id*)arg2;
- (BOOL)_saveItemID:(id)arg1 stat:(id)arg2 record:(id)arg3 error:(id*)arg4;
- (BOOL)_saveItemID:(id)arg1 stat:(id)arg2 record:(id)arg3 origName:(id)arg4 base:(id)arg5 no:(id)arg6 ext:(id)arg7;
- (BOOL)_saveItemID:(id)arg1 version:(id)arg2 record:(id)arg3 iWorkSharingOptions:(unsigned int)arg4;
- (id)_structurePrefixForType:(BOOL)arg1;
- (void)addForegroundClient:(id)arg1;
- (BOOL)allocateRanks;
- (id)asPrivateZone;
- (id)asSharedZone;
- (id)changeState;
- (void)clearStateBits:(unsigned int)arg1;
- (id)clientZone;
- (void)collectTombstoneRanks:(id)arg1;
- (id)db;
- (id)dbRowID;
- (void)deleteAllContentsOnServerWithCompletionBlock:(id /* block */)arg1;
- (id)deleteAllContentsOperation;
- (id)description;
- (id)descriptionWithContext:(id)arg1;
- (unsigned long long)didSyncDownRequestID:(unsigned long long)arg1 serverChangeToken:(id)arg2 editedRecords:(id)arg3 deletedRecordIDs:(id)arg4 deletedShareRecordIDs:(id)arg5 movedZoneNames:(id)arg6 syncStatus:(int)arg7;
- (BOOL)dumpStatusToContext:(id)arg1 error:(id*)arg2;
- (BOOL)dumpTablesToContext:(id)arg1 error:(id*)arg2;
- (void)forceMoveToCloudDocs;
- (void)handleBrokenStructure;
- (BOOL)hasXattrWithSignature:(id)arg1;
- (unsigned int)hash;
- (id)initWithZoneName:(id)arg1 dbRowID:(id)arg2 plist:(id)arg3 session:(id)arg4;
- (BOOL)isCloudDocsZone;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isPrivateZone;
- (BOOL)isSharedZone;
- (id)itemByItemID:(id)arg1;
- (struct PQLResultSet { Class x1; }*)itemsEnumeratorWithDB:(id)arg1;
- (id)metadataSyncContext;
- (id)metadataSyncContextIfExists;
- (BOOL)needsSave;
- (id)ownerName;
- (unsigned int)pendingFetchDeletedRecordsCount;
- (unsigned int)pendingFetchRecordsCount;
- (struct PQLResultSet { Class x1; }*)pendingFetchRecordsEnumerator;
- (id)plist;
- (void)removeForegroundClient:(id)arg1;
- (BOOL)resetServerTruth;
- (BOOL)resetServerTruthAndDestroyZone:(BOOL)arg1;
- (BOOL)saveInconsistentEditedRecords:(id)arg1 deletedRecordIDs:(id)arg2 deletedShareRecordIDs:(id)arg3;
- (void)scheduleMoveToCloudDocs;
- (BOOL)serverZoneIsCreated;
- (id)session;
- (void)setClientZone:(id)arg1;
- (void)setDbRowID:(id)arg1;
- (void)setNeedsSave:(BOOL)arg1;
- (void)setSession:(id)arg1;
- (BOOL)setStateBits:(unsigned int)arg1;
- (BOOL)shouldRecreateServerZoneAfterError:(id)arg1;
- (unsigned int)state;
- (BOOL)storeXattr:(id)arg1;
- (id)syncContext;
- (BOOL)validateItemsLoggingToFile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1 db:(id)arg2;
- (BOOL)validateStructureLoggingToFile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1 db:(id)arg2;
- (id)xattrForSignature:(id)arg1;
- (id)zoneID;
- (id)zoneName;

@end
