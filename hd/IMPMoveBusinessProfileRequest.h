//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface IMPMoveBusinessProfileRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *businessProfileId; // @dynamic businessProfileId;
@property(readonly, nonatomic) int businessProfileKeyOneOfCase; // @dynamic businessProfileKeyOneOfCase;
@property(copy, nonatomic) NSString *existingOrganizationId; // @dynamic existingOrganizationId;
@property(copy, nonatomic) NSString *newOrganizationName; // @dynamic newOrganizationName;
@property(readonly, nonatomic) int organizationInfoOneOfCase; // @dynamic organizationInfoOneOfCase;
@property(nonatomic) long long publisherId; // @dynamic publisherId;

@end

