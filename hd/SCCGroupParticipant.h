//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCComposerMarshallableObject.h"

@class NSString, SCCBitmojiInfo;

@interface SCCGroupParticipant : SCComposerMarshallableObject
{
    NSString *_userId;
    NSString *_username;
    NSString *_displayName;
    SCCBitmojiInfo *_bitmojiInfo;
}

@property(retain, nonatomic) SCCBitmojiInfo *bitmojiInfo; // @synthesize bitmojiInfo=_bitmojiInfo;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
- (id)initWithUserId:(id)arg1 username:(id)arg2 displayName:(id)arg3 bitmojiInfo:(id)arg4;
- (id)initWithSCChatGroupParticipant:(id)arg1;

@end
