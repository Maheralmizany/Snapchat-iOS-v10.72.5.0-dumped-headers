//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SCCommerceDiscountCodeViewController;

@protocol SCCommerceDiscountCodeViewControllerDelegate <NSObject>
- (void)commerceDiscountCodeViewController:(SCCommerceDiscountCodeViewController *)arg1 didRemoveDiscountCode:(NSString *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)commerceDiscountCodeViewController:(SCCommerceDiscountCodeViewController *)arg1 didAddDiscountCode:(NSString *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
@end
