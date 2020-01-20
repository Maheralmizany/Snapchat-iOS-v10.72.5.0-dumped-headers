//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SCLoadingIndicatorView, UIButton;

@interface SCBitmojiLinkingView : UIView
{
    UIButton *_linkButton;
    SCLoadingIndicatorView *_loadingIndicator;
    id <SCBitmojiLinkingViewDelegate> _delegate;
}

+ (id)view:(id)arg1 downloadableContentManager:(id)arg2;
- (void).cxx_destruct;
- (id)_attributedLinkButtonTitle:(id)arg1;
- (void)setLinkButtonSelected:(_Bool)arg1;
- (void)linkButtonPressed;
- (id)takenToBitmojiAppLabel;
- (id)linkButton;
- (id)bitmojiIntroLabel;
- (void)initTeaserWithFrame:(struct CGRect)arg1 dowloadableContentManager:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 downloadableContentManager:(id)arg2;

@end
