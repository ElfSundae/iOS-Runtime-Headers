/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDSystemAvailabilityWatcherWrapper : NSObject {
    <CKDSystemAvailabilityWatcher> * _delegate;
    NSString * _personaID;
}

@property (nonatomic) <CKDSystemAvailabilityWatcher> *delegate;
@property (nonatomic, copy) NSString *personaID;

- (void).cxx_destruct;
- (id)delegate;
- (unsigned long long)hash;
- (id)initWithDelegate:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)performWithDelegate:(id /* block */)arg1;
- (id)personaID;
- (void)setDelegate:(id)arg1;
- (void)setPersonaID:(id)arg1;

@end
