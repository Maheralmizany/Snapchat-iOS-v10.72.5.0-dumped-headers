//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface SCPNAnalyzerResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *annotationsArray; // @dynamic annotationsArray;
@property(readonly, nonatomic) unsigned long long annotationsArray_Count; // @dynamic annotationsArray_Count;
@property(copy, nonatomic) NSString *version; // @dynamic version;

@end

