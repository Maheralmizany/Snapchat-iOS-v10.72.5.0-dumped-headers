//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCMTLocationFuzzingInfo;

@interface SCMTPipelineHeatmapSnap : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasLocationFuzzInfo; // @dynamic hasLocationFuzzInfo;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(nonatomic) double lat; // @dynamic lat;
@property(nonatomic) double lng; // @dynamic lng;
@property(retain, nonatomic) SCMTLocationFuzzingInfo *locationFuzzInfo; // @dynamic locationFuzzInfo;
@property(nonatomic) _Bool shouldFuzz; // @dynamic shouldFuzz;
@property(nonatomic) double timestamp; // @dynamic timestamp;
@property(copy, nonatomic) NSString *userId; // @dynamic userId;

@end

