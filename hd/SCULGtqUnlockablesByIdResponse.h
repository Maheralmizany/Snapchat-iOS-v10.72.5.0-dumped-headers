//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, SCULLensResponse;

@interface SCULGtqUnlockablesByIdResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *gtqServeResponse; // @dynamic gtqServeResponse;
@property(nonatomic) _Bool hasLensResponse; // @dynamic hasLensResponse;
@property(retain, nonatomic) SCULLensResponse *lensResponse; // @dynamic lensResponse;

@end

