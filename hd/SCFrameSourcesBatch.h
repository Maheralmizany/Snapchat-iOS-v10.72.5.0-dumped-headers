//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray;

@interface SCFrameSourcesBatch : NSObject
{
    NSMutableArray *_frameSources;
}

- (void).cxx_destruct;
- (void)_updateStartTimeOffsetFromIndex:(long long)arg1;
- (void)_updateAllStartTimeOffsets;
- (void)updateImageFrameSourceDuration:(CDStruct_1b6d18a9)arg1 atIndex:(long long)arg2;
- (id)sourceContainingItemTime:(CDStruct_1b6d18a9)arg1;
@property(readonly, nonatomic) NSArray *frameSources;
- (void)removeFrameSourceAtIndex:(long long)arg1;
- (id)initWithFrameSources:(id)arg1;

@end

