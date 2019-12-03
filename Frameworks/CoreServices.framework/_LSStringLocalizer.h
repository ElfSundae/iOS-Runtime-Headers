/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

@interface _LSStringLocalizer : NSObject {
    struct __CFBundle { } * _bundle;
    NSArray * _bundleLocalizations;
    NSArray * _bundleLocalizationsWithDefaultPrefLocs;
    NSString * _stringsFile;
    NSMutableDictionary * _stringsFileContent;
    _LSLazyPropertyList * _unlocalizedInfoPlistStrings;
}

+ (id)IOQueue;
+ (id)coreTypesLocalizer;
+ (void)findKeysToLocalizeInInfoDictionary:(id)arg1 forArrayKey:(struct __CFString { }*)arg2 stringKey:(struct __CFString { }*)arg3 localizedKeys:(id)arg4;
+ (id)frameworkBundleLocalizer;
+ (void)gatherLocalizedStringsForCFBundle:(struct __CFBundle { }*)arg1 infoDictionary:(id)arg2 nameOnly:(bool)arg3;
+ (id)localizedStringForCanonicalString:(id)arg1 preferredLocalizations:(id)arg2 context:(struct LSContext { id x1; }*)arg3;
+ (id)missingLocalizationPlaceholder;
+ (id)preferredLocalizationsForXCTests;
+ (void)setPreferredLocalizationsForXCTests:(id)arg1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)debugDescription;
- (void)enumerateLocalizedStringsForKeys:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateLocalizedStringsUsingBlock:(id /* block */)arg1;
- (id)init;
- (id)initWithBundleURL:(id)arg1 stringsFile:(id)arg2;
- (id)initWithCFBundle:(struct __CFBundle { }*)arg1 stringsFile:(id)arg2;
- (id)initWithDatabase:(id)arg1 bundleUnit:(unsigned int)arg2 delegate:(unsigned int)arg3;
- (id)initWithDatabase:(id)arg1 pluginUnit:(unsigned int)arg2;
- (id)localizedStringDictionaryWithString:(id)arg1 defaultValue:(id)arg2;
- (id)localizedStringWithString:(id)arg1 inBundle:(struct __CFBundle { }*)arg2 localeCode:(id)arg3;
- (id)localizedStringWithString:(id)arg1 inBundle:(struct __CFBundle { }*)arg2 preferredLocalizations:(id)arg3;
- (id)localizedStringWithString:(id)arg1 preferredLocalizations:(id)arg2;
- (id)localizedStringsWithStrings:(id)arg1 preferredLocalizations:(id)arg2;
- (id)stringsFileContentInBundle:(struct __CFBundle { }*)arg1 withLocaleCode:(id)arg2;

@end
