//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDate, NSOrderedSet, NSString;

@interface SCSelectionGroup : NSObject <NSCopying>
{
    NSString *_groupId;
    NSString *_groupName;
    NSString *_title;
    NSString *_subtitle;
    NSOrderedSet *_lastSenderUserIds;
    NSOrderedSet *_orderedParticipants;
    NSDate *_lastInteractionTimestamp;
}

@property(readonly, copy, nonatomic) NSDate *lastInteractionTimestamp; // @synthesize lastInteractionTimestamp=_lastInteractionTimestamp;
@property(readonly, copy, nonatomic) NSOrderedSet *orderedParticipants; // @synthesize orderedParticipants=_orderedParticipants;
@property(readonly, copy, nonatomic) NSOrderedSet *lastSenderUserIds; // @synthesize lastSenderUserIds=_lastSenderUserIds;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(readonly, copy, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithGroupId:(id)arg1 groupName:(id)arg2 title:(id)arg3 subtitle:(id)arg4 lastSenderUserIds:(id)arg5 orderedParticipants:(id)arg6 lastInteractionTimestamp:(id)arg7;

@end
