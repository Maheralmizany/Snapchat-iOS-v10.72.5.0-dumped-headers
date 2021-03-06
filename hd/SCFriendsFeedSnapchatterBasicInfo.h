//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface SCFriendsFeedSnapchatterBasicInfo : NSObject <NSCopying>
{
    NSString *_userID;
    NSString *_userName;
    NSString *_displayName;
    NSString *_bitmojiAvatarID;
    NSString *_bitmojiSelfieID;
}

@property(readonly, copy, nonatomic) NSString *bitmojiSelfieID; // @synthesize bitmojiSelfieID=_bitmojiSelfieID;
@property(readonly, copy, nonatomic) NSString *bitmojiAvatarID; // @synthesize bitmojiAvatarID=_bitmojiAvatarID;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(readonly, copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUserID:(id)arg1 userName:(id)arg2 displayName:(id)arg3 bitmojiAvatarID:(id)arg4 bitmojiSelfieID:(id)arg5;

@end

