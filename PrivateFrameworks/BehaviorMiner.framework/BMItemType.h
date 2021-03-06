/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BehaviorMiner.framework/BehaviorMiner
 */

@interface BMItemType : NSObject <NSCopying> {
    long long  _edge;
    _DKEventStream * _eventStream;
    NSString * _identifier;
    Class  _valueClass;
    id /* block */  _valueExtractBlock;
}

@property (nonatomic) long long edge;
@property (nonatomic, retain) _DKEventStream *eventStream;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) Class valueClass;
@property (nonatomic, copy) id /* block */ valueExtractBlock;

+ (id)allItemTypes;
+ (id)allItemTypesDictionary;
+ (id)allRegisteredItemTypes;
+ (id)appActivityType;
+ (id)appInFocus;
+ (id)appIntentClass;
+ (id)appLaunchedReason;
+ (id)appOpened;
+ (id)bluetoothConnectedToDevice;
+ (id)bluetoothConnectedToDeviceWithAddress;
+ (id)bluetoothConnectedToDeviceWithName;
+ (id)bundleIdOfHostOpenedShareExtension;
+ (id)bundleIdOfShareExtensionOpened;
+ (id)connectedToExternalAudioOutput;
+ (id)dayOfWeek;
+ (id)firstBacklightAfterWakeup;
+ (id)hourOfDay;
+ (id)hourOfDaySlot;
+ (id)interactionContentURL;
+ (id)interactionDirection;
+ (id)interactionItemTypes;
+ (id)interactionMechanism;
+ (id)interactionPhotoContact;
+ (id)interactionPhotoLocation;
+ (id)interactionPhotoScene;
+ (id)interactionRecipients;
+ (id)interactionSender;
+ (id)interactionSharingSourceBundleID;
+ (id)interactionTargetBundleID;
+ (id)interactionTextTopic;
+ (id)interactionUTIType;
+ (id)isWeekend;
+ (id)locationIdentifier;
+ (id)mediaGenreStartedPlaying;
+ (id)mediaIsPlaying;
+ (void)registerItemType:(id)arg1;
+ (id)relevanceAppActivityHash;
+ (id)relevanceCoarseAppActivityHash;
+ (id)relevanceCoarseIntentHash;
+ (id)relevanceIntentHash;
+ (void)unregisterItemType:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (long long)edge;
- (id)eventStream;
- (id)extractEventFromDKEvent:(id)arg1;
- (id)extractItemFromDKEvent:(id)arg1;
- (id)extractValueFromDKEvent:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)setEdge:(long long)arg1;
- (void)setEventStream:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setValueClass:(Class)arg1;
- (void)setValueExtractBlock:(id /* block */)arg1;
- (Class)valueClass;
- (id /* block */)valueExtractBlock;

@end
