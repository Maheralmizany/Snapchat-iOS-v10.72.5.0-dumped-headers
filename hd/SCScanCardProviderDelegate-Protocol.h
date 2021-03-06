//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, SCScanCardProvider;

@protocol SCScanCardProviderDelegate <NSObject>
@property(readonly, nonatomic) __weak id <SCLensUnlockDelegate> lensUnlockDelegate;
@property(retain, nonatomic) id <SCScanSourceInformation> scanSourceInformation;
- (void)scanCardProviderDidNotProvideScanCards:(SCScanCardProvider *)arg1;
- (void)scanCardProvider:(SCScanCardProvider *)arg1 didProvideScanCards:(NSArray *)arg2;
@end

