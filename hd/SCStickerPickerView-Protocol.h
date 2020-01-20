//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath, NSNumber, SCStickerPickerDataSourceUpdateHint;

@protocol SCStickerPickerView <NSObject>
- (void)animateViewsOutWithDuration:(double)arg1 completion:(void (^)(void))arg2;
- (void)animateViewsInWithDuration:(double)arg1 completion:(void (^)(void))arg2;
- (void)prepareToAnimateViewsInIfNeeded;
- (void)reloadDataWithDataSourceUpdateHint:(SCStickerPickerDataSourceUpdateHint *)arg1 shouldRefreshSuperCategoryIcons:(_Bool)arg2;
- (void)reloadDataWithDataSourceUpdateHint:(SCStickerPickerDataSourceUpdateHint *)arg1;
- (void)close;
- (void)openAtCategory:(NSIndexPath *)arg1 stickerOffset:(NSNumber *)arg2;
@end
