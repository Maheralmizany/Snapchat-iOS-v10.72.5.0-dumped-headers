//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray;

@interface VLKLogResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasLogData; // @dynamic hasLogData;
@property(copy, nonatomic) NSData *logData; // @dynamic logData;
@property(retain, nonatomic) NSMutableArray *logFileMetadataArray; // @dynamic logFileMetadataArray;
@property(readonly, nonatomic) unsigned long long logFileMetadataArray_Count; // @dynamic logFileMetadataArray_Count;

@end

