//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCCommerceOrder, SCScanProductOrderMessage;

@protocol SCScanProductOrderMessageDelegate <NSObject>
- (void)scanProductOrderMessageDidTapDismiss:(SCScanProductOrderMessage *)arg1;
- (void)scanProductOrderMessageDidTapViewReceipt:(SCScanProductOrderMessage *)arg1 order:(SCCommerceOrder *)arg2;
@end
