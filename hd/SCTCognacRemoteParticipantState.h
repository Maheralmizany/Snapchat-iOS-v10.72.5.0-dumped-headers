//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCTParticipantState.h"

@class TCV3CognacParticipantState;

@interface SCTCognacRemoteParticipantState : SCTParticipantState
{
    TCV3CognacParticipantState *_cognacCoreParticipantState;
    _Bool _present;
    _Bool _speaking;
    long long _publishedMedia;
}

@property(readonly, nonatomic) _Bool speaking; // @synthesize speaking=_speaking;
@property(readonly, nonatomic) long long publishedMedia; // @synthesize publishedMedia=_publishedMedia;
@property(readonly, nonatomic) _Bool present; // @synthesize present=_present;
- (void).cxx_destruct;
- (id)description;
- (id)initWithUsername:(id)arg1 displayName:(id)arg2 presenceColor:(id)arg3 bitmojiAvatarId:(id)arg4 present:(_Bool)arg5 publishedMedia:(long long)arg6 speaking:(_Bool)arg7;
- (unsigned long long)presenceAudioStatus;

@end

