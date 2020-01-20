//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SCButton, SCNetworkImageView, UIButton, UILabel, UITextView;

@interface SCLoginKitPrivacyView : UIView
{
    SCNetworkImageView *_snapKitIconsImageView;
    UILabel *_titleLabel;
    UITextView *_textView;
    UIButton *_privacyPolicyButton;
    SCButton *_continueButton;
    id <SCImageDownloading> _imageDownloader;
    id <SCLoginKitPrivacyViewDelegate> _delegate;
}

@property(nonatomic) __weak id <SCLoginKitPrivacyViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_didPressPrivacyPolicyButton;
- (void)_didPressContinueButton;
- (id)_snapKitIconsNetworkImage;
- (void)_initSnapKitIconsImageView;
- (void)_calculateHeightAndUpdateOffset;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 source:(unsigned long long)arg2 imageDownloader:(id)arg3;

@end

