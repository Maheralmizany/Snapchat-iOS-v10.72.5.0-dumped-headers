//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class IMPUpdateString, NSString;

@interface IMPUpdateOfficialPersonalFriendmojiRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) IMPUpdateString *emoji; // @dynamic emoji;
@property(nonatomic) _Bool hasEmoji; // @dynamic hasEmoji;
@property(copy, nonatomic) NSString *userId; // @dynamic userId;

@end
