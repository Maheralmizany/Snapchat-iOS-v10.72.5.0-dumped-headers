//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCMapDiscoverPresenter;

@protocol SCMapDiscoverPresenterDelegate <NSObject>

@optional
- (void)mapDiscoverPresenterDidFailToPresent:(SCMapDiscoverPresenter *)arg1;
- (void)mapDiscoverPresenterDidDismiss:(SCMapDiscoverPresenter *)arg1;
- (void)mapDiscoverPresenterDidPresent:(SCMapDiscoverPresenter *)arg1;
@end
