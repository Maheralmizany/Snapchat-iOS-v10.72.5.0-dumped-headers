//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSString, SCCommerceReviewOrderCardView;

@protocol SCCommerceReviewOrderCardViewDelegate
- (void)SCCommerceReviewOrderCardView:(SCCommerceReviewOrderCardView *)arg1 didClickQuantityForItem:(id <SCCommerceProductCheckoutLineItem>)arg2;
- (void)SCCommerceReviewOrderCardView:(SCCommerceReviewOrderCardView *)arg1 didRemoveItem:(id <SCCommerceProductCheckoutLineItem>)arg2;
- (void)SCCommerceReviewOrderCardView:(SCCommerceReviewOrderCardView *)arg1 didClickLink:(NSString *)arg2;
@end
