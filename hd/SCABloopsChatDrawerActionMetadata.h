//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAMapSerializable.h"

@interface SCABloopsChatDrawerActionMetadata : SCAMapSerializable
{
}

- (void)prepareDictionary:(id)arg1;
- (void)setBloopsSearchConfigurationName:(id)arg1;
- (void)setBloopsPreviewsSeenString:(id)arg1;
- (void)setBloopsPreviewsSeen:(id)arg1;
- (void)setBloopsPreviewsRenderingStatus:(id)arg1;
- (void)setBloopsPresentedWithFriendsPhoto:(_Bool)arg1;
- (void)setBloopsFullscreensSeenString:(id)arg1;
- (void)setBloopsFullscreensSeen:(id)arg1;
- (void)setBloopsFullscreenRenderingStatus:(id)arg1;
- (void)setBloopsFirstPreviewAndFullscreenCodecParameters:(id)arg1;
- (void)setBloopsCategoriesSeen:(id)arg1;
- (void)setBloopsCacheSize:(long long)arg1;
- (void)setBloopsAveragePreviewResourcesDownloadingTime:(long long)arg1;
- (void)setBloopsAveragePreviewGenerationTime:(long long)arg1;
- (double)getPerEventSamplingRate;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end

