/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MarkupUI.framework/MarkupUI
 */

@interface MUPDFView : UIView <MUPDFViewPlaceholderDelegate, UIGestureRecognizerDelegate, UIPDFPageViewDelegate> {
    UIColor *_backgroundColorForUnRenderedContent;
    NSMutableArray *_backingLayerImageViews;
    struct CGPDFDocument { } *_cgPDFDocument;
    struct CGPoint { 
        float x; 
        float y; 
    } _contentOffsetAtScrollStart;
    BOOL _delegateRespondsToDidScroll;
    UIPDFDocument *_document;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _documentBounds;
    NSString *_documentPassword;
    float _documentScale;
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    } _documentTransform;
    BOOL _hideActivityIndicatorForUnRenderedContent;
    BOOL _hidePageViewsUntilReadyToRender;
    int _ignoreContentOffsetChanges;
    float _initialZoomScale;
    NSArray *_pageMinYs;
    NSArray *_pageRects;
    NSMutableArray *_pageViews;
    NSObject<MUPDFViewDelegate> *_pdfDelegate;
    MUPDFViewPlaceholder *_pdfPlaceHolderView;
    BOOL _readyForSnapshot;
    BOOL _rotating;
    UITapGestureRecognizer *_tapGestureRecognizer;
    BOOL _zooming;
}

@property (nonatomic, retain) UIColor *backgroundColorForUnRenderedContent;
@property (nonatomic, readonly) struct CGPDFDocument { }*cgPDFDocument;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIPDFDocument *document;
@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } documentBounds;
@property (nonatomic, readonly) NSData *documentData;
@property (nonatomic, retain) NSString *documentPassword;
@property (nonatomic, readonly) float documentScale;
@property (nonatomic) struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; } documentTransform;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL hideActivityIndicatorForUnRenderedContent;
@property (nonatomic) BOOL hidePageViewsUntilReadyToRender;
@property (nonatomic) int ignoreContentOffsetChanges;
@property (nonatomic) float initialZoomScale;
@property (nonatomic, retain) NSArray *pageMinYs;
@property (nonatomic, retain) NSArray *pageRects;
@property (nonatomic) NSObject<MUPDFViewDelegate> *pdfDelegate;
@property (nonatomic) MUPDFViewPlaceholder *pdfPlaceHolderView;
@property (nonatomic) BOOL readyForSnapshot;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned int totalPages;

- (void).cxx_destruct;
- (id)_addPageAtIndex:(unsigned int)arg1;
- (void)_addSubViewsInViewCoordsBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)_checkIfDocumentNeedsUnlock;
- (void)_didScroll;
- (BOOL)_hasPageRects;
- (id)_installViewAtIndex:(int)arg1 inFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (unsigned int)_pageNumberForRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)_pageWithSelection;
- (void)_recreateUIPDFDocument;
- (void)_removeBackgroundImageObserverIfNeeded:(id)arg1;
- (void)_removePageViewsNotInViewCoordsRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)_selection;
- (void)_tapGestureRecognized:(id)arg1;
- (BOOL)_tryToUnlockDocumentWithPassword:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_viewCachingBoundsInUIViewCoords;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_viewportBoundsInUIVIewCoordsWithView:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_viewportBoundsInUIViewCoords;
- (id)backgroundColorForUnRenderedContent;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (struct CGPDFDocument { }*)cgPDFDocument;
- (void)clearSelection;
- (void)dealloc;
- (void)didCompleteLayout;
- (void)didReceiveMemoryWarning:(id)arg1;
- (void)didRotate:(id)arg1;
- (void)didZoom:(id)arg1;
- (id)document;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })documentBounds;
- (id)documentData;
- (id)documentPassword;
- (float)documentScale;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })documentTransform;
- (void)ensureCorrectPagesAreInstalled:(BOOL)arg1;
- (unsigned int)firstVisiblePageNumber;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)hideActivityIndicatorForUnRenderedContent;
- (BOOL)hidePageViewsUntilReadyToRender;
- (int)ignoreContentOffsetChanges;
- (id)imageForContactRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 onPageInViewRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 destinationRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (id)initWithMUPDFViewPlaceholder:(id)arg1;
- (float)initialZoomScale;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)pageMinYs;
- (id)pageRects;
- (void)pageWasRendered:(id)arg1;
- (id)pdfDelegate;
- (id)pdfPlaceHolderView;
- (void)prepareForSnapshot:(BOOL)arg1;
- (BOOL)readyForSnapshot;
- (void)resetZoom:(id)arg1;
- (void)setBackgroundColorForUnRenderedContent:(id)arg1;
- (void)setDocument:(id)arg1;
- (void)setDocumentBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setDocumentPassword:(id)arg1;
- (void)setDocumentTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (void)setHideActivityIndicatorForUnRenderedContent:(BOOL)arg1;
- (void)setHidePageViewsUntilReadyToRender:(BOOL)arg1;
- (void)setIgnoreContentOffsetChanges:(int)arg1;
- (void)setInitialZoomScale:(float)arg1;
- (void)setPageMinYs:(id)arg1;
- (void)setPageRects:(id)arg1;
- (void)setPdfDelegate:(id)arg1;
- (void)setPdfPlaceHolderView:(id)arg1;
- (void)setReadyForSnapshot:(BOOL)arg1;
- (void)snapshotComplete;
- (unsigned int)totalPages;
- (id)uiPDFDocument;
- (id)viewAtIndex:(int)arg1;
- (void)viewWillClose;
- (id)viewportView;
- (void)willRotate:(id)arg1;
- (void)willScroll:(id)arg1;
- (void)willZoom:(id)arg1;
- (void)zoom:(id)arg1 to:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 atPoint:(struct CGPoint { float x1; float x2; })arg3 kind:(int)arg4;

@end
