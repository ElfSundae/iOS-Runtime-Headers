/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSPearlCrossHairsManager : NSObject {
    struct vector<InstanceInfo, std::__1::allocator<InstanceInfo> > { 
        struct InstanceInfo {} *__begin_; 
        struct InstanceInfo {} *__end_; 
        struct __compressed_pair<InstanceInfo *, std::__1::allocator<InstanceInfo> > { 
            struct InstanceInfo {} *__value_; 
        } __end_cap_; 
    }  _instanceVector;
    NSMutableArray * _springInstances;
}

@property (nonatomic) bool grayscale;
@property (readonly) struct InstanceInfo { struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_1_1[4]; } x1; }*instanceData;
@property (readonly) NSMutableArray *springInstances;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addInstance:(id)arg1;
- (bool)grayscale;
- (id)init;
- (struct InstanceInfo { struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_1_1[4]; } x1; }*)instanceData;
- (void)setGrayscale:(bool)arg1;
- (void)setSpringsStates:(unsigned long long)arg1;
- (void)setTarget;
- (void)setValue;
- (id)springInstances;
- (void)update:(double)arg1;

@end
