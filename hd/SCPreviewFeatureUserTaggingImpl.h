//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCFeature.h"

#import "SCPreviewFeatureUserTagging.h"

@class SCPreviewConfiguration, SCUserSession;

@interface SCPreviewFeatureUserTaggingImpl : SCFeature <SCPreviewFeatureUserTagging>
{
    SCUserSession *_userSession;
    SCPreviewConfiguration *_configuration;
    id <SCUserTaggingFriendsProvider> _userTaggingFriendsProvider;
}

- (void).cxx_destruct;
- (id)staticCaptionWithUserTagPositionsFromCaptions:(id)arg1;
- (long long)captionCarouselUserTagCountFromCaptions:(id)arg1;
- (id)allNotifiedUsernamesfromCaptionStates:(id)arg1 andStickerStates:(id)arg2;
- (id)_userTaggingInfoFromStickerStates:(id)arg1;
- (id)_userTaggingInfoFromCaptionStates:(id)arg1;
- (id)userTaggingInfoFromCaptionStates:(id)arg1 andStickerStates:(id)arg2;
- (_Bool)shouldEnableUserTaggingButton;
- (_Bool)shouldEnableUserTagging;
- (id)initWithUserSession:(id)arg1 previewConfiguration:(id)arg2 userTaggingFriendsProvider:(id)arg3;

@end

