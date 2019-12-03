/* Generated by RuntimeBrowser.
 */

@protocol ServiceInterface

@required

- (void)createSnapshotFor:(void *)arg1 pred:(void *)arg2 actions:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: NSString *, NSPredicate *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSUUID *, NSError *, void*
- (void)getNetworkBitmapsWithNames:(void *)arg1 startTime:(void *)arg2 endTime:(void *)arg3 Reply:(void *)arg4; // needs 4 arg types, found 10: NSSet *, unsigned long long, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)getOption:(void *)arg1 inScopes:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSDictionary *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)identifierForUUID:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 9: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSString *, NSError *, void*
- (void)inquireNOIFor:(void *)arg1 orPredicate:(void *)arg2 requestedKeys:(void *)arg3 options:(void *)arg4 reply:(void *)arg5; // needs 5 arg types, found 11: NWNetworkOfInterest *, NSPredicate *, NSDictionary *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)performPersistentStoreHealthCheckWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)performQueryOnEntity:(void *)arg1 pred:(void *)arg2 sort:(void *)arg3 actions:(void *)arg4 reply:(void *)arg5; // needs 5 arg types, found 10: NSString *, NSPredicate *, NSSortDescriptor *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)resetDataFor:(void *)arg1 nameKind:(void *)arg2 inScopes:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 9: NSArray *, NSString *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)resetUsageFor:(void *)arg1 nameKind:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSArray *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)setOption:(void *)arg1 inScopes:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSDictionary *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)setUsageOption:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)subscribeToNOIsFor:(NWNetworkOfInterest *)arg1 orPredicate:(NSPredicate *)arg2 options:(NSDictionary *)arg3;
- (void)trainModelAndScore:(void *)arg1 lastScoreDate:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: bool, NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)unsubscribeToNOIs:(NSSet *)arg1;

@end
