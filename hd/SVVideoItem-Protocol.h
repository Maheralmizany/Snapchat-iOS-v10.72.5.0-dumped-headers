//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAsset, AVVideoComposition, NSURL;

@protocol SVVideoItem <NSObject>
@property(nonatomic) CDStruct_1b6d18a9 svLastPlaybackTime;
@property(nonatomic) __weak AVVideoComposition *svVideoComposition;
@property(nonatomic) __weak AVAsset *svAsset;
@property(readonly, nonatomic) NSURL *svURL;
@property(nonatomic) unsigned long long svDebugIndex;
@end

