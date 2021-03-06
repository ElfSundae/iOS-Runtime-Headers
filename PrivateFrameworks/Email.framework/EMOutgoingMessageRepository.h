/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

@interface EMOutgoingMessageRepository : NSObject <EFLoggable> {
    EMRemoteConnection * _connection;
}

@property (retain) EMRemoteConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)log;
+ (id)remoteInterface;
+ (id)signpostLog;

- (void).cxx_destruct;
- (id)connection;
- (void)deleteDraftsInMailbox:(id)arg1 documentID:(id)arg2 previousDraftObjectID:(id)arg3;
- (id)deliverMessage:(id)arg1 usingMailDrop:(bool)arg2;
- (id)initWithRemoteConnection:(id)arg1;
- (bool)isProcessing;
- (unsigned long long)numberOfPendingMessages;
- (bool)outboxContainsMessageFromAccount:(id)arg1;
- (void)processAllQueuedMessages;
- (void)resumeDeliveryQueue;
- (id)saveDraftMessage:(id)arg1 mailboxObjectID:(id)arg2 previousDraftObjectID:(id)arg3;
- (void)setConnection:(id)arg1;
- (unsigned long long)signpostID;
- (void)suspendDeliveryQueue;

@end
