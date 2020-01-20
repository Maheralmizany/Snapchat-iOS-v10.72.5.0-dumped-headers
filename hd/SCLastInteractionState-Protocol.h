//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"

@class NSDate, NSString;

@protocol SCLastInteractionState <NSObject, NSCoding, NSCopying>
@property(readonly, nonatomic) long long lastViewInteractionType;
@property(readonly, copy, nonatomic) NSDate *lastChatViewTimestamp;
@property(readonly, copy, nonatomic) NSDate *lastChatSendTimestamp;
@property(readonly, copy, nonatomic) NSDate *lastSnapViewTimestamp;
@property(readonly, copy, nonatomic) NSDate *lastSnapSendTimestamp;
@property(readonly, copy, nonatomic) NSString *targetId;
@end

