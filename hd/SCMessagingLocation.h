//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class SCMessagingLocationCoordinates, SCMessagingLocationRequest;

@interface SCMessagingLocation : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCMessagingLocationCoordinates *coordinates; // @dynamic coordinates;
@property(readonly, nonatomic) int locationOneOfCase; // @dynamic locationOneOfCase;
@property(retain, nonatomic) SCMessagingLocationRequest *request; // @dynamic request;

@end

