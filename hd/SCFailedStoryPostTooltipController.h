//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCFailedStoryPostDelegate.h"
#import "SCStoriesModelUpdateListener.h"

@class NSString, SCFailedStoryPostBalloonView, SCScopedAccess, UIView;

@interface SCFailedStoryPostTooltipController : NSObject <SCStoriesModelUpdateListener, SCFailedStoryPostDelegate>
{
    UIView *_sourceView;
    SCFailedStoryPostBalloonView *_tooltipView;
    _Bool _tooltipDismissedBefore;
    SCScopedAccess *_scopedStories;
    id <SCFailedStoryPostTooltipDelegate> _delegate;
}

@property(nonatomic) __weak id <SCFailedStoryPostTooltipDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIView *tooltipView; // @synthesize tooltipView=_tooltipView;
- (void).cxx_destruct;
- (void)dimissButtonTapped:(id)arg1;
- (void)retryButtonTapped:(id)arg1;
- (void)_prepareViewWithFailedCount:(long long)arg1;
- (void)storiesModelDidUpdateWithParams:(id)arg1;
- (void)updateTooltipViewFrameWithSourceViewYOffset:(double)arg1;
- (void)markSeen;
- (id)initWithSourceView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

