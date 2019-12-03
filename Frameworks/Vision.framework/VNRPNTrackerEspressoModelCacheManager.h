/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNRPNTrackerEspressoModelCacheManager : NSObject {
    NSString * _espressoModelName;
    NSMutableDictionary * _rpnEspressoResourcesKeyToEspressoResourcesCache;
    NSLock * _rpnEspressoResourcesKeyToEspressoResourcesCacheLock;
}

@property (readonly) NSString *espressoModelName;

+ (id)cacheKeyFromOptions:(id)arg1 error:(id*)arg2;
+ (id)cacheOptionsKeys;

- (void).cxx_destruct;
- (void)dealloc;
- (id)espressoModelName;
- (id)espressoResourcesFromOptions:(id)arg1 error:(id*)arg2;
- (id)initWithRPNEspressoModelName:(id)arg1;

@end
