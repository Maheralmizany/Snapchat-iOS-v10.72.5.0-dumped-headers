//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray;

@interface SCChatGroupInviteJoinMessageViewModel : NSObject <NSCopying>
{
    NSArray *_joinedPersonDisplayFirstNames;
    NSArray *_joinedPersonBitmojiAvatarIds;
    double _height;
}

@property(readonly, nonatomic) double height; // @synthesize height=_height;
@property(readonly, copy, nonatomic) NSArray *joinedPersonBitmojiAvatarIds; // @synthesize joinedPersonBitmojiAvatarIds=_joinedPersonBitmojiAvatarIds;
@property(readonly, copy, nonatomic) NSArray *joinedPersonDisplayFirstNames; // @synthesize joinedPersonDisplayFirstNames=_joinedPersonDisplayFirstNames;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithJoinedPersonDisplayFirstNames:(id)arg1 joinedPersonBitmojiAvatarIds:(id)arg2 height:(double)arg3;

@end

