//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCMapPoiPresenter, UIViewController<SCPageNameLogging>;

@protocol SCMapPoiPresenterDelegate <NSObject>
- (void)didDismissPoiPresenter:(SCMapPoiPresenter *)arg1;
- (UIViewController<SCPageNameLogging> *)presentingViewControllerForPoiPresenter:(SCMapPoiPresenter *)arg1;
@end

