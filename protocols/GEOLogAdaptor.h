/* Generated by RuntimeBrowser.
 */

@protocol GEOLogAdaptor <NSObject>

@required

- (BOOL)acceptsLogMessageOfType:(int)arg1 subType:(int)arg2;
- (NSObject<OS_dispatch_queue> *)adaptorQueue;
- (void)flushLogs;
- (BOOL)isLogFrameworkAdaptor;
- (void)queueLogMessage:(GEOLogMessage *)arg1;

@optional

- (void)adaptorDidGetAdded:(id <GEOLogAdaptor>)arg1;
- (void)adaptorDidGetRemoved:(id <GEOLogAdaptor>)arg1;
- (void)adaptorWillGetAdded:(id <GEOLogAdaptor>)arg1;
- (void)adaptorWillGetRemoved:(id <GEOLogAdaptor>)arg1;
- (void)disableLogMsgInstrumentation;
- (void)enableLogMsgInstrumentation;
- (void)registerLogMsgState:(GEOLogMsgState *)arg1;
- (void)unregisterLogMsgStateOfType:(int)arg1;

@end
