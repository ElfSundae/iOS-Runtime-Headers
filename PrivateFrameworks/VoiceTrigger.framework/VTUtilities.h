/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

@interface VTUtilities : NSObject

+ (bool)VTIsHorseman;
+ (double)VTMachAbsoluteTimeGetTimeInterval:(unsigned long long)arg1;
+ (double)_round:(double)arg1 withPlaces:(int)arg2;
+ (unsigned long long)deviceCategoryForDeviceProductType:(id)arg1;
+ (id)deviceProductType;
+ (id)deviceProductVersion;
+ (id)deviceSoftwareVersion;
+ (void)forceReload;
+ (id)getAssetHashFromConfigPath:(id)arg1;
+ (bool)isAlwaysOn;
+ (bool)isInternalInstall;
+ (bool)isNano;
+ (id)sanitizeEventInfoForLogging:(id)arg1;
+ (bool)supportBargeIn;
+ (bool)supportExternalPhraseSpotter;
+ (bool)supportPremiumAssets;
+ (bool)supportTTS;
+ (double)systemUpTime;

@end
