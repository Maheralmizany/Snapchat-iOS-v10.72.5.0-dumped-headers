//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SnapBrainResponse_Results_AudioFingerprint;

@interface SASTrack : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SnapBrainResponse_Results_AudioFingerprint *audioFingerprint; // @dynamic audioFingerprint;
@property(nonatomic) _Bool hasAudioFingerprint; // @dynamic hasAudioFingerprint;
@property(copy, nonatomic) NSString *trackId; // @dynamic trackId;

@end
