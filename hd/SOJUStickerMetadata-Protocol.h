//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"

@class NSArray, NSNumber, NSString;

@protocol SOJUStickerMetadata <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *boltContentUrl;
@property(readonly, copy, nonatomic) NSString *contentObject;
@property(readonly, copy, nonatomic) NSNumber *order;
@property(readonly, copy, nonatomic) NSNumber *uniqueId;
@property(readonly, copy, nonatomic) NSNumber *isAnimated;
@property(readonly, copy, nonatomic) NSArray *capabilities;
@property(readonly, copy, nonatomic) NSNumber *hasAlpha;
@property(readonly, copy, nonatomic) NSNumber *active;
@property(readonly, copy, nonatomic) NSNumber *priority;
@property(readonly, copy, nonatomic) NSString *mediaPath;
@property(readonly, copy, nonatomic) NSString *stickerType;
@property(readonly, copy, nonatomic) NSString *stickerId;
@end

