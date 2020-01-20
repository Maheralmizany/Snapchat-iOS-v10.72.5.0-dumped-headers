//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIScrollView, UIViewController;

@protocol SCBloopsPickerAccessoryOutput <NSObject>
- (void)bloopsPickerControllerDidChangeData:(id <SCBloopsPickerAccessory>)arg1;
- (void)bloopsPickerController:(id <SCBloopsPickerAccessory>)arg1 didTapSendBloopWithMediaContentProvider:(id <SCBloopsChatMediaContentProvider>)arg2 gridIndex:(unsigned long long)arg3 fromFullscreen:(_Bool)arg4 dataSource:(id <SCBloopsPreviewsDataSource>)arg5;
- (UIViewController *)bloopsPickerFullscreenViewController:(id <SCBloopsPickerAccessory>)arg1;

@optional
- (void)bloopsPickerController:(id <SCBloopsPickerAccessory>)arg1 didOverridingMuteSwitch:(_Bool)arg2;
- (void)bloopsPickerScrollViewWillBeginDragging:(UIScrollView *)arg1 isHorizontalScrollDirection:(_Bool)arg2;
@end

