//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"
#import "SOJUMessage.h"

@class NSNumber, NSString;

@protocol SOJUConversationMessageResponse <NSObject, NSCoding, NSCopying, SOJUMessage>
@property(readonly, copy, nonatomic) NSNumber *timestamp;
@property(readonly, copy, nonatomic) NSString *failureReason;
@property(readonly, copy, nonatomic) NSString *convId;
@property(readonly, copy, nonatomic) NSString *ackId;
@property(readonly, copy, nonatomic) NSNumber *success;
@property(readonly, copy, nonatomic) NSString *appEngineTarget;
@property(readonly, copy, nonatomic) NSString *idValue;
@property(readonly, copy, nonatomic) NSString *type;
@end
