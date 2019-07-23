/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
 */

@interface CDPDaemonConnection : NSObject {
    NSXPCConnection *_conn;
    NSLock *_connLock;
}

- (void).cxx_destruct;
- (id)connection;
- (id)daemon;
- (id)daemonWithErrorHandler:(id /* block */)arg1;
- (id)init;

@end
