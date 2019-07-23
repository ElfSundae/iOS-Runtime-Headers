/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUINamedLookup : NSObject {
    CUIRenditionKey *_key;
    NSString *_name;
    unsigned int _odContent;
    NSString *_signature;
    unsigned int _storageRef;
}

@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) BOOL representsOnDemandContent;

- (void)_cacheRenditionProperties;
- (id)_rendition;
- (id)_renditionForSpecificKey:(id)arg1;
- (void)dealloc;
- (unsigned int)hash;
- (id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned int)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)name;
- (id)renditionKey;
- (id)renditionName;
- (BOOL)representsOnDemandContent;
- (void)setName:(id)arg1;
- (void)setRepresentsOnDemandContent:(BOOL)arg1;

@end
