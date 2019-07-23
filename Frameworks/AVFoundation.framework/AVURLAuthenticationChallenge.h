/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVURLAuthenticationChallenge : NSURLAuthenticationChallenge <AVAssetResourceLoaderRequest> {
    NSDictionary * _requestDictionary;
    AVWeakReference * _weakReference;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (SEL)_selectorForInformingDelegateOfCancellationByFig;

- (void)_performCancellationByClient;
- (id)_requestDictionary;
- (BOOL)_shouldInformDelegateOfFigCancellation;
- (id)_weakReference;
- (void)dealloc;
- (id)init;
- (id)initWithAuthenticationChallenge:(id)arg1 sender:(id)arg2;
- (id)initWithAuthenticationChallenge:(id)arg1 sender:(id)arg2 requestDictionary:(id)arg3;
- (id)initWithProtectionSpace:(id)arg1 proposedCredential:(id)arg2 previousFailureCount:(int)arg3 failureResponse:(id)arg4 error:(id)arg5 sender:(id)arg6;

@end
