/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDImager : NSObject <TSDCanvasDelegate> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  mActualScaledClipRect;
    struct CGColor { } * mBackgroundColor;
    TSDCanvas * mCanvas;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  mContentInset;
    BOOL  mDistortedToMatch;
    TSKDocumentRoot * mDocumentRoot;
    BOOL  mDrawingIntoPDF;
    BOOL  mImageIsRenderingForMovie;
    BOOL  mImageMustHaveEvenDimensions;
    NSArray * mInfos;
    BOOL  mIsPrinting;
    struct CGSize { 
        float width; 
        float height; 
    }  mMaximumScaledImageSize;
    id /* block */  mPostRenderAction;
    NSSet * mPreviousRenderDatasNeedingDownload;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  mReusableActualScaledClipRect;
    struct CGContext { } * mReusableBitmapContext;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  mReusableBounds;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  mReusableIntegralBounds;
    struct CGSize { 
        float width; 
        float height; 
    }  mReusableScaledImageSize;
    struct CGSize { 
        float width; 
        float height; 
    }  mScaledImageSize;
    BOOL  mShouldReuseBitmapContext;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  mUnscaledClipRect;
    BOOL  mUseScaledImageSize;
    float  mViewScale;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } actualScaledClipRect;
@property (nonatomic) struct CGColor { }*backgroundColor;
@property (nonatomic, readonly, retain) TSDCanvas *canvas;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } contentInset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL distortedToMatch;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL imageIsRenderingForMovie;
@property (nonatomic) BOOL imageMustHaveEvenDimensions;
@property (nonatomic, retain) NSArray *infos;
@property (nonatomic) BOOL isPrinting;
@property (nonatomic) struct CGSize { float x1; float x2; } maximumScaledImageSize;
@property (nonatomic, copy) NSSet *previousRenderDatasNeedingDownload;
@property (nonatomic) struct CGSize { float x1; float x2; } scaledImageSize;
@property (nonatomic) BOOL shouldReuseBitmapContext;
@property (readonly) Class superclass;
@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } unscaledClipRect;
@property (nonatomic) float viewScale;

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })actualScaledClipRect;
- (struct CGColor { }*)backgroundColor;
- (id)canvas;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentInset;
- (void)dealloc;
- (BOOL)distortedToMatch;
- (id)documentRoot;
- (BOOL)drawPageInContext:(struct CGContext { }*)arg1 createPage:(BOOL)arg2;
- (BOOL)imageIsRenderingForMovie;
- (BOOL)imageMustHaveEvenDimensions;
- (id)infos;
- (id)initWithDocumentRoot:(id)arg1;
- (BOOL)isCanvasDrawingIntoPDF:(id)arg1;
- (BOOL)isPrinting;
- (BOOL)isPrintingCanvas;
- (struct CGSize { float x1; float x2; })maximumScaledImageSize;
- (struct CGImage { }*)newImage;
- (BOOL)p_configureCanvas;
- (void)p_drawPageInContext:(struct CGContext { }*)arg1 createPage:(BOOL)arg2;
- (struct CGImage { }*)p_newImageInReusableContext;
- (id)pdfData;
- (id)previousRenderDatasNeedingDownload;
- (struct CGSize { float x1; float x2; })scaledImageSize;
- (void)setBackgroundColor:(struct CGColor { }*)arg1;
- (void)setContentInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setDistortedToMatch:(BOOL)arg1;
- (void)setImageIsRenderingForMovie:(BOOL)arg1;
- (void)setImageMustHaveEvenDimensions:(BOOL)arg1;
- (void)setInfos:(id)arg1;
- (void)setIsPrinting:(BOOL)arg1;
- (void)setMaximumScaledImageSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setPostRenderAction:(id /* block */)arg1;
- (void)setPreviousRenderDatasNeedingDownload:(id)arg1;
- (void)setScaledImageSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setShouldReuseBitmapContext:(BOOL)arg1;
- (void)setUnscaledClipRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setViewScale:(float)arg1;
- (BOOL)shouldReuseBitmapContext;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })unscaledClipRect;
- (float)viewScale;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleScaledBoundsForClippingRepsOnCanvas:(id)arg1;

@end
