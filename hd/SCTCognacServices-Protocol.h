//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSString, UIView;

@protocol SCTCognacServices <NSObject>
- (void)handleAudioPublishStateChange:(_Bool)arg1 localSpeaking:(_Bool)arg2 remotePublished:(_Bool)arg3;
- (void)handleMessage:(NSData *)arg1 fromUser:(NSString *)arg2;
- (void)handleConnectivityChange:(_Bool)arg1;
- (void)handlePresencePositionChange:(NSDictionary *)arg1;
- (void)detachPresenceBar;
- (void)attachPresenceBar:(UIView *)arg1;
@end

