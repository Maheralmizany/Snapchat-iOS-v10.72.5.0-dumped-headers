//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"

@class NSNumber, NSString;

@protocol SOJULensResource <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSNumber *algorithmVersion;
@property(readonly, copy, nonatomic) NSNumber *lastUpdated;
@property(readonly, copy, nonatomic) NSString *signature;
@property(readonly, copy, nonatomic) NSString *checksum;
@property(readonly, copy, nonatomic) NSString *archiveLink;
@property(readonly, copy, nonatomic) NSString *quality;
@property(readonly, copy, nonatomic) NSString *resourceType;
@end
