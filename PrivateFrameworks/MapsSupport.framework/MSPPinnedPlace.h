/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPPinnedPlace : MSPPinnedPlaceStorage <MSPImmutableObject, MSPMutableObject> {
    NSUUID * _storageIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport

+ (Class)immutableObjectClass;
+ (id)immutableObjectProtocol;
+ (Class)mutableObjectClass;
+ (id)mutableObjectProtocol;
+ (id)uuidForIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)copyIfValidWithError:(out id*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithData:(id)arg1 storageIdentifier:(id)arg2;
- (id)initWithStorageIdentifier:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)storageIdentifier;
- (id)transferToImmutableIfValidWithError:(out id*)arg1;

// Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions

+ (id)pinnedPlaceWithShortcut:(id)arg1;

@end
