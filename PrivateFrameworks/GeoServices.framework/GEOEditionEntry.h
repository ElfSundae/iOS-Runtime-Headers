/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOEditionEntry : NSObject {
    unsigned int  _edition;
    bool  _invalidateOnly;
    unsigned int  _provider;
    unsigned int  _tileset;
}

@property (nonatomic) unsigned int edition;
@property (nonatomic) bool invalidateOnly;
@property (nonatomic) unsigned int provider;
@property (nonatomic) unsigned int tileset;

- (unsigned int)edition;
- (bool)invalidateOnly;
- (unsigned int)provider;
- (void)setEdition:(unsigned int)arg1;
- (void)setInvalidateOnly:(bool)arg1;
- (void)setProvider:(unsigned int)arg1;
- (void)setTileset:(unsigned int)arg1;
- (unsigned int)tileset;

@end
