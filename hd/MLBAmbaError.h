//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class MLBAmbaError_AmbaAssertError, MLBAmbaError_AmbaCpuException, MLBLinuxCrash;

@interface MLBAmbaError : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) MLBAmbaError_AmbaAssertError *ambaAssert; // @dynamic ambaAssert;
@property(retain, nonatomic) MLBAmbaError_AmbaCpuException *ambaException; // @dynamic ambaException;
@property(nonatomic) _Bool hasAmbaAssert; // @dynamic hasAmbaAssert;
@property(nonatomic) _Bool hasAmbaException; // @dynamic hasAmbaException;
@property(nonatomic) _Bool hasLinuxCrash; // @dynamic hasLinuxCrash;
@property(retain, nonatomic) MLBLinuxCrash *linuxCrash; // @dynamic linuxCrash;

@end
