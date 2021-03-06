/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IntlPreferences.framework/IntlPreferences
 */

@interface ISRootMigrator : ISMigrator {
    bool  _isErase;
}

@property (nonatomic) bool isErase;

- (id)appendRegionalVariantsToLanguageIdentifiers:(id)arg1 regionCode:(id)arg2;
- (id)importPreferredLanguagesForPreferences:(id)arg1;
- (id)importPreferredLanguages_macOS_10_9_forPreferences:(id)arg1;
- (bool)isErase;
- (bool)performMigration;
- (id)performMigrationForPreferences:(id)arg1;
- (id)performMigrationForUserPreferences:(id)arg1 systemPreferences:(id)arg2;
- (void)setIsErase:(bool)arg1;
- (void)updateAppleLanguagesSchemaVersionToCurrent;

@end
