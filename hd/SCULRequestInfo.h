//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCULRequestInfo_ScreenInfo;

@interface SCULRequestInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *acceptLanguage; // @dynamic acceptLanguage;
@property(copy, nonatomic) NSString *countryCodeTwoLetter; // @dynamic countryCodeTwoLetter;
@property(nonatomic) _Bool hasScreenInfo; // @dynamic hasScreenInfo;
@property(retain, nonatomic) SCULRequestInfo_ScreenInfo *screenInfo; // @dynamic screenInfo;
@property(copy, nonatomic) NSString *timeZoneId; // @dynamic timeZoneId;

@end

