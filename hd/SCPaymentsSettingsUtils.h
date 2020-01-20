//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCPaymentsSettingsUtils : NSObject
{
}

+ (id)jsonStringFromDictionary:(id)arg1;
+ (_Bool)isPaymentSettingsVisible:(id)arg1;
+ (id)sortPaymentMethodsByPrimary:(id)arg1;
+ (id)sortShippingAddressesByLastUsedAt:(id)arg1;
+ (id)privacyLabelWithText:(id)arg1 numberOfLines:(int)arg2 parentView:(id)arg3;
+ (void)showErrorRetryCancelDialogWithTitle:(id)arg1 message:(id)arg2 retryActionHandler:(CDUnknownBlockType)arg3 cancelActionHandler:(CDUnknownBlockType)arg4;
+ (void)showErrorWithTitle:(id)arg1 message:(id)arg2;
+ (void)showRemoveCancelDialog:(id)arg1 removeActionHandler:(CDUnknownBlockType)arg2 cancelActionHandler:(CDUnknownBlockType)arg3;
+ (void)showOkayCancelDialog:(id)arg1 okayActionHandler:(CDUnknownBlockType)arg2 cancelActionHandler:(CDUnknownBlockType)arg3;
+ (id)pathForImageAsset:(id)arg1;
+ (void)downloadImageAssetsAsyncIfNecessaryWithDownloadableCM:(id)arg1;
+ (id)labelForShippingAddress:(id)arg1;
+ (id)cardImageIconNameForNetwork:(long long)arg1;

@end

