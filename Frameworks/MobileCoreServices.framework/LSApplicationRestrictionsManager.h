/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface LSApplicationRestrictionsManager : NSObject {
    MCProfileConnection *_connection;
}

@property (readonly) NSSet *blacklistedBundleIDs;
@property MCProfileConnection *connection;
@property (readonly) BOOL isOpenInRestrictionInEffect;
@property (readonly) NSSet *removedSystemApplications;
@property (readonly) BOOL whitelistEnabled;
@property (readonly) NSSet *whitelistedBundleIDs;

+ (id)activeRestrictionIdentifiers;
+ (id)sharedInstance;

- (id)allowedOpenInAppBundleIDsAfterApplyingFilterToAppBundleIDs:(id)arg1 originatingAppBundleID:(id)arg2 originatingAccountIsManaged:(BOOL)arg3;
- (id)blacklistedBundleIDs;
- (id)connection;
- (id)init;
- (BOOL)isApplicationRemoved:(id)arg1;
- (BOOL)isApplicationRestricted:(id)arg1;
- (BOOL)isApplicationRestricted:(id)arg1 checkFeatureRestrictions:(BOOL)arg2;
- (BOOL)isFeatureAllowed:(unsigned int)arg1;
- (BOOL)isOpenInRestrictionInEffect;
- (id)removedSystemApplications;
- (void)removedSystemAppsChanged;
- (BOOL)setApplication:(id)arg1 removed:(BOOL)arg2;
- (void)setConnection:(id)arg1;
- (BOOL)whitelistEnabled;
- (id)whitelistedBundleIDs;

@end
