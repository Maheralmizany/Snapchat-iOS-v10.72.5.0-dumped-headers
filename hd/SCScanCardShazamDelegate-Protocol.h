//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCSongInfo, UIView;

@protocol SCScanCardShazamDelegate <NSObject>
- (void)shazamCardDidCancel;
- (void)shazamCardDidListenWithSongInfo:(SCSongInfo *)arg1;
- (void)shazamCardDidOpenShazamActionMenuWithSongInfo:(SCSongInfo *)arg1;
- (void)shazamCardDidSystemShareWithSongInfo:(SCSongInfo *)arg1;
- (void)shazamCardDidSendSnapWithSongInfo:(SCSongInfo *)arg1;
- (void)shazamCardDidOpenWebViewWithSongInfo:(SCSongInfo *)arg1 baseOperaView:(UIView *)arg2 fromView:(UIView *)arg3;
@end

