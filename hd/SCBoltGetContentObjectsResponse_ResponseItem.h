//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData;

@interface SCBoltGetContentObjectsResponse_ResponseItem : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *contentObject; // @dynamic contentObject;
@property(nonatomic) int error; // @dynamic error;
@property(readonly, nonatomic) int resultKindOneOfCase; // @dynamic resultKindOneOfCase;

@end
