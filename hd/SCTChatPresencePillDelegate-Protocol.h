//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SCTChatPresencePill, SCTV3RemoteVideoView, UIColor, UIView;

@protocol SCTChatPresencePillDelegate <NSObject>
- (id <SCTPresenceBitmoji>)bitmojiForPresencePill:(SCTChatPresencePill *)arg1;
- (SCTV3RemoteVideoView *)videoViewForPresencePill:(SCTChatPresencePill *)arg1;
- (UIView *)audioViewForPresencePill:(SCTChatPresencePill *)arg1;
- (UIColor *)colorForPresencePill:(SCTChatPresencePill *)arg1;
- (NSString *)labelTextForPresencePill:(SCTChatPresencePill *)arg1;
@end

