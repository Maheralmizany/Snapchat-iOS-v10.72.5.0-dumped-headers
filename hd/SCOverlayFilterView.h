//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCFilterView.h"

#import "SCTouchControllable.h"

@class NSString, SCFilterViewMetrics;

@interface SCOverlayFilterView : SCFilterView <SCTouchControllable>
{
    _Bool _isAnimated;
    SCFilterViewMetrics *_filterViewMetrics;
}

@property(nonatomic) _Bool isAnimated; // @synthesize isAnimated=_isAnimated;
@property(retain, nonatomic) SCFilterViewMetrics *filterViewMetrics; // @synthesize filterViewMetrics=_filterViewMetrics;
- (void).cxx_destruct;
- (void)pinch:(id)arg1;
- (void)rotation:(id)arg1;
- (void)pan:(id)arg1;
- (_Bool)shouldRespondToTouchControl:(id)arg1;
- (_Bool)shouldRespondToTap:(id)arg1;
- (void)tap:(id)arg1;
- (_Bool)hasImage;
- (void)drawScreenshotImageInCurrentContextWithRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 config:(id)arg2 userSession:(id)arg3;
- (id)displayName;
- (id)videoTrackedImages;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

