/* Generated by RuntimeBrowser.
 */

@protocol NEPluginDriver

@required

- (void)sleepWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)startWithConfiguration:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 10: NEConfiguration *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, int, NSArray *, NSArray *, void*
- (void)updateConfiguration:(NEConfiguration *)arg1;
- (void)wakeup;

@end
