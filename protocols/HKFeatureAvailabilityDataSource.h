/* Generated by RuntimeBrowser.
 */

@protocol HKFeatureAvailabilityDataSource <NSObject>

@required

- (NSString *)atrialFibrillationDetectionOnboardingCountryCode;
- (NSString *)electrocardiogramOnboardingCountryCode;
- (struct { long long x1; long long x2; long long x3; })watchAtrialFibrillationDetectionVersion;
- (NSString *)watchBuildType;
- (NSString *)watchCompanionDevicePlatform;
- (struct { long long x1; long long x2; long long x3; })watchElectrocardiogramVersion;
- (NSString *)watchModelNumber;
- (NSString *)watchOSBuildVersion;
- (struct { long long x1; long long x2; long long x3; })watchOSVersion;
- (NSString *)watchProductType;
- (NSString *)watchRegion;

@end
