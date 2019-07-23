/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBShape : NSObject <NSCoding, NSCopying> {
    int m_concaveCorner;
    struct CGSize { 
        float width; 
        float height; 
    } m_concaveCornerOffset;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } m_frame;
    UIKBGeometry *m_geometry;
    UIKBShape *m_originalShape;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } m_paddedFrame;
    BOOL m_scaled;
    unsigned int m_uid;
}

@property (nonatomic) int concaveCorner;
@property (nonatomic) struct CGSize { float x1; float x2; } concaveCornerOffset;
@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } frame;
@property (nonatomic, retain) UIKBGeometry *geometry;
@property (nonatomic, retain) UIKBShape *originalShape;
@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } paddedFrame;
@property (nonatomic) BOOL scaled;
@property (nonatomic, readonly) unsigned int uid;

+ (id)shape;
+ (id)shapeByCombining:(id)arg1 withShape:(id)arg2;

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_scaleRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inYAxis:(BOOL)arg2;
- (void)addRectFrom:(id)arg1;
- (void)addRectFrom:(id)arg1 mergeActionFactors:(id)arg2;
- (void)addRectFrom:(id)arg1 widthFraction:(float)arg2 heightFraction:(float)arg3 adjustOriginXFactor:(float)arg4 adjustOriginYFactor:(float)arg5;
- (void)addRectFrom:(id)arg1 widthFraction:(float)arg2 heightFraction:(float)arg3 adjustOriginXFactor:(float)arg4 adjustOriginYFactor:(float)arg5 absoluteOriginFactors:(BOOL)arg6;
- (int)concaveCorner;
- (struct CGSize { float x1; float x2; })concaveCornerOffset;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frame;
- (id)geometry;
- (unsigned int)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithGeometry:(id)arg1 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 paddedFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (id)initWithGeometry:(id)arg1 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 paddedFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 concaveCorner:(int)arg4 concaveCornerOffset:(struct CGSize { float x1; float x2; })arg5;
- (BOOL)isEmpty;
- (BOOL)isEqual:(id)arg1;
- (void)makeLikeOther:(id)arg1;
- (id)originalShape;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })paddedFrame;
- (void)scaleIfNeeded:(float)arg1 onlyYAxis:(BOOL)arg2;
- (void)scaleWidth:(float)arg1;
- (BOOL)scaled;
- (void)setConcaveCorner:(int)arg1;
- (void)setConcaveCornerOffset:(struct CGSize { float x1; float x2; })arg1;
- (void)setConcaveCornerSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setGeometry:(id)arg1;
- (void)setOriginalShape:(id)arg1;
- (void)setPaddedFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setScaled:(BOOL)arg1;
- (BOOL)shouldUseGeometry;
- (unsigned int)uid;

@end