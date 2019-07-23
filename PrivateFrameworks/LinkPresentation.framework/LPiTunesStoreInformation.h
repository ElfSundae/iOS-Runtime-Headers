/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPiTunesStoreInformation : NSObject {
    unsigned int  _capabilities;
    NSMapTable * _changeHandlers;
    SKCloudServiceController * _cloudServiceController;
    NSString * _storefrontIdentifier;
}

@property (readonly) unsigned int capabilities;
@property (readonly, copy) NSString *storefrontIdentifier;

+ (unsigned int)_convertCapabilities:(unsigned int)arg1;
+ (id)_convertNewStorefrontIdentifier:(id)arg1;
+ (id)shared;

- (void).cxx_destruct;
- (void)_capabilitiesDidChangeNotification;
- (void)_notifyChangeHandlers;
- (void)_setCapabilities:(unsigned int)arg1;
- (void)_setStorefrontIdentifier:(id)arg1;
- (void)_storefrontDidChangeNotification;
- (unsigned int)capabilities;
- (id)init;
- (void)registerForStoreAvailablityChangesWithToken:(id)arg1 handler:(id /* block */)arg2;
- (id)storefrontIdentifier;
- (void)unregisterForStoreAvailablityChangesWithToken:(id)arg1;
- (unsigned int)userStateForMediaStorefrontIdentifier:(id)arg1;

@end
