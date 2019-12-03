/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDAttachmentStore : NSObject

+ (id)sharedInstance;

- (bool)_cloudkitSyncingEnabled;
- (bool)_fileEligibleForCacheDelete:(id)arg1;
- (bool)_shouldEarlyReturnForWrongItemType:(id)arg1;
- (bool)_updateLegacyTransferGUIDOnMessageIfNeeded:(id)arg1 andUpdateTransfer:(id)arg2;
- (id)_updatedMessageBody:(id)arg1 replacingGuid:(id)arg2 withGuid:(id)arg3;
- (id)attachmentWithGUID:(id)arg1;
- (bool)deleteAttachmentDataForTransfer:(id)arg1;
- (bool)deleteAttachmentWithGUID:(id)arg1;
- (bool)deleteAttachmentsWithGUIDs:(id)arg1;
- (id)fileTransferWithAttachmentRecordRef:(struct _IMDAttachmentRecordStruct { }*)arg1;
- (id)getAuxVideoPath:(id)arg1;
- (bool)isSafeToDeleteAttachmentAtPath:(id)arg1;
- (void)markAllAttachmentsAsNeedingCloudKitSync;
- (void)markAllAttachmentsAsNotPurgeable;
- (void)markAttachmentPurgeable:(id)arg1;
- (void)markFileAsPurgeable:(id)arg1;
- (bool)removeAttachment:(id)arg1 fromMessageWithGUID:(id)arg2;
- (bool)storeAttachment:(id)arg1 associateWithMessageWithGUID:(id)arg2;
- (bool)updateAttachment:(id)arg1;
- (bool)updateLegacyTransferGUIDIfNeeded:(id)arg1;
- (bool)updateLegacyTransferGUIDOnMessageIfNeeded:(id)arg1;

@end
