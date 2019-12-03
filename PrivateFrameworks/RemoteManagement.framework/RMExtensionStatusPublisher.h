/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

@interface RMExtensionStatusPublisher : NSObject <RMExtensionStatusPublisherRequestHandling> {
    <RMExtensionStatusPublisherRequestHandling> * _requestHandler;
    NSLock * _requestHandlerLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <RMExtensionStatusPublisherRequestHandling> *requestHandler;
@property (readonly) Class superclass;

+ (id)sharedPublisher;

- (void).cxx_destruct;
- (id)init;
- (id)initWithRequestHandler:(id)arg1;
- (void)queryStatusesOfTypes:(id)arg1 onBehalfOfAccount:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)requestHandler;

@end
