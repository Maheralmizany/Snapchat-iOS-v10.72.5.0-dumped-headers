//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, SCULUnlockablesSnapInfo;

@interface SCULSnapInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(readonly, nonatomic) int dataOneOfCase; // @dynamic dataOneOfCase;
@property(retain, nonatomic) SCULUnlockablesSnapInfo *unlockablesSnapInfo; // @dynamic unlockablesSnapInfo;
@property(copy, nonatomic) NSData *unlockablesSnapInfoBytes; // @dynamic unlockablesSnapInfoBytes;

@end

