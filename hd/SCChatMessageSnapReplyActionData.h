//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface SCChatMessageSnapReplyActionData : NSObject <NSCopying>
{
    _Bool _isBirthday;
    _Bool _isGroupConversation;
    NSString *_replyId;
    NSString *_displayName;
}

@property(readonly, nonatomic) _Bool isGroupConversation; // @synthesize isGroupConversation=_isGroupConversation;
@property(readonly, nonatomic) _Bool isBirthday; // @synthesize isBirthday=_isBirthday;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy, nonatomic) NSString *replyId; // @synthesize replyId=_replyId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithReplyId:(id)arg1 displayName:(id)arg2 isBirthday:(_Bool)arg3 isGroupConversation:(_Bool)arg4;

@end
