//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class MLBMediaData, NSMutableArray;

@interface MLBMediaResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *availableMediaArray; // @dynamic availableMediaArray;
@property(readonly, nonatomic) unsigned long long availableMediaArray_Count; // @dynamic availableMediaArray_Count;
@property(nonatomic) _Bool hasMediaData; // @dynamic hasMediaData;
@property(retain, nonatomic) MLBMediaData *mediaData; // @dynamic mediaData;

@end
