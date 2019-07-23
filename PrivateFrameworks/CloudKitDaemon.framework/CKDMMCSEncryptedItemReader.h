/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDMMCSEncryptedItemReader : NSObject <CKDMMCSItemReaderProtocol> {
    CKDMMCSItem *_MMCSItem;
    CKDMMCSItemGroupContext *_MMCSRequest;
    struct _mkbbackupref { } *_handle;
}

@property (nonatomic, retain) CKDMMCSItem *MMCSItem;
@property (nonatomic, retain) CKDMMCSItemGroupContext *MMCSRequest;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct _mkbbackupref { }*handle;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)MMCSItem;
- (id)MMCSRequest;
- (BOOL)closeWithError:(id*)arg1;
- (void)dealloc;
- (id)getFileMetadataWithError:(id*)arg1;
- (struct _mkbbackupref { }*)handle;
- (id)initWithMMCSItem:(id)arg1 MMCSRequest:(id)arg2;
- (BOOL)openWithError:(id*)arg1;
- (BOOL)readBytesAtOffset:(unsigned long long)arg1 bytes:(char *)arg2 length:(unsigned long long)arg3 bytesRead:(unsigned long long*)arg4 error:(id*)arg5;
- (void)setHandle:(struct _mkbbackupref { }*)arg1;
- (void)setMMCSItem:(id)arg1;
- (void)setMMCSRequest:(id)arg1;

@end
