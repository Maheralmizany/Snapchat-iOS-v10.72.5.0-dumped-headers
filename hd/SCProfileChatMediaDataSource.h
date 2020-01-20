//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCEventAnnouncing.h"
#import "SCUpdateAnnouncing.h"
#import "SCUpdateListener.h"

@class NSSet, NSString, SCEventListenerAnnouncer, SCLazy, SCProfileArroyoChatMediaDataCoordinator, SCProfileChatMediaDataCoordinator, SCUpdateListenerAnnouncer;

@interface SCProfileChatMediaDataSource : NSObject <SCUpdateListener, SCUpdateAnnouncing, SCEventAnnouncing>
{
    NSString *_displayName;
    NSSet *_conversationParticipants;
    SCLazy *_usernameToParticipant;
    SCLazy *_userIdToParticipant;
    SCProfileChatMediaDataCoordinator *_dataCoordinator;
    SCProfileArroyoChatMediaDataCoordinator *_arroyoDataCoordinator;
    SCUpdateListenerAnnouncer *_updateAnnouncer;
    SCEventListenerAnnouncer *_eventAnnouncer;
    id <SCLegacyItemDownloading> _mediaDownloader;
    NSString *_ownerId;
    NSString *_conversationId;
}

+ (id)announcerIdentifier;
@property(readonly, copy, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
@property(readonly, copy, nonatomic) NSString *ownerId; // @synthesize ownerId=_ownerId;
@property(readonly, nonatomic) id <SCLegacyItemDownloading> mediaDownloader; // @synthesize mediaDownloader=_mediaDownloader;
- (void).cxx_destruct;
- (void)didUpdateWithAnnouncerIdentifier:(id)arg1;
- (void)_dispatchSavedInChatCardsUpdate;
- (void)deleteDataModel:(id)arg1;
- (void)unsaveDataModel:(id)arg1;
- (void)saveDataModel:(id)arg1;
- (void)fetchMoreSavedInChatMediaDataModels;
- (_Bool)hasUnloadedContent;
- (id)chatMediaDataModels;
- (_Bool)isArroyoChatMedia;
- (id)conversationParticipantByUserId:(id)arg1;
- (id)conversationParticipantByUsername:(id)arg1;
- (id)conversationParticipants;
- (id)displayName;
- (void)removeUpdateListener:(id)arg1;
- (void)addUpdateListener:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)initWithSessionUsername:(id)arg1 sessionRequestManager:(id)arg2 imageDownloader:(id)arg3 chatRequestManager:(id)arg4 ownerId:(id)arg5 conversationId:(id)arg6 conversationType:(long long)arg7 messageRetentionInMinutes:(id)arg8 displayName:(id)arg9 conversationParticipants:(id)arg10 chatMediaDataStore:(id)arg11 arroyoConversationIdsManager:(id)arg12 profileSavedMediaFetcher:(id)arg13;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
