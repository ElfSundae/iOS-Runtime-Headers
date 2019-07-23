/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUCallCapabilities : NSObject

+ (void)_sendNotificationsAfterRunningBlock:(id /* block */)arg1;
+ (bool)accountsMatchForSecondaryCalling;
+ (bool)accountsSupportSecondaryCalling;
+ (bool)areCTCapabilitiesValid;
+ (bool)areRelayCallingFeaturesEnabled;
+ (bool)canAttemptEmergencyCallsInAirplaneMode;
+ (bool)canAttemptEmergencyCallsWithoutCellularConnection;
+ (bool)canAttemptTelephonyCallsInAirplaneMode;
+ (bool)canAttemptTelephonyCallsWithoutCellularConnection;
+ (void)cancelPinRequestFromPrimaryDevice;
+ (id)client;
+ (id)cloudCallingDevices;
+ (id)debugDescription;
+ (void)endEmergencyCallbackMode;
+ (int)faceTimeAudioCallSupport;
+ (int)faceTimeVideoCallSupport;
+ (void)initializeCachedValues;
+ (void)invalidateAndRefreshThumperCallingProvisioningURL;
+ (void)invalidateAndRefreshWiFiCallingProvisioningURL;
+ (bool)isCSCallingCurrentlyAvailable;
+ (bool)isDirectFaceTimeAudioCallingCurrentlyAvailable;
+ (bool)isDirectFaceTimeVideoCallingCurrentlyAvailable;
+ (bool)isDirectTelephonyCallingCurrentlyAvailable;
+ (bool)isEmergencyCallbackModeEnabled;
+ (bool)isEmergencyCallbackPossible;
+ (bool)isFaceTimeAudioAvailable;
+ (bool)isFaceTimeVideoAvailable;
+ (bool)isRelayCallingEnabled;
+ (bool)isRelayCallingEnabledForDeviceWithID:(id)arg1;
+ (bool)isThumperCallingAllowedForCurrentDevice;
+ (bool)isThumperCallingAllowedOnDefaultPairedSecondaryDevice;
+ (bool)isThumperCallingAllowedOnSecondaryDeviceWithID:(id)arg1;
+ (bool)isThumperCallingCurrentlyAvailable;
+ (bool)isThumperCallingEnabled;
+ (bool)isVoLTECallingCurrentlyAvailable;
+ (bool)isVoLTECallingEnabled;
+ (bool)isWiFiCallingCurrentlyAvailable;
+ (bool)isWiFiCallingEnabled;
+ (bool)isWiFiCallingRoamingEnabled;
+ (id)outgoingRelayCallerID;
+ (int)relayCallingAvailability;
+ (void)requestPinFromPrimaryDevice;
+ (void)setRelayCallingEnabled:(bool)arg1;
+ (void)setRelayCallingEnabled:(bool)arg1 forDeviceWithID:(id)arg2;
+ (void)setThumperCallingAllowed:(bool)arg1 onSecondaryDeviceWithID:(id)arg2;
+ (void)setThumperCallingAllowedOnDefaultPairedSecondaryDevice:(bool)arg1;
+ (void)setThumperCallingEnabled:(bool)arg1;
+ (void)setVoLTECallingEnabled:(bool)arg1;
+ (void)setWiFiCallingEnabled:(bool)arg1;
+ (void)setWiFiCallingRoamingEnabled:(bool)arg1;
+ (bool)supportsBasebandCalling;
+ (bool)supportsCarrierServices;
+ (bool)supportsDisplayingFaceTimeAudioCalls;
+ (bool)supportsDisplayingFaceTimeVideoCalls;
+ (bool)supportsDisplayingTelephonyCalls;
+ (bool)supportsFaceTimeAudioCalls;
+ (bool)supportsFaceTimeAudioRelayCalling;
+ (bool)supportsFaceTimeVideoCalls;
+ (bool)supportsFaceTimeVideoRelayCalling;
+ (bool)supportsHostingFaceTimeAudioCalls;
+ (bool)supportsHostingFaceTimeVideoCalls;
+ (bool)supportsHostingTelephonyCalls;
+ (bool)supportsPrimaryCalling;
+ (bool)supportsRelayCalling;
+ (bool)supportsRelayingToOtherDevices;
+ (bool)supportsSimultaneousVoiceAndData;
+ (bool)supportsTelephonyCalls;
+ (bool)supportsTelephonyRelayCalling;
+ (bool)supportsThumperCalling;
+ (bool)supportsThumperCallingOverCellularData;
+ (bool)supportsVoLTECalling;
+ (bool)supportsWiFiCalling;
+ (bool)supportsWiFiEmergencyCalling;
+ (int)telephonyCallSupport;
+ (id)thumperCallingCapabilityInfo;
+ (id)voLTECallingCapabilityInfo;
+ (id)wiFiCallingCapabilityInfo;

@end
