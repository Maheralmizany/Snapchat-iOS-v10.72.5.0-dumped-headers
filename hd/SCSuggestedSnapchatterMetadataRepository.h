//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCSuggestedSnapchatterSyncRepository.h"

@class NSDate, NSNumber, SCDocObjectContext, SCSnapchattersDeltaSyncMetadataObserver;

@interface SCSuggestedSnapchatterMetadataRepository : NSObject <SCSuggestedSnapchatterSyncRepository>
{
    SCDocObjectContext *_docObjectContext;
    id <SCSnapchatterUserInfoMutator> _userInfoMutator;
    id <SCViewedIncomingFriendsTracker> _incomingFriendsTracker;
    SCSnapchattersDeltaSyncMetadataObserver *_deltaIncomingFriendSyncMetadataObserver;
    SCSnapchattersDeltaSyncMetadataObserver *_deltaSuggestionSyncMetadataObserver;
    long long _deltaSuggestionSyncMetadataObserverOnceToken;
}

- (void).cxx_destruct;
- (void)updateWithRegistrationSuggestionPagePosition:(long long)arg1;
- (void)setLastFindFriendsFullSyncTimestamp:(id)arg1;
- (void)setShouldShowQuickAddUnit:(_Bool)arg1;
@property(readonly, copy, nonatomic) NSDate *suggestedSnapchatterLastSyncTimestamp;
@property(readonly, copy, nonatomic) NSNumber *suggestedSnapchatterSyncVersion;
- (id)initWithDocObjectContext:(id)arg1 userInfoMutator:(id)arg2 incomingFriendsTracker:(id)arg3;

@end
