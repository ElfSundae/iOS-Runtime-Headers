/* Generated by RuntimeBrowser.
 */

@protocol AXUIMessageSenderDelegate <NSObject>

@required

- (void)messageSender:(void *)arg1 accessXPCConnectionForMessageWithContext:(void *)arg2 usingBlock:(void *)arg3; // needs 3 arg types, found 8: AXUIMessageSender *, void*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSObject<OS_xpc_object> *, void*

@optional

- (void*)messageSender:(AXUIMessageSender *)arg1 extractCustomDataFromXPCReply:(NSObject<OS_xpc_object> *)arg2 numberOfKeyValuePairsForCustomData:(unsigned long long*)arg3;
- (void)messageSender:(AXUIMessageSender *)arg1 processCustomDataFromXPCReply:(void*)arg2;
- (void)messageSender:(AXUIMessageSender *)arg1 willSendXPCMessage:(NSObject<OS_xpc_object> *)arg2 context:(void*)arg3;

@end
