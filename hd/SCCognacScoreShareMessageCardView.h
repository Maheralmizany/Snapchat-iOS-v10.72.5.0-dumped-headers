//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SCCognacScoreShareMessageCardActionContainerViewDelegate.h"
#import "SCSendPreviewMediaView.h"
#import "UIGestureRecognizerDelegate.h"

@class NSString, SCCognacScoreShareMessageCardActionContainerView, SCCognacScoreShareMessageCardViewModel, SCGradientView, SCNetworkImageView, UILabel;

@interface SCCognacScoreShareMessageCardView : UIView <SCCognacScoreShareMessageCardActionContainerViewDelegate, UIGestureRecognizerDelegate, SCSendPreviewMediaView>
{
    UILabel *_titleLabel;
    SCGradientView *_backgroundGradientView;
    SCNetworkImageView *_coverImageView;
    SCNetworkImageView *_iconImageView;
    SCCognacScoreShareMessageCardActionContainerView *_actionContainerView;
    SCCognacScoreShareMessageCardViewModel *_viewModel;
    id <SCImageDownloading> _imageDownloader;
    id <SCCognacScoreShareMessageCardViewDelegate> _delegate;
}

@property(nonatomic) __weak id <SCCognacScoreShareMessageCardViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <SCImageDownloading> imageDownloader; // @synthesize imageDownloader=_imageDownloader;
@property(copy, nonatomic) SCCognacScoreShareMessageCardViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)didTapOnButtonInActionContainerView:(id)arg1;
- (void)_layoutIconImageSubview;
- (void)_layoutBackgroundGradientView;
- (void)layoutSubviews;
- (void)_cardPressed;
- (void)_initGesture;
- (void)_initActionContainerView;
- (void)_initIconImageView;
- (void)_initTitleLabel;
- (void)_initBackgroundGradientView;
- (void)_initCoverImageView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
