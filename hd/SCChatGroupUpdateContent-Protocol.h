//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"

@class NSArray, NSString;

@protocol SCChatGroupUpdateContent <NSObject, NSCoding, NSCopying>
@property(readonly, nonatomic) long long type;
@property(readonly, copy, nonatomic) NSArray *modifiedParticipants;
@property(readonly, copy, nonatomic) NSString *groupName;
@property(readonly, copy, nonatomic) NSString *modifiedBy;
@end

