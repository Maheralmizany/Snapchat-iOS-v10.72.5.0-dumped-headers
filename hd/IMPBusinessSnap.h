//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSString;

@interface IMPBusinessSnap : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *businessId; // @dynamic businessId;
@property(copy, nonatomic) NSString *posterUserId; // @dynamic posterUserId;
@property(copy, nonatomic) NSData *submittedStorySnapData; // @dynamic submittedStorySnapData;

@end

