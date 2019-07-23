/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSFamilyInfoLookupTask : AMSTask {
    <AMSFamilyInfoLookupBagContract> * _bagContract;
    NSString * _logKey;
}

@property (nonatomic, retain) <AMSFamilyInfoLookupBagContract> *bagContract;
@property (nonatomic, retain) NSString *logKey;

+ (id)_processURLResult:(id)arg1;

- (void).cxx_destruct;
- (void)_cacheFamilyInfoLookupResult:(id)arg1 forAccount:(id)arg2;
- (id)_cachedFamilyInfoLookupResultForAccount:(id)arg1;
- (id)_currentCachedFamilyInfo;
- (id)_pathForCachedFamilyInfoLookupResult;
- (id)_performFamilyInfoRequestForAccount:(id)arg1 error:(id*)arg2;
- (id)bagContract;
- (id)initWithBagContract:(id)arg1;
- (id)logKey;
- (id)performFamilyInfoLookup;
- (void)setBagContract:(id)arg1;
- (void)setLogKey:(id)arg1;

@end
