/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCDownload : NSObject <BRCTransfer> {
    unsigned long long  _doneSize;
    NSString * _etag;
    BRCItemID * _itemID;
    BRCProgress * _progress;
    BOOL  _progressPublished;
    CKRecord * _record;
    CKRecordID * _recordID;
    NSString * _stageID;
    long long  _throttleID;
    unsigned long long  _totalSize;
}

@property (nonatomic) unsigned long long doneSize;
@property (nonatomic, readonly) NSString *etag;
@property (nonatomic, readonly) BRCItemID *itemID;
@property (nonatomic, readonly) int kind;
@property (nonatomic, readonly) BRCProgress *progress;
@property (nonatomic) BOOL progressPublished;
@property (nonatomic, retain) CKRecord *record;
@property (nonatomic, readonly) CKRecordID *recordID;
@property (nonatomic, retain) CKRecord *secondaryRecord;
@property (nonatomic, readonly) CKRecordID *secondaryRecordID;
@property (nonatomic, readonly) NSString *stageID;
@property (nonatomic, readonly) unsigned long long totalSize;
@property (nonatomic, readonly) NSNumber *transferID;

- (void).cxx_destruct;
- (unsigned long long)doneSize;
- (id)etag;
- (id)initWithDocument:(id)arg1 stageID:(id)arg2;
- (id)itemID;
- (int)kind;
- (id)progress;
- (BOOL)progressPublished;
- (id)record;
- (id)recordID;
- (id)secondaryRecord;
- (id)secondaryRecordID;
- (void)setDoneSize:(unsigned long long)arg1;
- (void)setProgressPublished:(BOOL)arg1;
- (void)setRecord:(id)arg1;
- (void)setSecondaryRecord:(id)arg1;
- (id)stageID;
- (unsigned long long)totalSize;
- (id)transferID;

@end
