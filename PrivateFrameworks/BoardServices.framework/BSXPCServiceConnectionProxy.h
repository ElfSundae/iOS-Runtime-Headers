/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
 */

@interface BSXPCServiceConnectionProxy : NSObject {
    NSObject<OS_xpc_object> * _XPCConnection;
    NSObject<OS_dispatch_queue> * _XPCConnectionTargetQueue;
    BSXPCServiceConnection * _connection;
    BSObjCProtocol * _localProtocol;
    BSObjCProtocol * _remoteProtocol;
    <BSServiceDispatchingQueue> * _replyQueue;
}

@property (nonatomic, retain) NSObject<OS_xpc_object> *XPCConnection;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *XPCConnectionTargetQueue;
@property (nonatomic, retain) BSXPCServiceConnection *connection;
@property (nonatomic, retain) BSObjCProtocol *localProtocol;
@property (nonatomic, retain) BSObjCProtocol *remoteProtocol;
@property (nonatomic, retain) <BSServiceDispatchingQueue> *replyQueue;

+ (id)concreteArgumentsForArguments:(id)arg1;
+ (void)createImplementationForProtocol:(id)arg1;
+ (void)decodeArguments:(id)arg1 outArgs:(out id)arg2 fromMessage:(id)arg3 forConnection:(id)arg4;
+ (void)encodeArguments:(id)arg1 inArgs:(in id)arg2 toMessage:(id)arg3 forConnection:(id)arg4;
+ (void)invokeMethod:(id)arg1 onTarget:(id)arg2 withMessage:(id)arg3 forConnection:(id)arg4;
+ (struct { BOOL x1; bool x2; id x3; })invokeMethod:(id)arg1 onTarget:(id)arg2 withObjects:(in id)arg3;
+ (void)invokeReplyBlock:(id /* block */)arg1 withArguments:(id)arg2 andPayload:(id)arg3 error:(id)arg4 forConnection:(id)arg5;
+ (id)proxyForConnection:(id)arg1 withInterface:(id)arg2 activeXPCConnection:(id)arg3 xpcConnectionTargetQueue:(id)arg4 replyQueue:(id)arg5;

- (id)XPCConnection;
- (id)XPCConnectionTargetQueue;
- (id)connection;
- (void)dealloc;
- (bool)invokeMessage:(id)arg1 onTarget:(id)arg2;
- (id)localProtocol;
- (id)remoteProtocol;
- (id)replyQueue;
- (void)setConnection:(id)arg1;
- (void)setLocalProtocol:(id)arg1;
- (void)setRemoteProtocol:(id)arg1;
- (void)setReplyQueue:(id)arg1;
- (void)setXPCConnection:(id)arg1;
- (void)setXPCConnectionTargetQueue:(id)arg1;

@end
