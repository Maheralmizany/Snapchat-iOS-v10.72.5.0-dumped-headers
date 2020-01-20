//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIGestureRecognizer;

@protocol SCBlackCameraDetector <NSObject>
- (void)sessionDidRecreate;
- (void)sessionWillRecreate;
- (void)sessionRuntimeError;
- (void)capturePreviewDidBecomeVisible:(_Bool)arg1;
- (void)sessionDidChangeIsRunning:(_Bool)arg1;
- (void)sessionDidCommitConfiguration;
- (void)sessionWillCommitConfiguration;
- (void)sessionDidCallStopRunning;
- (void)sessionWillCallStopRunning;
- (void)sessionDidCallStartRunning;
- (void)sessionWillCallStartRunning;
- (void)onCameraViewVisibleWithTouch:(UIGestureRecognizer *)arg1;
- (void)onCameraViewVisible:(_Bool)arg1;
- (id)initWithTicketCreator:(id <SCManiphestTicketCreator>)arg1;
@end
