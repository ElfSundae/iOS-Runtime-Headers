/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@interface DMFApplicationPolicyMonitor : NSObject {
    NSUUID * _identifier;
    NSArray * _policyTypes;
    DMFPolicyRegistration * _registration;
}

@property (getter=isEnabled, readonly) bool enabled;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, copy) NSArray *policyTypes;
@property (nonatomic, readonly) DMFPolicyRegistration *registration;

+ (void)createPolicyMonitorWithPolicyChangeHandler:(id /* block */)arg1 completionHandler:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)_fetchCategoriesIfNeededForBundleIdentifiers:(id)arg1 response:(id /* block */)arg2;
- (id)_initWithPolicyChangeHandler:(id /* block */)arg1 addingRegistration:(bool)arg2;
- (void)dealloc;
- (id)identifier;
- (id)initWithPolicyChangeHandler:(id /* block */)arg1;
- (bool)isEnabled;
- (id)policyTypes;
- (id)registration;
- (void)requestPoliciesForBundleIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setPolicyTypes:(id)arg1;

@end
