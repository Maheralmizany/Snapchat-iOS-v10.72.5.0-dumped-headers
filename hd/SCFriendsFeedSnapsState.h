//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, SCFriendsFeedSnapItem;

@interface SCFriendsFeedSnapsState : NSObject <NSCopying>
{
    _Bool _hasViewingOrUnopenedAudioSnap;
    long long _lastMessageTimestampInMs;
    SCFriendsFeedSnapItem *_lastSnapItem;
    SCFriendsFeedSnapItem *_lastReplayableSnapItem;
    NSArray *_earliestUnopenedSnapItems;
    NSArray *_playableSnapItems;
}

@property(readonly, copy, nonatomic) NSArray *playableSnapItems; // @synthesize playableSnapItems=_playableSnapItems;
@property(readonly, copy, nonatomic) NSArray *earliestUnopenedSnapItems; // @synthesize earliestUnopenedSnapItems=_earliestUnopenedSnapItems;
@property(readonly, copy, nonatomic) SCFriendsFeedSnapItem *lastReplayableSnapItem; // @synthesize lastReplayableSnapItem=_lastReplayableSnapItem;
@property(readonly, copy, nonatomic) SCFriendsFeedSnapItem *lastSnapItem; // @synthesize lastSnapItem=_lastSnapItem;
@property(readonly, nonatomic) _Bool hasViewingOrUnopenedAudioSnap; // @synthesize hasViewingOrUnopenedAudioSnap=_hasViewingOrUnopenedAudioSnap;
@property(readonly, nonatomic) long long lastMessageTimestampInMs; // @synthesize lastMessageTimestampInMs=_lastMessageTimestampInMs;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLastMessageTimestampInMs:(long long)arg1 hasViewingOrUnopenedAudioSnap:(_Bool)arg2 lastSnapItem:(id)arg3 lastReplayableSnapItem:(id)arg4 earliestUnopenedSnapItems:(id)arg5 playableSnapItems:(id)arg6;
- (id)xLogObjectInfo;

@end

