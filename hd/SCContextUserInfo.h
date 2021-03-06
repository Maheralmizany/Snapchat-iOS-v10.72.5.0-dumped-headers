//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCComposerMarshallableObject.h"

@class NSNumber, NSString, SCContextSnapProInfo;

@interface SCContextUserInfo : SCComposerMarshallableObject
{
    NSString *_username;
    NSString *_userId;
    NSString *_displayName;
    NSString *_bitmojiAvatarId;
    NSString *_bitmojiSelfieId;
    NSNumber *_isPopular;
    NSString *_emoji;
    NSNumber *_hasOfficialBadge;
    SCContextSnapProInfo *_snapProInfo;
    NSNumber *_isAdded;
    NSString *_addFriendSource;
}

@property(copy, nonatomic) NSString *addFriendSource; // @synthesize addFriendSource=_addFriendSource;
@property(retain, nonatomic) NSNumber *isAdded; // @synthesize isAdded=_isAdded;
@property(retain, nonatomic) SCContextSnapProInfo *snapProInfo; // @synthesize snapProInfo=_snapProInfo;
@property(retain, nonatomic) NSNumber *hasOfficialBadge; // @synthesize hasOfficialBadge=_hasOfficialBadge;
@property(copy, nonatomic) NSString *emoji; // @synthesize emoji=_emoji;
@property(retain, nonatomic) NSNumber *isPopular; // @synthesize isPopular=_isPopular;
@property(copy, nonatomic) NSString *bitmojiSelfieId; // @synthesize bitmojiSelfieId=_bitmojiSelfieId;
@property(copy, nonatomic) NSString *bitmojiAvatarId; // @synthesize bitmojiAvatarId=_bitmojiAvatarId;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (void).cxx_destruct;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
- (id)initWithUsername:(id)arg1 userId:(id)arg2 displayName:(id)arg3 bitmojiAvatarId:(id)arg4 bitmojiSelfieId:(id)arg5 isPopular:(id)arg6 emoji:(id)arg7 hasOfficialBadge:(id)arg8 snapProInfo:(id)arg9 addFriendSource:(id)arg10;
- (id)initWithUsername:(id)arg1 userId:(id)arg2 displayName:(id)arg3 bitmojiAvatarId:(id)arg4 bitmojiSelfieId:(id)arg5 isPopular:(id)arg6 emoji:(id)arg7 hasOfficialBadge:(id)arg8 snapProInfo:(id)arg9 isAdded:(id)arg10 addFriendSource:(id)arg11;

@end

