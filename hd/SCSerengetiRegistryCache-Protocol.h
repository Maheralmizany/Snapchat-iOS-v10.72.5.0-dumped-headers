//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"

@class NSDate, NSString, SGTIGetRegistryResponse;

@protocol SCSerengetiRegistryCache <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *registryId;
@property(readonly, copy, nonatomic) NSDate *fetchDate;
@property(readonly, copy, nonatomic) SGTIGetRegistryResponse *cachedResponse;
@end

