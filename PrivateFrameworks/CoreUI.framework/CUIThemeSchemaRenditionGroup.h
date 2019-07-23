/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIThemeSchemaRenditionGroup : NSObject {
    CUIRenditionKey * _baseKey;
    struct { char *x1; char *x2; struct _renditionkeytoken { unsigned short x_3_1_1; unsigned short x_3_1_2; } x3[5]; int x4; int x5; struct { char *x_6_1_1; char *x_6_1_2; int x_6_1_3; unsigned int x_6_1_4; } x6[12]; } * _part;
    NSArray * _renditions;
}

@property (nonatomic, retain) NSArray *renditions;

+ (id)renditionGroupsForRenditions:(id)arg1 part:(struct { char *x1; char *x2; struct _renditionkeytoken { unsigned short x_3_1_1; unsigned short x_3_1_2; } x3[5]; int x4; int x5; struct { char *x_6_1_1; char *x_6_1_2; int x_6_1_3; unsigned int x_6_1_4; } x6[12]; }*)arg2;

- (id)_layerNameForDrawingLayer:(int)arg1;
- (id)_layerNameForState:(int)arg1;
- (id)_renditionsSortedIntoLayers;
- (void)addLayoutMetricsToPSDImageRef:(id)arg1 withRendition:(id)arg2;
- (void)addStatesAndDrawingLayersToPSDLayers:(id)arg1 forPresentationState:(unsigned int)arg2;
- (void)addValueOrDim1LayersToPSDLayers:(id)arg1 forPresentationState:(unsigned int)arg2 state:(unsigned int)arg3 drawingLayer:(unsigned int)arg4;
- (id)baseKey;
- (void)dealloc;
- (id)description;
- (id)initWithRenditions:(id)arg1 part:(struct { char *x1; char *x2; struct _renditionkeytoken { unsigned short x_3_1_1; unsigned short x_3_1_2; } x3[5]; int x4; int x5; struct { char *x_6_1_1; char *x_6_1_2; int x_6_1_3; unsigned int x_6_1_4; } x6[12]; }*)arg2;
- (id)mutablePSDImageRef;
- (id)mutablePSDImageRefColumnStyle;
- (int)partFeatures;
- (id)renditions;
- (id)schemaLayersAndLayerGroups;
- (void)setRenditions:(id)arg1;
- (id)themeSchemaLayers;

@end
