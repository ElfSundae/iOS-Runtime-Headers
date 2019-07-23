/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SALocalSearchVehicleEventSearchCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *events;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)vehicleEventSearchCompleted;
+ (id)vehicleEventSearchCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)events;
- (id)groupIdentifier;
- (void)setEvents:(id)arg1;

@end
