/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIRectangleFeature : CIFeature {
    struct CGPoint { 
        float x; 
        float y; 
    } bottomLeft;
    struct CGPoint { 
        float x; 
        float y; 
    } bottomRight;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } bounds;
    struct CGPoint { 
        float x; 
        float y; 
    } topLeft;
    struct CGPoint { 
        float x; 
        float y; 
    } topRight;
}

@property (readonly) struct CGPoint { float x1; float x2; } bottomLeft;
@property (readonly) struct CGPoint { float x1; float x2; } bottomRight;
@property (readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } bounds;
@property (readonly) struct CGPoint { float x1; float x2; } topLeft;
@property (readonly) struct CGPoint { float x1; float x2; } topRight;

- (struct CGPoint { float x1; float x2; })bottomLeft;
- (struct CGPoint { float x1; float x2; })bottomRight;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (id)initWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 topLeft:(struct CGPoint { float x1; float x2; })arg2 topRight:(struct CGPoint { float x1; float x2; })arg3 bottomLeft:(struct CGPoint { float x1; float x2; })arg4 bottomRight:(struct CGPoint { float x1; float x2; })arg5;
- (struct CGPoint { float x1; float x2; })topLeft;
- (struct CGPoint { float x1; float x2; })topRight;
- (id)type;

@end
