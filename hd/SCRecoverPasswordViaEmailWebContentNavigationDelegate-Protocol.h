//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCRecoverPasswordViaEmailNavigationStatus;

@protocol SCRecoverPasswordViaEmailWebContentNavigationDelegate <NSObject>
- (void)didFinishNavigationWithSuccess:(_Bool)arg1 navigationStatus:(SCRecoverPasswordViaEmailNavigationStatus *)arg2;
- (void)didStartNavigation:(SCRecoverPasswordViaEmailNavigationStatus *)arg1;
- (void)didUpdateNavigationStatus:(SCRecoverPasswordViaEmailNavigationStatus *)arg1;
@end
