/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCEdgeCacheHint : NSObject <NSCopying> {
    NSString * _cacheControlKey;
    NSString * _groupName;
}

@property (nonatomic, readonly, copy) NSString *cacheControlKey;
@property (nonatomic, readonly, copy) NSString *groupName;

+ (id)edgeCacheHintForBreaking;
+ (id)edgeCacheHintForCoverArticles;
+ (id)edgeCacheHintForEditorial;
+ (id)edgeCacheHintForFeaturedArticles;
+ (id)edgeCacheHintForMagazineContent;
+ (id)edgeCacheHintForSpotlight;
+ (id)edgeCacheHintForToday;
+ (id)edgeCacheHintForTopStories;
+ (id)edgeCacheHintForTrending;
+ (id)edgeCacheHintForVideos;

- (void).cxx_destruct;
- (id)cacheControlKey;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)groupName;
- (id)initWithGroupName:(id)arg1 cacheControlKey:(id)arg2;

@end
