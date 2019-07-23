/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKActivityItemProvider : UIActivityItemProvider {
    NSData * _passData;
    NSString * _passOrganizationName;
    PKPassView * _passView;
}

- (void).cxx_destruct;
- (id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 suggestedSize:(struct CGSize { double x1; double x2; })arg3;
- (void)dealloc;
- (id)initWithPass:(id)arg1 andPassView:(id)arg2;
- (id)item;

@end
