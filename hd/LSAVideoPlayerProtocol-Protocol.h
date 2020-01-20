//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol LSAVideoPlayerProtocol <NSObject>
@property(readonly, nonatomic) NSString *filepath;
@property(readonly, nonatomic) struct CGAffineTransform preferredTransform;
@property(nonatomic) double volume;
@property(readonly, nonatomic) int playCount;
@property(readonly, nonatomic) _Bool isReady;
- (struct __CVBuffer *)copyNextFrame;
- (void)resume;
- (void)pause;
- (void)prepareWithRate:(float)arg1 loop:(_Bool)arg2;
@end
