//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, TCV3CognacParticipantState;

@interface TCV3CognacSessionState : NSObject
{
    TCV3CognacParticipantState *_localUser;
    NSDictionary *_participants;
}

+ (id)CognacSessionStateWithLocalUser:(id)arg1 participants:(id)arg2;
@property(readonly, nonatomic) NSDictionary *participants; // @synthesize participants=_participants;
@property(readonly, nonatomic) TCV3CognacParticipantState *localUser; // @synthesize localUser=_localUser;
- (void).cxx_destruct;
- (id)description;
- (id)initWithLocalUser:(id)arg1 participants:(id)arg2;

@end

