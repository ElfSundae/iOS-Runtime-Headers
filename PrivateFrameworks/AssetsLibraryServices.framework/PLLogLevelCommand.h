/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

@interface PLLogLevelCommand : NSObject

+ (void)executeLogCommand:(int)arg1 ForDomainsAndLevels:(id)arg2;
+ (int)globalModeForString:(id)arg1;
+ (int)levelForDomain:(id)arg1;
+ (int)logCommandForString:(id)arg1;
+ (int)logLevelForString:(id)arg1;
+ (id)printLevelsForDomains:(id)arg1;
+ (id)relatedDomainsAndLevelsForDomains:(id)arg1 withDefaultPrefix:(id)arg2 forAppID:(struct __CFString { }*)arg3 shouldExcludeUndefined:(unsigned char)arg4;
+ (id)sanitizedNameForSettingsDomain:(id)arg1;
+ (unsigned char)setGlobalLoggingMode:(int)arg1 toState:(unsigned char)arg2;
+ (id)settingsNameForComponent:(id)arg1 isGeneral:(unsigned char)arg2;
+ (id)settingsNameForDomain:(id)arg1;
+ (unsigned char)stateForGlobalMode:(int)arg1;
+ (id)stringForLogGlobalMode:(int)arg1;
+ (id)stringForLogLevel:(int)arg1;

@end
