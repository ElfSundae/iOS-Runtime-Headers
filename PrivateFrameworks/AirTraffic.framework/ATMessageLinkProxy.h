/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

@interface ATMessageLinkProxy : ATMessageLink <ATMessageLinkObserver, ATMessageLinkRequestHandler, NSSecureCoding> {
    NSXPCConnection * _connection;
    NSXPCListenerEndpoint * _endpoint;
    int  _endpointType;
    NSString * _identifier;
    BOOL  _initialized;
    NSHashTable * _observers;
    BOOL  _open;
    NSMutableDictionary * _requestHandlers;
    NSMutableSet * _streams;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int endpointType;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSString *identifier;
@property (getter=isInitialized, nonatomic) BOOL initialized;
@property (getter=isOpen, nonatomic) BOOL open;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (void)addRequestHandler:(id)arg1 forDataClass:(id)arg2;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (int)endpointType;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithEndpoint:(id)arg1;
- (BOOL)isInitialized;
- (BOOL)isOpen;
- (void)messageLink:(id)arg1 didReceiveRequest:(id)arg2 completion:(id /* block */)arg3;
- (void)messageLinkWasClosed:(id)arg1;
- (void)messageLinkWasInitialized:(id)arg1;
- (void)messageLinkWasOpened:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)removeRequestHandlerForDataClass:(id)arg1;
- (void)sendRequest:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)sendResponse:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)setEndpointType:(int)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInitialized:(BOOL)arg1;
- (void)setOpen:(BOOL)arg1;

@end
