//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCTChatPresencePillState : NSObject
{
    _Bool _fullscreen;
    _Bool _selected;
    _Bool _userPresent;
    unsigned long long _mode;
    long long _typingState;
}

+ (id)stateWithMode:(unsigned long long)arg1 fullscreen:(_Bool)arg2 selected:(_Bool)arg3 userPresent:(_Bool)arg4 typingState:(long long)arg5;
@property(readonly, nonatomic) long long typingState; // @synthesize typingState=_typingState;
@property(readonly, nonatomic) _Bool userPresent; // @synthesize userPresent=_userPresent;
@property(readonly, nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(readonly, nonatomic) _Bool fullscreen; // @synthesize fullscreen=_fullscreen;
@property(readonly, nonatomic) unsigned long long mode; // @synthesize mode=_mode;
- (_Bool)isEqual:(id)arg1;
- (id)stateByReplacingTypingState:(long long)arg1;
- (id)stateByReplacingUserPresence:(_Bool)arg1;
- (id)stateByReplacingSelected:(_Bool)arg1;
- (id)stateByReplacingFullscreen:(_Bool)arg1;
- (id)stateByReplacingMode:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool isTypingOrPaused;
- (id)initWithMode:(unsigned long long)arg1 fullscreen:(_Bool)arg2 selected:(_Bool)arg3 userPresent:(_Bool)arg4 typingState:(long long)arg5;

@end

