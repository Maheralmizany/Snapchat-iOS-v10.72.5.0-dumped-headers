//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@interface SCACaptionCarouselSessionEnd : SCAUserTrackedEvent
{
}

- (void)setWithTag:(_Bool)arg1;
- (void)setWithCaptionResize:(_Bool)arg1;
- (void)setWithCaptionColorPick:(_Bool)arg1;
- (void)setWithCaption:(_Bool)arg1;
- (void)setTagSelectCount:(long long)arg1;
- (void)setTagModeFromTypingCount:(long long)arg1;
- (void)setTagModeFromStickerCount:(long long)arg1;
- (void)setTagModeFromButtonCount:(long long)arg1;
- (void)setCaptureSessionId:(id)arg1;
- (void)setCaptionViewList:(id)arg1;
- (void)setCaptionViewCount:(long long)arg1;
- (void)setCaptionFontLoadingDelay:(double)arg1;
- (void)setCaptionExitSource:(long long)arg1;
- (void)setCaptionAddTapPosition:(id)arg1;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end

