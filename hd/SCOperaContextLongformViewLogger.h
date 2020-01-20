//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCOperaContextLongformViewLogger : NSObject
{
}

+ (id)sharedInstance;
- (void)logAdSubscriptionLongformWithContext:(id)arg1 params:(id)arg2 logger:(id)arg3 currentViewingSession:(id)arg4 isSubscribed:(_Bool)arg5;
- (void)logSubscriptionLongformWithContext:(id)arg1 params:(id)arg2 logger:(id)arg3 currentViewingSession:(id)arg4;
- (void)logStoreViewWithContext:(id)arg1 params:(id)arg2 logger:(id)arg3 currentViewingSession:(id)arg4;
- (void)logLongformVideoViewWithContext:(id)arg1 params:(id)arg2 startedWithCaptionOn:(_Bool)arg3 videoWithCaptionOnTimeViewedSeconds:(double)arg4 videoInLandscapeModeTimeViewedSeconds:(double)arg5 logger:(id)arg6 currentViewingSession:(id)arg7 videoRotationEnabled:(_Bool)arg8 videoRollMinDegree:(double)arg9 videoRollMaxDegree:(double)arg10;
- (void)logProductViewWithContext:(id)arg1 params:(id)arg2 logger:(id)arg3 currentViewingSession:(id)arg4;
- (void)logLongformCameraViewWithContext:(id)arg1 params:(id)arg2 logger:(id)arg3 currentViewingSession:(id)arg4;
- (void)logRemoteWebpageViewWithContext:(id)arg1 params:(id)arg2 logger:(id)arg3 currentViewingSession:(id)arg4 logAsDiscoverEvents:(_Bool)arg5 logAsStoryEvents:(_Bool)arg6;
- (void)logLocalWebpageViewWithContext:(id)arg1 params:(id)arg2 inlineVideosTotalTimeViewedSec:(double)arg3 inlineVideosViewedCount:(double)arg4 logger:(id)arg5 currentViewingSession:(id)arg6;

@end
