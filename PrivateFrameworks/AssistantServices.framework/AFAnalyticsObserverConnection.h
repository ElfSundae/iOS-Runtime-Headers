/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFAnalyticsObserverConnection : NSObject <AFAnalyticsObserver> {
    NSXPCConnection * _connection;
    id /* block */  _observation;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_semaphore> * _semaphore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cleanUpConnection;
- (id)_connection;
- (void)_connectionInterrupted;
- (void)_connectionInvalidated;
- (void)dealloc;
- (oneway void)didObserveEvents:(id)arg1;
- (id)initWithObservation:(id /* block */)arg1;
- (void)waitUntilInvalidated;

@end
