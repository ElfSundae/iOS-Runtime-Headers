/* Generated by RuntimeBrowser.
 */

@protocol GKCustomTournamentDelegate

@required

- (void)acceptInvitationWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)addCreator:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: GKPlayer *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)addInvitees:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (GKPlayer *)creator;
- (void)declineInvitationWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)removeCreator:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: GKPlayer *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)removeInvitees:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
