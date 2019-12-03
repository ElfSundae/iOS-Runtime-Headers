/* Generated by RuntimeBrowser.
 */

@protocol MSPSharedTripXPCServer <NSObject>

@required

- (void)blockSharedTrip:(NSString *)arg1;
- (void)checkin;
- (void)fetchAccountValidWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)fetchActiveHandlesWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)fetchSendingIdentityWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSString *, void*
- (void)fetchSharedTripsWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)startSharingTripWithContacts:(NSArray *)arg1;
- (void)startSharingTripWithMessagesContacts:(NSArray *)arg1;
- (void)startSharingTripWithMessagesGroup:(NSString *)arg1;
- (void)stopSharingTrip;
- (void)stopSharingTripWithContacts:(NSArray *)arg1;
- (void)stopSharingTripWithMessagesContacts:(NSArray *)arg1;
- (void)stopSharingTripWithMessagesGroup:(NSString *)arg1;
- (void)subscribeToSharedTripUpdatesWithIdentifier:(NSString *)arg1;
- (void)unsubscribeFromSharedTripUpdatesWithIdentifier:(NSString *)arg1;

@end
