//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CADisplayLink, SCStickerPickerScrollPerformanceEvent;

@interface SCStickerPickerScrollPerformanceTracker : NSObject
{
    CADisplayLink *_displayLink;
    SCStickerPickerScrollPerformanceEvent *_currentEvent;
}

- (void).cxx_destruct;
- (void)_displayLinkDidFire:(id)arg1;
- (void)_finishEvent;
- (void)interrupt;
- (void)didEndDecelerating;
- (void)didEndDraggingAndWillDecelerate:(_Bool)arg1;
- (void)trackStickerPackID:(id)arg1;
- (void)willBeginScrolling;
- (void)dealloc;
- (id)initWithStickerCategoryType:(long long)arg1;

@end
