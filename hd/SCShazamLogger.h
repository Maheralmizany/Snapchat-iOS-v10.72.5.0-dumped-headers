//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCShazamLogger : NSObject
{
}

+ (void)logMusicStreamTapWithSource:(long long)arg1 streamingService:(long long)arg2 songTitle:(id)arg3 artistName:(id)arg4;
+ (void)logMusicListenTapWithSource:(long long)arg1 songTitle:(id)arg2 artistName:(id)arg3;
+ (void)logMusicShareWithSource:(long long)arg1 songTitle:(id)arg2 artistName:(id)arg3;
+ (void)logMusicExternalBrowserOpenWithDestinationUrl:(id)arg1;
+ (void)logMusicHistoryOpen;
+ (void)logMusicViewerOpenWithSource:(long long)arg1 songTitle:(id)arg2 artistName:(id)arg3;
+ (void)logGeofilterCameraMusicDetectWithCameraOrientation:(long long)arg1 source:(long long)arg2 songTitle:(id)arg3 artistName:(id)arg4 filterGeolensId:(id)arg5 latency:(long long)arg6;
+ (void)logCameraMusicDetectWithCameraOrientation:(long long)arg1 source:(long long)arg2 songInfo:(id)arg3 latency:(long long)arg4 hasGeolens:(_Bool)arg5 filterLensId:(id)arg6;

@end

