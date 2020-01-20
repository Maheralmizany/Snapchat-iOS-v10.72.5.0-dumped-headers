//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SCUnifiedSplitTextView, SCUnifiedSplitTextViewModel;

@interface SCUnifiedProfileIdentityTappableSubtitleView : UIView
{
    SCUnifiedSplitTextView *_foregroundSubtitleView;
    SCUnifiedSplitTextView *_backgroundSubtitleView;
    SCUnifiedSplitTextViewModel *_foregroundSubtitleViewModel;
    SCUnifiedSplitTextViewModel *_backgroundSubtitleViewModel;
    _Bool _isAnimating;
    id <SCLegacyItemDownloading> _infoFetcher;
}

+ (double)heightWithForegroundViewModel:(id)arg1 backgroundViewModel:(id)arg2;
@property(nonatomic) __weak id <SCLegacyItemDownloading> infoFetcher; // @synthesize infoFetcher=_infoFetcher;
- (void).cxx_destruct;
- (void)_handleForegroundTap:(id)arg1;
- (void)setForegroundViewModel:(id)arg1 backgroundViewModel:(id)arg2;
- (struct CGSize)intrinsicContentSize;
- (void)_layoutSubtitleSubview:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
