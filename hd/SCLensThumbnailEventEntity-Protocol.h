//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"

@class NSString;

@protocol SCLensThumbnailEventEntity <NSObject, NSCoding, NSCopying>
@property(readonly, nonatomic) double onScreenTimeTotal;
@property(readonly, nonatomic) double onScreenTimeNotReady;
@property(readonly, nonatomic) long long lensIndex;
@property(readonly, copy, nonatomic) NSString *lensId;
@end

