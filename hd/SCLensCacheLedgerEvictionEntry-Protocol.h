//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"

@class NSDate, SCLensCacheMetadata;

@protocol SCLensCacheLedgerEvictionEntry <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSDate *evictionDate;
@property(readonly, copy, nonatomic) SCLensCacheMetadata *metadata;
@end
