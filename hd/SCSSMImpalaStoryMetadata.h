//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SGTILink;

@interface SCSSMImpalaStoryMetadata : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *businessId; // @dynamic businessId;
@property(copy, nonatomic) NSString *businessLogoURL; // @dynamic businessLogoURL;
@property(copy, nonatomic) NSString *businessName; // @dynamic businessName;
@property(retain, nonatomic) SGTILink *businessProfileLink; // @dynamic businessProfileLink;
@property(copy, nonatomic) NSString *category; // @dynamic category;
@property(nonatomic) _Bool hasBusinessProfileLink; // @dynamic hasBusinessProfileLink;

@end
