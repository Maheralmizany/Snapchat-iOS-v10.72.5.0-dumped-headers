//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCTimePickerItem, SCTimePickerViewController;

@protocol SCTimePickerViewControllerDelegate <NSObject>
- (void)timePickerViewControllerDidAppear:(SCTimePickerViewController *)arg1;
- (void)timePickerViewController:(SCTimePickerViewController *)arg1 didSelectTimeItem:(SCTimePickerItem *)arg2;
@end

