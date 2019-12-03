/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Categories.framework/Categories
 */

@interface CTCategories : NSObject {
    NSString * _indexVersionId;
}

@property (readonly, copy) NSArray *availableCategoryIDs;

+ (long long)currentIOSDevice;
+ (void)initialize;
+ (id)sharedCategories;
+ (id)systemBlockableBundleIdentifiers;
+ (id)systemBlockableBundleIdentifiersForDeviceFamily:(long long)arg1;
+ (id)systemBundleIdentifiers;
+ (id)systemHiddenBundleIdentifiers;
+ (id)systemHiddenBundleIdentifiersForDeviceFamily:(long long)arg1;
+ (id)systemUnblockableBundleIdentifiers;
+ (id)systemUnblockableBundleIdentifiersForDeviceFamily:(long long)arg1;

- (void).cxx_destruct;
- (void)_emptySharedCache:(id)arg1;
- (id)availableCategoryIDs;
- (void)categoriesForBundleIDs:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)categoriesForBundleIDs:(id)arg1 platform:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)categoriesForBundleIDs:(id)arg1 response:(id /* block */)arg2;
- (void)categoriesForBundleIDs:(id)arg1 responseWithError:(id /* block */)arg2;
- (void)categoriesForDomainNames:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)categoriesForDomainNames:(id)arg1 response:(id /* block */)arg2;
- (void)categoriesForDomainNames:(id)arg1 responseWithError:(id /* block */)arg2;
- (void)categoriesForDomainURLs:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)categoriesForDomainURLs:(id)arg1 response:(id /* block */)arg2;
- (void)categoriesForDomainURLs:(id)arg1 responseWithError:(id /* block */)arg2;
- (void)categoryForBundleID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)categoryForBundleID:(id)arg1 platform:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)categoryForBundleID:(id)arg1 response:(id /* block */)arg2;
- (void)categoryForBundleID:(id)arg1 responseWithError:(id /* block */)arg2;
- (void)categoryForDomainName:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)categoryForDomainName:(id)arg1 response:(id /* block */)arg2;
- (void)categoryForDomainName:(id)arg1 responseWithError:(id /* block */)arg2;
- (void)categoryForDomainURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)categoryForDomainURL:(id)arg1 response:(id /* block */)arg2;
- (void)categoryForDomainURL:(id)arg1 responseWithError:(id /* block */)arg2;
- (void)dealloc;
- (id)init;
- (void)unCategorizedDomainsFromDomains:(id)arg1 withCompletionHandler:(id /* block */)arg2;

@end
