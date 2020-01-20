//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCStoriesOperaParser : NSObject
{
}

+ (_Bool)_isAdContentLooping:(id)arg1;
+ (id)_pagePropertiesForReplyOnStoryWithSender:(id)arg1 mediaType:(long long)arg2 experimentManager:(id)arg3 pageProperties:(id)arg4;
+ (id)_pagePropertiesForSnappablesWithLensId:(id)arg1 sender:(id)arg2 pageProperties:(id)arg3;
+ (id)_pagePropertiesForSnap3DWithMessage:(id)arg1 pageProperties:(id)arg2;
+ (id)_pagePropertiesForLensMetadata:(id)arg1 sender:(id)arg2 pageProperties:(id)arg3;
+ (id)pagePropertiesForLensMetadataMessage:(id)arg1 sender:(id)arg2 pageProperties:(id)arg3;
+ (id)errorPropertiesForError:(id)arg1 pageProperties:(id)arg2;
+ (id)_loadingPagePropertiesForPageProperties:(id)arg1 userSession:(id)arg2 error:(id)arg3;
+ (id)_sharedPropertiesForAdStory:(id)arg1 section:(id)arg2 friendStories:(id)arg3 userSession:(id)arg4;
+ (id)_pagePropertiesForShareableStorySnap:(id)arg1 storiesPlaybackSequence:(id)arg2 customStoryMetadata:(id)arg3 pageProperties:(id)arg4 experimentManager:(id)arg5 viewLocation:(long long)arg6 userSession:(id)arg7;
+ (id)_pagePropertiesForSpectaclesStorySnap;
+ (id)_pagePropertiesForVideoStorySnap:(id)arg1;
+ (id)_sharedPagePropertiesForStorySnap:(id)arg1 storiesPlaybackSequence:(id)arg2 customStoryMetadata:(id)arg3 viewLocation:(long long)arg4 viewLocationPos:(long long)arg5 userSession:(id)arg6 mediaManager:(id)arg7 chromeAvatarProvider:(id)arg8 groupChatTitleProvider:(id)arg9 currentUserId:(id)arg10 currentUsername:(id)arg11;
+ (id)pagesPropertiesForStorySnap:(id)arg1 storiesPlaybackSequence:(id)arg2 customStoryMetadata:(id)arg3 error:(id)arg4 userSession:(id)arg5 viewLocation:(long long)arg6 viewLocationPos:(long long)arg7 mediaManager:(id)arg8 storiesMediaCoordinator:(id)arg9 chromeAvatarProvider:(id)arg10 groupChatTitleProvider:(id)arg11 currentUserId:(id)arg12 currentUsername:(id)arg13;

@end

