/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPrintPanelViewController : NSObject <UIPrinterBrowserOwner> {
    BOOL  _animated;
    BOOL  _canShowColor;
    BOOL  _contentLargerThanRollPaper;
    BOOL  _dismissed;
    NSArray * _lastUsedPrinterArray;
    int  _lastUsedPrinterIndex;
    UINavigationController * _navigationController;
    BOOL  _observingRotation;
    UIViewController * _parentController;
    UIPopoverController * _poverController;
    id /* block */  _previewCompletionHandler;
    UIPrintInteractionController * _printInteractionController;
    PKPrinter * _printer;
    UIPrintPanelTableViewController * _tableViewController;
    UIWindow * _window;
}

@property (nonatomic) BOOL annotationsImaged;
@property (nonatomic, readonly) BOOL contentLargerThanRollPaper;
@property (nonatomic) int copies;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL duplex;
@property (nonatomic) BOOL grayscale;
@property (nonatomic, readonly) BOOL hasJobAccountID;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL isJobAccountIDRequired;
@property (nonatomic, retain) NSString *jobAccountID;
@property (retain) NSArray *lastUsedPrinterArray;
@property (nonatomic, readonly) int pageCount;
@property (nonatomic, retain) NSArray *pageRanges;
@property (nonatomic, retain) UIPrintPaper *paper;
@property (nonatomic, readonly) NSArray *paperList;
@property (nonatomic, retain) PKPrinter *printer;
@property (nonatomic) BOOL punch;
@property (nonatomic) BOOL scaleUpDocument;
@property (nonatomic, readonly) BOOL showAnnotationSwitch;
@property (nonatomic, readonly) BOOL showColor;
@property (nonatomic, readonly) BOOL showCopies;
@property (nonatomic, readonly) BOOL showDuplex;
@property (nonatomic, readonly) BOOL showJobAccountID;
@property (nonatomic, readonly) BOOL showMoreOptions;
@property (nonatomic, readonly) BOOL showPageRange;
@property (nonatomic, readonly) BOOL showPaper;
@property (nonatomic, readonly) BOOL showPaperSelection;
@property (nonatomic, readonly) BOOL showPreview;
@property (nonatomic, readonly) BOOL showPrinterWarning;
@property (nonatomic, readonly) BOOL showPunch;
@property (nonatomic, readonly) BOOL showScaleUp;
@property (nonatomic, readonly) BOOL showStaple;
@property (nonatomic) BOOL staple;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_keyWindowWillRotate:(id)arg1;
- (void)_presentInParentAnimated:(BOOL)arg1;
- (void)_presentWindow;
- (id)_removeRollsFrom:(id)arg1;
- (BOOL)annotationsImaged;
- (void)cancelPrinting;
- (BOOL)contentLargerThanRollPaper;
- (int)copies;
- (void)dealloc;
- (void)dismissAnimated:(BOOL)arg1;
- (void)dismissPrintPanel:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)duplex;
- (BOOL)filtersPrinters;
- (BOOL)grayscale;
- (BOOL)hasJobAccountID;
- (id)initWithPrintInterationController:(id)arg1 inParentController:(id)arg2;
- (BOOL)isJobAccountIDRequired;
- (id)jobAccountID;
- (id)lastUsedPrinterArray;
- (id)localizedPageRangeText;
- (void)lookupLastUsedPrinter;
- (int)pageCount;
- (id)pageRanges;
- (id)paper;
- (id)paperList;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)presentPrintPanelAnimated:(BOOL)arg1;
- (void)presentPrintPanelFromBarButtonItem:(id)arg1 animated:(BOOL)arg2;
- (void)presentPrintPanelFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inView:(id)arg2 animated:(BOOL)arg3;
- (void)printMoreOptionsViewDidDisappear;
- (void)printPanelDidDisappear;
- (void)printPaperViewDidDisappear;
- (void)printRangeViewDidDisappear;
- (id)printer;
- (void)printerBrowserViewDidDisappear;
- (BOOL)punch;
- (BOOL)scaleUpDocument;
- (void)setAnnotationsImaged:(BOOL)arg1;
- (void)setCopies:(int)arg1;
- (void)setDuplex:(BOOL)arg1;
- (void)setGrayscale:(BOOL)arg1;
- (void)setJobAccountID:(id)arg1;
- (void)setLastUsedPrinterArray:(id)arg1;
- (void)setPageRanges:(id)arg1;
- (void)setPaper:(id)arg1;
- (void)setPrinter:(id)arg1;
- (void)setPunch:(BOOL)arg1;
- (void)setScaleUpDocument:(BOOL)arg1;
- (void)setStaple:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (BOOL)showAnnotationSwitch;
- (BOOL)showColor;
- (BOOL)showCopies;
- (BOOL)showDuplex;
- (BOOL)showJobAccountID;
- (BOOL)showMoreOptions;
- (BOOL)showPageRange;
- (BOOL)showPaper;
- (BOOL)showPaperSelection;
- (BOOL)showPreview;
- (BOOL)showPrinterWarning;
- (BOOL)showPunch;
- (BOOL)showScaleUp;
- (BOOL)showStaple;
- (BOOL)staple;
- (void)startPrinting;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)testIfContentLargerThanRollPaper:(id)arg1;

@end
