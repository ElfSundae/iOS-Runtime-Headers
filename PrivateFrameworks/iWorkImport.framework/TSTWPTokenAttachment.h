/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTWPTokenAttachment : TSWPUIGraphicalAttachment {
    bool  mActive;
    struct CGImage { } * mCachedImage;
    double  mCachedImageScreenScale;
    TSTExpressionNode * mExpressionNode;
    bool  mHighlighted;
    bool  mInInvalidate;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mMenuRect;
    bool  mNeverShowsMenu;
    bool  mSelected;
    struct CGSize { 
        double width; 
        double height; 
    }  mTextSize;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic) struct CGImage { }*cachedImage;
@property (nonatomic) double cachedImageScreenScale;
@property (nonatomic, retain) TSTExpressionNode *expressionNode;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (getter=neverShowsMenu, nonatomic) bool neverShowsMenu;
@property (getter=isSelected, nonatomic) bool selected;

- (struct CGImage { }*)cachedImage;
- (double)cachedImageScreenScale;
- (id)copyIntoContext:(id)arg1;
- (id)copyIntoContext:(id)arg1 bakeModes:(bool)arg2;
- (void)dealloc;
- (id)description;
- (id)detokenizedText;
- (id)expressionNode;
- (id)formulaPlainText;
- (id)initWithContext:(id)arg1 expressionNode:(id)arg2;
- (void)invalidate;
- (bool)isActive;
- (bool)isHighlighted;
- (bool)isSelected;
- (void)loadFromArchive:(const struct TokenAttachmentArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { _Atomic int x_1_2_1; } x_4_1_1; } x4; struct UIGraphicalAttachment {} *x5; struct Reference {} *x6; }*)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (bool)neverShowsMenu;
- (void)requestRedraw;
- (void)saveToArchive:(struct TokenAttachmentArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { _Atomic int x_1_2_1; } x_4_1_1; } x4; struct UIGraphicalAttachment {} *x5; struct Reference {} *x6; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setActive:(bool)arg1;
- (void)setCachedImage:(struct CGImage { }*)arg1;
- (void)setCachedImageScreenScale:(double)arg1;
- (void)setExpressionNode:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setNeverShowsMenu:(bool)arg1;
- (void)setSelected:(bool)arg1;

@end
