/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADActionViewControllerManager : NSObject {
    NSMutableDictionary * _servingAdSpaces;
}

@property (nonatomic, retain) NSMutableDictionary *servingAdSpaces;

+ (id)sharedManager;

- (void)actionViewController:(id)arg1 dismissForIdentifier:(id)arg2;
- (void)cancelRequestForActionViewControllerForAdSpace:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)requestActionViewControllerForAdSpace:(id)arg1;
- (id)servingAdSpaces;
- (void)setServingAdSpaces:(id)arg1;

@end
