//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface SCLensSonicCreateAssetRefRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *assetId; // @dynamic assetId;
@property(copy, nonatomic) NSString *recipient; // @dynamic recipient;
@property(nonatomic) int recipientType; // @dynamic recipientType;

@end
