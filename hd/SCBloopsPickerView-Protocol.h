//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIView<SCBloopsPreviewsViewInput>;

@protocol SCBloopsPickerView <NSObject>
@property(readonly, nonatomic) UIView<SCBloopsPreviewsViewInput> *currentBloopsPreviewsView;
@property(nonatomic) __weak id <SCBloopsPickerViewDelegate> bloopsDelegate;
- (void)updateInsetsRespectToBloopsBottomBarHeight:(double)arg1;
@end

