/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class UIActivityIndicatorView, UIImageView, UILabel, UIButton, UITableView, UIImage, NSString, UIFont, NSArray;

@interface GKContentView : UIView  {
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    UIImageView *_iconView;
    UIButton *_cancelButton;
    UIButton *_otherButton;
    UITableView *_table;
    UIImageView *_tableWellView;
    NSArray *_connectionButtons;
    UIActivityIndicatorView *_activityIndicator;
    BOOL _needsLayout;
}

@property NSString * title;
@property NSString * message;
@property UIImage * icon;
@property(retain) UIButton * cancelButton;
@property(retain) UIButton * otherButton;
@property(readonly) NSArray * connectionButtons;
@property(readonly) UITableView * table;
@property int numberOfTitleLines;
@property int numberOfMessageLines;
@property(readonly) UIFont * titleFont;
@property(readonly) UIFont * messageFont;
@property(retain) UIActivityIndicatorView * activityIndicator;
@property(retain) UILabel * titleLabel;
@property(retain) UILabel * messageLabel;
@property(retain) UIImageView * iconView;

+ (float)maxTextWidth;

- (void)setIconView:(id)arg1;
- (id)iconView;
- (void)setMessageLabel:(id)arg1;
- (id)messageLabel;
- (void)setActivityIndicator:(id)arg1;
- (id)activityIndicator;
- (id)connectionButtons;
- (void)showActivityIndicator:(BOOL)arg1;
- (void)setNumberOfMessageLines:(int)arg1;
- (int)numberOfMessageLines;
- (void)setNumberOfTitleLines:(int)arg1;
- (int)numberOfTitleLines;
- (id)icon;
- (void)setConnectionButtonTypes:(unsigned int)arg1;
- (id)initWithTitle:(id)arg1 message:(id)arg2 icon:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitle:(id)arg5;
- (id)otherButton;
- (void)setOtherButton:(id)arg1;
- (id)_createButton:(BOOL)arg1;
- (id)messageFont;
- (void)_createMessageLabelIfNeeded;
- (id)_createConnectionButtonWithType:(unsigned int)arg1;
- (void)_createOtherButtonWithTitle:(id)arg1;
- (void)_createCancelButtonWithTitle:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)dealloc;
- (id)titleFont;
- (id)message;
- (void)_createTitleLabelIfNeeded;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)layout;
- (id)table;
- (void)setIcon:(id)arg1;
- (id)title;
- (void)layoutIfNeeded;
- (void)setTitle:(id)arg1;
- (id)titleLabel;

@end