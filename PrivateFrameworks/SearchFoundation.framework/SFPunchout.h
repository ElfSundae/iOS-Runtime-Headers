/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFPunchout : NSObject <NSSecureCoding> {
    NSString * _bundleIdentifier;
    NSString * _label;
    NSString * _name;
    NSArray * _urls;
}

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) NSArray *urls;

+ (id)punchoutWithURL:(id)arg1;
+ (id)punchoutWithURLs:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (BOOL)canOpenURL:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)label;
- (id)name;
- (id)preferredOpenableURL;
- (void)setBundleIdentifier:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setName:(id)arg1;
- (void)setUrls:(id)arg1;
- (id)urls;

@end
