//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBAny, NSMutableArray, NSString, SCSSRVResultSource;

@interface SCSSRVQueryResult : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *deeplinkURL; // @dynamic deeplinkURL;
@property(nonatomic) _Bool hasSource; // @dynamic hasSource;
@property(nonatomic) _Bool hasVendorSpecificData; // @dynamic hasVendorSpecificData;
@property(nonatomic) long long numResults; // @dynamic numResults;
@property(copy, nonatomic) NSString *query; // @dynamic query;
@property(retain, nonatomic) NSMutableArray *sampleResultsArray; // @dynamic sampleResultsArray;
@property(readonly, nonatomic) unsigned long long sampleResultsArray_Count; // @dynamic sampleResultsArray_Count;
@property(retain, nonatomic) SCSSRVResultSource *source; // @dynamic source;
@property(retain, nonatomic) GPBAny *vendorSpecificData; // @dynamic vendorSpecificData;

@end

