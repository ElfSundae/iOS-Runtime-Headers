/* Generated by RuntimeBrowser.
 */

@protocol ICInAppMessageManagerProtocol <NSObject>

@required

- (void)addMessageEntry:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: ICInAppMessageEntry *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)allMessageEntriesWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)clearCachedResourcesForMessageWithIdentifier:(void *)arg1 bundleIdentifier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)downloadResourcesForMessageWithIdentifier:(void *)arg1 bundleIdentifier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)flushEventsWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)getAllMetadataForBundleIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)getMetadataForMessageIdentifier:(void *)arg1 bundleIdentifier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ICInAppMessageMetadataEntry *, NSError *, void*
- (void)messageEntriesForBundleIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)removeAllMessageEntriesForBundleIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)removeMessageEntryWithIdentifier:(void *)arg1 forBundleIdentifier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)removeMetadataForMessageIdentifier:(void *)arg1 bundleIdentifier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)reportEventForMessageIdentifier:(void *)arg1 withParams:(void *)arg2 flushImmediately:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: NSString *, NSDictionary *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)resetMessagesWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)syncMessagesWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)updateMessageEntry:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: ICInAppMessageEntry *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)updateMetadata:(void *)arg1 messageIdentifier:(void *)arg2 bundleIdentifier:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: ICInAppMessageMetadataEntry *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
