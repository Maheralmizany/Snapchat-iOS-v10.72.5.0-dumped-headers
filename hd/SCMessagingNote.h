//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class SCMessagingAudioNote, SCMessagingVideoNote;

@interface SCMessagingNote : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCMessagingAudioNote *audio; // @dynamic audio;
@property(readonly, nonatomic) int noteOneOfCase; // @dynamic noteOneOfCase;
@property(retain, nonatomic) SCMessagingVideoNote *video; // @dynamic video;

@end

