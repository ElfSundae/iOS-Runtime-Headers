/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface TVMediaQueryEvaluator : NSObject {
    <TVMediaQueryEvaluatorDelegate> * _delegate;
    struct { 
        unsigned int respondsToEvaluate : 1; 
    }  _implFlags;
    IKViewElement * _templateElement;
    UIWindow * _window;
}

@property (nonatomic) <TVMediaQueryEvaluatorDelegate> *delegate;
@property (nonatomic, readonly, retain) IKViewElement *templateElement;
@property (nonatomic, readonly, retain) UIWindow *window;

+ (id)_mobileGestaltStringForKey:(struct __CFString { }*)arg1;
+ (id)_productType;
+ (id)evaluatorForTemplateElement:(id)arg1 inWindow:(id)arg2;

- (void).cxx_destruct;
- (BOOL)_evaluateAllMediaFeatureType:(id)arg1 withValue:(id)arg2;
- (BOOL)_evaluateDeviceFeatureType:(id)arg1 withValue:(id)arg2;
- (BOOL)_evaluateTemplateFeatureType:(id)arg1 withValue:(id)arg2;
- (id)delegate;
- (BOOL)evaluateMediaQuery:(id)arg1;
- (id)initWithTemplateElement:(id)arg1;
- (id)initWithTemplateElement:(id)arg1 inWindow:(id)arg2;
- (void)setDelegate:(id)arg1;
- (id)templateElement;
- (id)window;

@end
