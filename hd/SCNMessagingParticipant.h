//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCNMessagingUUID;

@interface SCNMessagingParticipant : NSObject
{
    int _color;
    SCNMessagingUUID *_participantId;
}

+ (id)ParticipantWithParticipantId:(id)arg1 color:(int)arg2;
@property(readonly, nonatomic) int color; // @synthesize color=_color;
@property(readonly, nonatomic) SCNMessagingUUID *participantId; // @synthesize participantId=_participantId;
- (void).cxx_destruct;
- (id)description;
- (id)initWithParticipantId:(id)arg1 color:(int)arg2;

@end

