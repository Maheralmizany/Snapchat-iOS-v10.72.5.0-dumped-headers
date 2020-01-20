//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"

@class NSDate, NSNumber, NSString;

@protocol SCCacheKeyKindEntry <NSObject, NSCoding, NSCopying>
@property(readonly, nonatomic) _Bool isUnwrappedData;
@property(readonly, copy, nonatomic) NSNumber *referenceCount;
@property(readonly, copy, nonatomic) NSDate *expirationDate;
@property(readonly, copy, nonatomic) NSString *kind;
@property(readonly, copy, nonatomic) NSString *key;
@end

