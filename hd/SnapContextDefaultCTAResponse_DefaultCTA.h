//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SnapContextCTAData;

@interface SnapContextDefaultCTAResponse_DefaultCTA : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int ctaContext; // @dynamic ctaContext;
@property(retain, nonatomic) SnapContextCTAData *ctaData; // @dynamic ctaData;
@property(copy, nonatomic) NSString *error; // @dynamic error;
@property(nonatomic) _Bool hasCtaData; // @dynamic hasCtaData;

@end

