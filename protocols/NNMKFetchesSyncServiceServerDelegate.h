/* Generated by RuntimeBrowser.
 */

@protocol NNMKFetchesSyncServiceServerDelegate <NSObject>

@required

- (void)fetchesSyncServiceServer:(NNMKFetchesSyncServiceServer *)arg1 didFailSendingProtobufWithIDSIdentifier:(NSString *)arg2 errorCode:(int)arg3;
- (void)fetchesSyncServiceServer:(NNMKFetchesSyncServiceServer *)arg1 didNotifyInitialSyncFinished:(NNMKProtoInitialSyncFinishedNotification *)arg2;
- (void)fetchesSyncServiceServer:(NNMKFetchesSyncServiceServer *)arg1 didNotifyProtectedChannelSupported:(NNMKProtoProtectedChannelSupportedNotification *)arg2;
- (void)fetchesSyncServiceServer:(NNMKFetchesSyncServiceServer *)arg1 didRequestContent:(NNMKProtoContentRequest *)arg2;
- (void)fetchesSyncServiceServer:(NNMKFetchesSyncServiceServer *)arg1 didRequestFetch:(NNMKProtoFetchRequest *)arg2;
- (void)fetchesSyncServiceServer:(NNMKFetchesSyncServiceServer *)arg1 didRequestFullSync:(NNMKProtoFullSyncRequest *)arg2;
- (void)fetchesSyncServiceServer:(NNMKFetchesSyncServiceServer *)arg1 didRequestHaltSync:(NNMKProtoHaltSyncRequest *)arg2;
- (void)fetchesSyncServiceServer:(NNMKFetchesSyncServiceServer *)arg1 didRequestMoreMessages:(NNMKProtoMoreMessagesRequest *)arg2;
- (void)fetchesSyncServiceServer:(NNMKFetchesSyncServiceServer *)arg1 didRequestMoreMessagesForConversation:(NNMKProtoMoreMessagesForConversationRequest *)arg2;
- (void)fetchesSyncServiceServer:(NNMKFetchesSyncServiceServer *)arg1 didSendProtobufSuccessfullyWithIDSIdentifier:(NSString *)arg2;

@end
