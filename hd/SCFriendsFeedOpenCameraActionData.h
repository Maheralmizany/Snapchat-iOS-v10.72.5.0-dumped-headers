//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface SCFriendsFeedOpenCameraActionData : NSObject <NSCopying>
{
    _Bool _isBirthday;
    _Bool _isDoubleTap;
    _Bool _isGroupChat;
    NSString *_conversationId;
    NSString *_displayName;
    unsigned long long _source;
}

@property(readonly, nonatomic) unsigned long long source; // @synthesize source=_source;
@property(readonly, nonatomic) _Bool isGroupChat; // @synthesize isGroupChat=_isGroupChat;
@property(readonly, nonatomic) _Bool isDoubleTap; // @synthesize isDoubleTap=_isDoubleTap;
@property(readonly, nonatomic) _Bool isBirthday; // @synthesize isBirthday=_isBirthday;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithConversationId:(id)arg1 displayName:(id)arg2 isBirthday:(_Bool)arg3 isDoubleTap:(_Bool)arg4 isGroupChat:(_Bool)arg5 source:(unsigned long long)arg6;

@end
