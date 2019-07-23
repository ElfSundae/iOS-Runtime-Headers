/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFDbJournal : NSObject {
    NSMutableData *_buffer;
    id /* block */ _checkpointBlock;
    int _fd;
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    } _lock;
    NSString *_path;
    id /* block */ _rollbackBlock;
}

@property (nonatomic, copy) id /* block */ checkpointBlock;
@property (nonatomic, copy) id /* block */ rollbackBlock;

- (BOOL)_checkpoint;
- (BOOL)_processJournalFile:(id)arg1 db:(struct sqlite3 { }*)arg2;
- (void)_resetBuffer;
- (BOOL)_rollback;
- (BOOL)append:(const char *)arg1;
- (id /* block */)checkpointBlock;
- (void)clear;
- (void)dealloc;
- (BOOL)flush;
- (id)initWithPath:(id)arg1;
- (BOOL)mergeWithDatabase:(struct sqlite3 { }*)arg1;
- (id /* block */)rollbackBlock;
- (void)setCheckpointBlock:(id /* block */)arg1;
- (void)setRollbackBlock:(id /* block */)arg1;

@end
