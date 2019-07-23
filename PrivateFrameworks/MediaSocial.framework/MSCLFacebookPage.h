/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
 */

@interface MSCLFacebookPage : NSObject <NSCopying> {
    NSString * _accessToken;
    NSString * _categoryName;
    NSString * _identifier;
    NSString * _name;
    int  _numberOfLikes;
}

@property (nonatomic, copy) NSString *accessToken;
@property (nonatomic, copy) NSString *categoryName;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) int numberOfLikes;

- (void).cxx_destruct;
- (id)accessToken;
- (id)categoryName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (id)identifier;
- (id)initWithGraphDictionary:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)name;
- (int)numberOfLikes;
- (void)setAccessToken:(id)arg1;
- (void)setCategoryName:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNumberOfLikes:(int)arg1;

@end
