//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class SCFriendsFeedActiveMessageData, SCFriendsFeedConversationVersion;

@interface SCFriendsFeedVersionedActiveMessageData : NSObject <NSCopying>
{
    _Bool _syncRequired;
    SCFriendsFeedActiveMessageData *_activeMessageData;
    SCFriendsFeedConversationVersion *_conversationVersion;
}

@property(readonly, nonatomic) _Bool syncRequired; // @synthesize syncRequired=_syncRequired;
@property(readonly, copy, nonatomic) SCFriendsFeedConversationVersion *conversationVersion; // @synthesize conversationVersion=_conversationVersion;
@property(readonly, copy, nonatomic) SCFriendsFeedActiveMessageData *activeMessageData; // @synthesize activeMessageData=_activeMessageData;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithActiveMessageData:(id)arg1 conversationVersion:(id)arg2 syncRequired:(_Bool)arg3;

@end

