//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSString;

@interface SCAdsStoryAd : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *compositeCreativeId; // @dynamic compositeCreativeId;
@property(copy, nonatomic) NSString *placementId; // @dynamic placementId;
@property(nonatomic) _Bool shouldLoop; // @dynamic shouldLoop;
@property(copy, nonatomic) NSString *tileBaseURL; // @dynamic tileBaseURL;
@property(copy, nonatomic) NSString *tileHeadline; // @dynamic tileHeadline;
@property(copy, nonatomic) NSString *tileImageURLPostfix; // @dynamic tileImageURLPostfix;
@property(copy, nonatomic) NSString *tileLogoURLPostfix; // @dynamic tileLogoURLPostfix;

@end
