//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface SCSLIFeedBaseInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *pageSessionId; // @dynamic pageSessionId;
@property(nonatomic) int pageType; // @dynamic pageType;
@property(copy, nonatomic) NSString *pageTypeSpecific; // @dynamic pageTypeSpecific;
@property(nonatomic) int section; // @dynamic section;
@property(copy, nonatomic) NSString *sectionName; // @dynamic sectionName;
@property(nonatomic) int sectionPos; // @dynamic sectionPos;

@end

