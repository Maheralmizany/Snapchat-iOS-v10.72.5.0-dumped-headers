//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, UIImage;

@protocol FLAnimatedImageGenerating <NSObject>
@property(readonly, nonatomic) unsigned long long count;
- (UIImage *)imageAtIndex:(unsigned long long)arg1;

@optional
- (id <FLAnimatedImageGeneratingRequest>)imageAtIndex:(unsigned long long)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2 resultHandler:(void (^)(UIImage *, _Bool))arg3;
@end

