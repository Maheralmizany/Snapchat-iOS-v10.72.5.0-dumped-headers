//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"
#import "SOJUAuthPayload.h"

@class NSNumber, NSString;

@protocol SOJUPublicStoriesRequest <NSObject, NSCoding, NSCopying, SOJUAuthPayload>
@property(readonly, copy, nonatomic) NSNumber *screenHeightPx;
@property(readonly, copy, nonatomic) NSNumber *screenWidthPx;
@property(readonly, copy, nonatomic) NSNumber *screenHeightIn;
@property(readonly, copy, nonatomic) NSNumber *screenWidthIn;
@property(readonly, copy, nonatomic) NSString *sharedId;
@property(readonly, copy, nonatomic) NSString *username;
@property(readonly, copy, nonatomic) NSString *reqToken;
@property(readonly, copy, nonatomic) NSString *timestamp;
@end

