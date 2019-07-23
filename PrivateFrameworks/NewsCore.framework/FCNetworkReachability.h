/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCNetworkReachability : NSObject {
    BOOL  _accessRestrictedBecauseOfAppVersion;
    BOOL  _accessRestrictedBecauseOfCountry;
    BOOL  _accessRestrictedBecauseOfDeviceAbandoned;
    BOOL  _accessRestrictedBecauseOfOSVersion;
    NSString * _currentCellularCarrierName;
    int  _currentRadioAccessTechnology;
    FCReachability * _internetReachability;
    BOOL  _isCloudKitAccessAllowed;
    BOOL  _isNetworkReachable;
    BOOL  _isNetworkReachableViaCellular;
    BOOL  _isNetworkReachableViaWiFi;
    NSHashTable * _observers;
    int  _offlineReason;
}

@property (nonatomic) BOOL accessRestrictedBecauseOfAppVersion;
@property (nonatomic) BOOL accessRestrictedBecauseOfCountry;
@property (nonatomic) BOOL accessRestrictedBecauseOfDeviceAbandoned;
@property (nonatomic) BOOL accessRestrictedBecauseOfOSVersion;
@property (nonatomic, readonly) NSString *cellularCarrierName;
@property (nonatomic, readonly) int cellularRadioAccessTechnology;
@property (nonatomic, retain) NSString *currentCellularCarrierName;
@property (nonatomic) int currentRadioAccessTechnology;
@property (nonatomic, retain) FCReachability *internetReachability;
@property (nonatomic) BOOL isCloudKitAccessAllowed;
@property (nonatomic, readonly) BOOL isCloudKitReachable;
@property (nonatomic, readonly) BOOL isNetworkOnlyReachableViaCellular;
@property (nonatomic) BOOL isNetworkReachable;
@property (nonatomic) BOOL isNetworkReachableViaCellular;
@property (nonatomic) BOOL isNetworkReachableViaWiFi;
@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic) int offlineReason;

+ (id)sharedNetworkReachability;

- (void).cxx_destruct;
- (int)_cellularRadioAccessTechnologyFromString:(id)arg1;
- (void)_reachabilityChanged:(id)arg1;
- (void)_updateReachability;
- (BOOL)accessRestrictedBecauseOfAppVersion;
- (BOOL)accessRestrictedBecauseOfCountry;
- (BOOL)accessRestrictedBecauseOfDeviceAbandoned;
- (BOOL)accessRestrictedBecauseOfOSVersion;
- (void)addObserver:(id)arg1;
- (id)cellularCarrierName;
- (int)cellularRadioAccessTechnology;
- (id)currentCellularCarrierName;
- (int)currentRadioAccessTechnology;
- (void)dealloc;
- (id)init;
- (id)internetReachability;
- (BOOL)isCloudKitAccessAllowed;
- (BOOL)isCloudKitReachable;
- (BOOL)isNetworkOnlyReachableViaCellular;
- (BOOL)isNetworkReachable;
- (BOOL)isNetworkReachableViaCellular;
- (BOOL)isNetworkReachableViaWiFi;
- (id)observers;
- (int)offlineReason;
- (void)removeObserver:(id)arg1;
- (void)setAccessRestrictedBecauseOfAppVersion:(BOOL)arg1;
- (void)setAccessRestrictedBecauseOfCountry:(BOOL)arg1;
- (void)setAccessRestrictedBecauseOfDeviceAbandoned:(BOOL)arg1;
- (void)setAccessRestrictedBecauseOfOSVersion:(BOOL)arg1;
- (void)setCurrentCellularCarrierName:(id)arg1;
- (void)setCurrentRadioAccessTechnology:(int)arg1;
- (void)setInternetReachability:(id)arg1;
- (void)setIsCloudKitAccessAllowed:(BOOL)arg1;
- (void)setIsNetworkReachable:(BOOL)arg1;
- (void)setIsNetworkReachableViaCellular:(BOOL)arg1;
- (void)setIsNetworkReachableViaWiFi:(BOOL)arg1;
- (void)setObservers:(id)arg1;
- (void)setOfflineReason:(int)arg1;

@end
