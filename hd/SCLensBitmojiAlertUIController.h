//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SCLensPopoverView, SCLoadingIndicatorView, UIButton, UIImageView, UILabel, UIView;

@interface SCLensBitmojiAlertUIController : NSObject
{
    UIView *_parentView;
    UIView *_lensContainer;
    SCLensPopoverView *_view;
    UIView *_contentView;
    UILabel *_promptMessageLabel;
    UIButton *_promptButton;
    UIImageView *_promptImageView;
    SCLoadingIndicatorView *_loadingIndicator;
    _Bool _isRunningAppearanceAnimation;
    _Bool _isRunningDismissalAnimation;
    id <SCLensBitmojiProvider> _lensBitmojiProvider;
    NSString *_lensId;
    id <SCLensBitmojiAlertLogger> _lensBitmojiAlertLogger;
    id <SCDownloadableContentManaging> _downloadableContentManager;
    _Bool _isShown;
    id <SCLensBitmojiAlertUIControllerDelegate> _delegate;
    double _bottomOffset;
}

@property(nonatomic) double bottomOffset; // @synthesize bottomOffset=_bottomOffset;
@property(nonatomic) __weak id <SCLensBitmojiAlertUIControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isShown; // @synthesize isShown=_isShown;
@property(readonly, nonatomic) UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)_linkBitmoji;
- (_Bool)pointInside:(struct CGPoint)arg1 view:(id)arg2;
- (void)hideAnimated:(_Bool)arg1;
- (void)showAnimated:(_Bool)arg1 lensId:(id)arg2;
- (void)_cleanupUI;
- (void)_setupAlert;
- (void)_setupContentView;
- (void)_setupView;
- (void)_setupUI;
- (id)initWithParentView:(id)arg1 lensContainer:(id)arg2 lensBitmojiProvider:(id)arg3 lensBitmojiAlertLogger:(id)arg4 downloadableContentManager:(id)arg5;

@end
