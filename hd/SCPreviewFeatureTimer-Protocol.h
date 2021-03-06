//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class SCPreviewToolbarTimerButtonItem;

@protocol SCPreviewFeatureTimer
@property(nonatomic) __weak id <SCPreviewFeatureTimerDelegate><SCPreviewFeatureParentViewControllerAccessing> delegate;
- (double)imageDuration;
- (_Bool)isTimerInfinite;
- (_Bool)dismissVideoTimerAuxiliaryViews;
- (void)updateForVideoTimerItem;
- (void)updateForImageTimerItem:(_Bool)arg1 showInfinity:(_Bool)arg2;
- (void)updateForImageTimerItem:(_Bool)arg1;
- (SCPreviewToolbarTimerButtonItem *)createTimerToolBarButtonItemWithTarget:(id)arg1 selector:(SEL)arg2;
- (_Bool)isTimePickerVisible;
@end

