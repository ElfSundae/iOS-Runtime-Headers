/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileAccessoryUpdater.framework/MobileAccessoryUpdater
 */

@interface FudXPCConnection : NSObject <FudConnection> {
    NSString *clientIdentifier;
    NSObject<OS_xpc_object> *connection;
    NSObject<OS_dispatch_queue> *connectionQueue;
    BOOL didStop;
    id /* block */ messageHandler;
    int notifyToken;
    NSObject<OS_dispatch_queue> *replyQueue;
    NSObject<OS_dispatch_queue> *sessionQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void)createConnection;
- (BOOL)createSession;
- (void)dealloc;
- (id)initWithClientName:(id)arg1 replyHandlerQueue:(id)arg2 messageHandler:(id /* block */)arg3;
- (BOOL)registerForBSDNotifications;
- (void)sendMessageToFud:(id)arg1;
- (void)sendMessageToFud:(id)arg1 reply:(id /* block */)arg2;
- (void)stop;

@end
