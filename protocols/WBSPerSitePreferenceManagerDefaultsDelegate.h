/* Generated by RuntimeBrowser.
 */

@protocol WBSPerSitePreferenceManagerDefaultsDelegate <NSObject>

@required

- (id)defaultPreferenceValueForPreferenceIfNotCustomized:(WBSPerSitePreference *)arg1;
- (WBSPerSitePreferencesSQLiteStore *)perSitePreferencesStore;
- (long long)preferencesStoreKeyForPreference:(WBSPerSitePreference *)arg1;

@optional

- (void)getDefaultPreferenceValueIfNotCustomizedForPreference:(void *)arg1 domain:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 7: WBSPerSitePreference *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id

@end
