//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCBoltContentDescriptor;

@interface SCBoltCreateFromReferenceResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCBoltContentDescriptor *contentDescriptor; // @dynamic contentDescriptor;
@property(copy, nonatomic) NSString *contentId; // @dynamic contentId;
@property(nonatomic) _Bool hasContentDescriptor; // @dynamic hasContentDescriptor;

@end

