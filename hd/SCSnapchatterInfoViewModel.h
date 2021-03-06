//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class SCSnapchatterBasicInfoViewModel, SCSnapchatterChatInfoViewModel, SCSnapchatterFriendInfoViewModel;

@interface SCSnapchatterInfoViewModel : NSObject <NSCopying>
{
    unsigned long long _subtype;
    SCSnapchatterBasicInfoViewModel *_basic_basicInfoViewModel;
    SCSnapchatterFriendInfoViewModel *_friend_friendInfoViewModel;
    SCSnapchatterChatInfoViewModel *_chat_chatInfoViewModel;
}

+ (id)friendWithFriendInfoViewModel:(id)arg1;
+ (id)chatWithChatInfoViewModel:(id)arg1;
+ (id)basicWithBasicInfoViewModel:(id)arg1;
- (void).cxx_destruct;
- (void)matchBasic:(CDUnknownBlockType)arg1 friend:(CDUnknownBlockType)arg2 chat:(CDUnknownBlockType)arg3;
- (_Bool)isEqual:(id)arg1;
- (id)internalInit;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

