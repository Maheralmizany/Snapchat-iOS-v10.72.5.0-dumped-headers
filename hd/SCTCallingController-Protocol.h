//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol SCTCallingController <NSObject>
- (_Bool)isFullscreen;
- (void)muteLocalUserMedia:(unsigned long long)arg1;
- (void)unmuteRemoteAudioIfNeeded;
- (void)dismissCall;
- (_Bool)startCall:(unsigned long long)arg1;
- (void)updatePublishedMedia:(unsigned long long)arg1;
@end

