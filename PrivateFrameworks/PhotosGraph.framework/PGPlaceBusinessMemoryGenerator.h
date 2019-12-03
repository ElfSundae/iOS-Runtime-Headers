/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGPlaceBusinessMemoryGenerator : PGFeaturedMemoryGenerator {
    NSString * _business;
    long long  _year;
}

@property (nonatomic) NSString *business;
@property (nonatomic) long long year;

- (void)_enumeratePotentialMemoriesUsingBlock:(id /* block */)arg1;
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (id)_potentialMemoriesForDryTesting;
- (void)_potentialMemoriesWithBusinessNode:(id)arg1 inYear:(long long)arg2 result:(id /* block */)arg3;
- (id)business;
- (void)setBusiness:(id)arg1;
- (void)setYear:(long long)arg1;
- (long long)year;

@end
