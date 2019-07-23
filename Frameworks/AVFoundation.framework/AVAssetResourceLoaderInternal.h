/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetResourceLoaderInternal : NSObject {
    AVAssetClientURLRequestHelper *URLRequestHelper;
    NSMutableDictionary *contentInformationCache;
    NSObject<OS_dispatch_queue> *contentInformationCachingQueue;
    NSObject<OS_dispatch_queue> *delegateQueue;
    int loadingCancelled;
    NSMutableDictionary *pendingRequests;
    BOOL preloadsEligibleContentKeys;
    NSObject<OS_dispatch_queue> *stateQueue;
    AVWeakReference *weakReferenceToDelegate;
}

@end
