//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface IMPMoveBusinessProfileResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *businessAccountId; // @dynamic businessAccountId;
@property(copy, nonatomic) NSString *organizationId; // @dynamic organizationId;
@property(copy, nonatomic) NSString *previousBusinessAccountId; // @dynamic previousBusinessAccountId;
@property(copy, nonatomic) NSString *previousOrganizationId; // @dynamic previousOrganizationId;

@end
