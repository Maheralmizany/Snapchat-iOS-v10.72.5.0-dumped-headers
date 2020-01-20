//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SCUnifiedSplitTextViewModel;

@interface SCUnifiedSplitTextView : UIView
{
    SCUnifiedSplitTextViewModel *_viewModel;
    id <SCLegacyItemDownloading> _infoFetcher;
}

+ (double)heightWithViewModel:(id)arg1;
@property(nonatomic) __weak id <SCLegacyItemDownloading> infoFetcher; // @synthesize infoFetcher=_infoFetcher;
@property(retain, nonatomic) SCUnifiedSplitTextViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (double)_spacingToNextItemForSubviewIndex:(long long)arg1;
- (id)_adjustLinearLayoutFrames:(id)arg1 index:(unsigned long long)arg2 adjustedWidth:(double)arg3;
- (id)_framesForComponentViews;
- (void)_updateFetchedNetworkString:(id)arg1 textAttributes:(id)arg2 onView:(id)arg3 previousSeparator:(id)arg4;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;

@end

