//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL;

@protocol SPGifService <NSObject>
- (void)convertVideoWithURL:(NSURL *)arg1 targetURL:(NSURL *)arg2 withFPS:(double)arg3 completion:(void (^)(NSURL *, NSError *))arg4;
- (void)convertVideoWithURL:(NSURL *)arg1 targetURL:(NSURL *)arg2 withFPS:(double)arg3 progressBlock:(void (^)(double))arg4 completion:(void (^)(NSURL *, NSError *))arg5;
@end
