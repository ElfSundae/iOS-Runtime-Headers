/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGPotentialSocialGroupMemory : PGPotentialMemory {
    NSArray * _facedAssets;
    NSMutableSet * _mutableMomentNodes;
    NSSet * _peopleUUIDs;
    PGGraphSocialGroupNode * _socialGroupNode;
    long long  _year;
}

@property (retain) NSArray *facedAssets;
@property (retain) NSSet *peopleUUIDs;
@property (readonly) PGGraphSocialGroupNode *socialGroupNode;
@property (readonly) long long year;

- (void).cxx_destruct;
- (void)addMomentNode:(id)arg1;
- (id)facedAssets;
- (id)initWithSocialGroupNode:(id)arg1 year:(long long)arg2;
- (id)peopleUUIDs;
- (void)setFacedAssets:(id)arg1;
- (void)setPeopleUUIDs:(id)arg1;
- (id)socialGroupNode;
- (long long)year;

@end
