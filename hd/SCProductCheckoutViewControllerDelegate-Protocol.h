//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, SCCommerceReviewOrderViewController, SCProductCheckoutViewController;

@protocol SCProductCheckoutViewControllerDelegate <NSObject>
- (void)unlockItemsForSuccessfulCheckout:(NSArray *)arg1;

@optional
- (void)reviewOrderViewControllerDidCancel:(SCCommerceReviewOrderViewController *)arg1;
- (void)checkoutViewControllerCheckoutDidSucceed:(SCProductCheckoutViewController *)arg1;
@end

