//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCScanCardTableViewCell.h"

#import "SCScanCardDeepLinkProtocol.h"

@class NSString, SCAlertTitleView, SCExperimentManager, SCLoadingIndicatorView, SCScanCardButton, SCScanCardDeepLinkData, SCSessionRequestManager, SCUserProperties_DEPRECATED, UIActivityIndicatorView, UIButton, UIColor, UIImageView, UILabel, UIView;

@interface SCScanCardDiscoverDeepLink : SCScanCardTableViewCell <SCScanCardDeepLinkProtocol>
{
    SCScanCardDeepLinkData *_deepLinkData;
    SCAlertTitleView *_titleView;
    UILabel *_descriptionLabel;
    UIView *_headerBackgroundView;
    UIImageView *_imageView;
    SCScanCardButton *_openButton;
    SCScanCardButton *_subscribeButton;
    unsigned long long subscribeButtonStyle;
    UIButton *_cancelButton;
    UIButton *_shareButton;
    UIView *_secondaryHeader;
    NSString *_scanData;
    UIActivityIndicatorView *_buttonIndicator;
    SCLoadingIndicatorView *_subcribeLoadingIndicator;
    UIImageView *_subscribeFlagImageView;
    UIImageView *_subscribedCheckImageView;
    SCUserProperties_DEPRECATED *_deeplinkUserProperties;
    _Bool _hasSubscription;
    _Bool _dummyChannel;
    double _totalCardHeight;
    UIColor *_iconBackgroundColor;
    NSString *_scannableId;
    int _version;
    SCSessionRequestManager *_requestManager;
    SCExperimentManager *_experimentManager;
    id <SCScanCardDeepLinkDelegate> deepLinkDelegate;
}

@property(nonatomic) __weak id <SCScanCardDeepLinkDelegate> deepLinkDelegate; // @synthesize deepLinkDelegate;
- (void).cxx_destruct;
- (void)_updateSubscribeButtonImageAssetView;
- (void)_addSecondaryStyleButtons;
- (id)_subscribeButtonText;
- (_Bool)_hasSubscriptionForChannel:(id)arg1;
- (void)_saveStateArchivedChannel:(id)arg1 subscribed:(_Bool)arg2;
- (void)_updateCardHeight;
- (void)_cleanSubscribeButton;
- (void)_fetchDummyChannel;
- (void)_didTapSubscribeButton;
- (void)_didTapOpenButton;
- (void)_didTapShareButton;
- (void)_didTapCancelButton;
- (void)_didTapHeader;
- (void)_updatePreferredSize;
- (void)updateStyle;
- (void)transitionToContentAnimated:(_Bool)arg1;
- (void)loadData;
- (void)stopLoadingProgress;
- (id)deepLinkIcon;
- (struct CGRect)deepLinkIconFrame;
- (id)initWithDeepLinkActionData:(id)arg1 scanData:(id)arg2 scannableId:(id)arg3 version:(int)arg4 requestManager:(id)arg5 experimentManager:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

