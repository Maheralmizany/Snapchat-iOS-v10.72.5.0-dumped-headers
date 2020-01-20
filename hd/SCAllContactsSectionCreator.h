//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCSearchSectionCreating.h"

@class NSString, SCInviteFriendStateTracker, SCLazy;

@interface SCAllContactsSectionCreator : NSObject <SCSearchSectionCreating>
{
    SCLazy *_snapchattersDataFetcher;
    SCLazy *_snapchattersDataTracker;
    SCLazy *_nonSnapchattersDataFetcher;
    SCInviteFriendStateTracker *_inviteFriendStateTracker;
    id <SCImageDownloading> _imageDownloader;
    id <SCLegacyItemDownloading> _labelInfoProvider;
    SCLazy *_storyPrivacySettingManager;
    id <SCActionHandling> _actionHandler;
    double _displayTimestamp;
    SCLazy *_addFriendsViewModelsDecorator;
}

- (void).cxx_destruct;
- (id)sectionForDescriptor:(id)arg1;
- (id)initWithSnapchattersDataFetcher:(id)arg1 snapchattersDataTracker:(id)arg2 nonSnapchattersDataFetcher:(id)arg3 inviteFriendStateTracker:(id)arg4 imageDownloader:(id)arg5 labelInfoProvider:(id)arg6 storyPrivacySettingManager:(id)arg7 actionHandler:(id)arg8 displayTimestamp:(double)arg9 addFriendsViewModelsDecorator:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
