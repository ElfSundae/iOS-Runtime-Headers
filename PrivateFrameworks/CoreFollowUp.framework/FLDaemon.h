/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
 */

@interface FLDaemon : NSObject {
    NSXPCConnection *_conn;
    NSLock *_connLock;
}

+ (id)daemonWithErrorHandler:(id /* block */)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)connection;
- (id)daemonWithErrorHandler:(id /* block */)arg1;
- (id)init;
- (void)invalidateConnection;
- (id)remoteObjectInterface;

@end
