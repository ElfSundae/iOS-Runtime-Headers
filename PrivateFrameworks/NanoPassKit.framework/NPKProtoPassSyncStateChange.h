/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKProtoPassSyncStateChange : PBCodable <NSCopying> {
    NPKProtoCatalog * _catalog;
    int  _changeType;
    NSData * _changeUUID;
    struct { 
        unsigned int passSegmentIndex : 1; 
        unsigned int passSegmentTotal : 1; 
    }  _has;
    NSData * _lastKnownReconciledPassSyncStateHash;
    NSData * _passData;
    unsigned int  _passSegmentIndex;
    unsigned int  _passSegmentTotal;
    NPKProtoPassSyncStateItem * _syncStateItem;
    NSString * _uniqueID;
}

@property (nonatomic, retain) NPKProtoCatalog *catalog;
@property (nonatomic) int changeType;
@property (nonatomic, retain) NSData *changeUUID;
@property (nonatomic, readonly) bool hasCatalog;
@property (nonatomic, readonly) bool hasLastKnownReconciledPassSyncStateHash;
@property (nonatomic, readonly) bool hasPassData;
@property (nonatomic) bool hasPassSegmentIndex;
@property (nonatomic) bool hasPassSegmentTotal;
@property (nonatomic, readonly) bool hasSyncStateItem;
@property (nonatomic, retain) NSData *lastKnownReconciledPassSyncStateHash;
@property (nonatomic, retain) NSData *passData;
@property (nonatomic) unsigned int passSegmentIndex;
@property (nonatomic) unsigned int passSegmentTotal;
@property (nonatomic, retain) NPKProtoPassSyncStateItem *syncStateItem;
@property (nonatomic, retain) NSString *uniqueID;

- (void).cxx_destruct;
- (int)StringAsChangeType:(id)arg1;
- (id)catalog;
- (int)changeType;
- (id)changeTypeAsString:(int)arg1;
- (id)changeUUID;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCatalog;
- (bool)hasLastKnownReconciledPassSyncStateHash;
- (bool)hasPassData;
- (bool)hasPassSegmentIndex;
- (bool)hasPassSegmentTotal;
- (bool)hasSyncStateItem;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)lastKnownReconciledPassSyncStateHash;
- (void)mergeFrom:(id)arg1;
- (id)npkDescription;
- (id)passData;
- (unsigned int)passSegmentIndex;
- (unsigned int)passSegmentTotal;
- (bool)readFrom:(id)arg1;
- (void)setCatalog:(id)arg1;
- (void)setChangeType:(int)arg1;
- (void)setChangeUUID:(id)arg1;
- (void)setHasPassSegmentIndex:(bool)arg1;
- (void)setHasPassSegmentTotal:(bool)arg1;
- (void)setLastKnownReconciledPassSyncStateHash:(id)arg1;
- (void)setPassData:(id)arg1;
- (void)setPassSegmentIndex:(unsigned int)arg1;
- (void)setPassSegmentTotal:(unsigned int)arg1;
- (void)setSyncStateItem:(id)arg1;
- (void)setUniqueID:(id)arg1;
- (id)syncStateItem;
- (id)uniqueID;
- (void)writeTo:(id)arg1;

@end
