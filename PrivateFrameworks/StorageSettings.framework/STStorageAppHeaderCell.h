/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StorageSettings.framework/StorageSettings
 */

@interface STStorageAppHeaderCell : PSTableCell {
    UIImageView * _appIconView;
    UIImageView * _cloudIconView;
    NSMutableArray * _constraints;
    bool  _infoHidden;
    UILabel * _infoLabel;
    bool  _isDemoted;
    UILabel * _titleLabel;
    UILabel * _vendorLabel;
}

@property (nonatomic, retain) UIImage *icon;
@property (nonatomic, retain) NSString *info;
@property (nonatomic) bool infoHidden;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSString *vendor;

+ (id)specifierForAppBundleURL:(id)arg1;
+ (id)specifierForAppIdentifier:(id)arg1;
+ (id)specifierForAppProxy:(id)arg1;
+ (id)specifierForStorageApp:(id)arg1;

- (void).cxx_destruct;
- (id)icon;
- (id)info;
- (bool)infoHidden;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setInfo:(id)arg1;
- (void)setInfoHidden:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setVendor:(id)arg1;
- (id)title;
- (void)updateConstraints;
- (id)vendor;

@end
