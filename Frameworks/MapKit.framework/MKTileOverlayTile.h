/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKTileOverlayTile : NSObject {
    struct { 
        struct { 
            double x; 
            double y; 
        } origin; 
        struct { 
            double width; 
            double height; 
        } size; 
    } _frame;
    NSData *_image;
    struct { 
        int x; 
        int y; 
        int z; 
        float contentScaleFactor; 
    } _path;
    float _scale;
}

@property (nonatomic) struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (nonatomic, retain) NSData *image;
@property (nonatomic) struct { int x1; int x2; int x3; float x4; } path;
@property (nonatomic) float scale;

- (void).cxx_destruct;
- (id)description;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (id)image;
- (struct { int x1; int x2; int x3; float x4; })path;
- (float)scale;
- (void)setFrame:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setImage:(id)arg1;
- (void)setPath:(struct { int x1; int x2; int x3; float x4; })arg1;
- (void)setScale:(float)arg1;

@end
