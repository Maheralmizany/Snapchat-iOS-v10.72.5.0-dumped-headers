//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"

@class NSString;

@protocol SCMapSnapMetadata <NSObject, NSCoding, NSCopying>
@property(readonly, nonatomic) double zoom;
@property(readonly, nonatomic) double lng;
@property(readonly, nonatomic) double lat;
@property(readonly, copy, nonatomic) NSString *displayText;
@property(readonly, copy, nonatomic) NSString *storySnapId;
@property(readonly, nonatomic) long long viewableStatus;
@end

